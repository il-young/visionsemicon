//---------------------------------------------------------------------------


#pragma hdrstop

#include "DBModule.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "System.Classes.TPersistent"
#pragma resource "*.dfm"
TDBManager *DBManager;
//---------------------------------------------------------------------------
__fastcall TDBManager::TDBManager(TComponent* Owner)
	: TDataModule(Owner)
{

}

bool __fastcall TDBManager::ConnectDB()
{
	if(dbConnection->Connected)
		dbConnection->Close();
	dbConnection->LoginPrompt = false;

	String strConn  = "Provider=Microsoft.Jet.OLEDB.4.0;";
	strConn += "Data Source=" + GetCurrentDir() + "\\User.MDB";
	strConn += ";Persist Security Info=False;";
	strConn += "Jet OLEDB:Database";

	dbConnection->ConnectionString = strConn;

	try
	{
		dbConnection->Open();
		if(dbConnection->State == (TObjectStates() << stOpen))
		{
			dbConnection->Connected = true;

		}
	}
	catch(Exception *e)
	{
		return false;
	}
}

bool __fastcall TDBManager::LoginCheckUser(AnsiString ID, AnsiString PASS, stUserInfo &info){



	if(!dbConnection->Connected) return false;

	String WHERE = "WHERE [USER_ID]= '" + ID  + "'";
	WHERE += " and [USER_PASS]= '" + PASS + "';";

	ConnectDB();

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("SELECT * from tblUser " + WHERE);
	dbQuery->Open();

	if(dbQuery->RecordCount > 0){
		info.USER_ID = dbQuery->FieldByName("USER_ID")->AsString;
		info.USER_PASS = dbQuery->FieldByName("USER_PASS")->AsString;
		info.USER_GROUP = dbQuery->FieldByName("USER_GROUP")->AsString;
		info.USER_DESCRIPTIONS = dbQuery->FieldByName("USER_DESCRIPTIONS")->AsString;
		info.USER_LOGOUTTIME = dbQuery->FieldByName("USER_LOGOUTTIME")->AsString;


		dbQuery->SQL->Clear();
		AnsiString a = Now();
		dbQuery->SQL->Add("UPDATE tblUser SET [USER_LOGINDATE] = '" + a +
		"' WHERE [USER_ID] = '"+info.USER_ID +"'" );
		dbQuery->Prepared = true;
		info.USER_LOGINDATE = a;
		dbQuery->ExecSQL();

		return true;
	}
	else return false;
}

stUserInfo __fastcall TDBManager::GetUserInfo(AnsiString ID){
	stUserInfo info;

	if(!dbConnection->Connected) return info;

	String WHERE = " WHERE [USER_ID]= '" + ID  + "';";

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("SELECT * from tblUser " + WHERE);
	dbQuery->Open();

	if(dbQuery->RecordCount > 0){
		info.USER_ID = dbQuery->FieldByName("USER_ID")->AsString;
		info.USER_PASS = dbQuery->FieldByName("USER_PASS")->AsString;
		info.USER_GROUP = dbQuery->FieldByName("USER_GROUP")->AsString;
		info.USER_DESCRIPTIONS = dbQuery->FieldByName("USER_DESCRIPTIONS")->AsString;
		info.USER_LOGOUTTIME = dbQuery->FieldByName("USER_LOGOUTTIME")->AsString;

		return info;
    }
	else return info;
}

deque<stUserInfo> __fastcall TDBManager::SelectUsers()
{
	deque<stUserInfo> list;
	list.clear();

	try
	{
		if(!dbConnection->Connected)
			return list;

		dbQuery->Connection = dbConnection;
		dbQuery->Close();
		dbQuery->SQL->Clear();
		dbQuery->SQL->Add("SELECT * from tblUser");
		dbQuery->Open();

		if(dbQuery->RecordCount > 0)
		{
			dbQuery->First();

			while(!dbQuery->Eof)
			{
                stUserInfo info;

				info.USER_ID = dbQuery->FieldByName("USER_ID")->AsString;
				info.USER_PASS = dbQuery->FieldByName("USER_PASS")->AsString;
				info.USER_GROUP = dbQuery->FieldByName("USER_GROUP")->AsString;
				info.USER_DESCRIPTIONS = dbQuery->FieldByName("USER_DESCRIPTIONS")->AsString;
				info.USER_LOGOUTTIME = dbQuery->FieldByName("USER_LOGOUTTIME")->AsString;

				list.push_back(info);

				dbQuery->Next();
			}
		}

		if(dbQuery->RecordCount > 0)
		{
			return list;
		}
		else
		{
			return list;
		}
	}
	catch(Exception *e)
	{
		return list;
	}
}

//����� �߰�
bool __fastcall TDBManager::AddUser(stUserInfo info)
{
	if(!dbConnection->Connected)	return false;

	String Field = " ([USER_ID], [USER_PASS], [USER_GROUP], [USER_DESCRIPTIONS], [USER_LOGOUTTIME] )";
	String Value = "'" + info.USER_ID + "','" + info.USER_PASS + "','";
	Value += info.USER_GROUP + "','" + info.USER_DESCRIPTIONS + "','";
	Value += info.USER_LOGOUTTIME + "'";

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("INSERT INTO tblUser " + Field + " VALUES ("+Value+");");
	dbQuery->Prepared = true;

	if(dbQuery->ExecSQL() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//����� ����
bool __fastcall TDBManager::EditUser(stUserInfo info)
{
	if(!dbConnection->Connected)	return false;

	String Value = "SET [USER_GROUP] = '" + info.USER_GROUP + "',";
	Value += "[USER_DESCRIPTIONS] = '" 	+ info.USER_DESCRIPTIONS + "',";
	Value += "[USER_LOGOUTTIME] = '" + info.USER_LOGOUTTIME + "'";
	String WHERE = " WHERE [USER_ID]= '" + info.USER_ID + "';";

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("UPDATE tblUser " + Value + WHERE);
	dbQuery->Prepared = true;

	if(dbQuery->ExecSQL() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//����� ����
bool __fastcall TDBManager::DeleteUser(AnsiString ID)
{
	if(!dbConnection->Connected)	return false;

	String WHERE = " WHERE [USER_ID]= '" + ID + "';";

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("DELETE from tblUser " + WHERE);
	dbQuery->Prepared = true;

	if(dbQuery->ExecSQL() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//SECS ���� ���
stSECSInfo __fastcall TDBManager::SelectSECSInfo()
{
	stSECSInfo info;
	info.SECS_TYPE = "";
	info.SECS_LIP = "";
	info.SECS_LPORT = 0;
	info.SECS_RIP = "";
	info.SECS_RPORT = 0;
	info.SECS_T3 = 0;
	info.SECS_T5 = 0;
	info.SECS_T6 = 0;
	info.SECS_T7 = 0;
	info.SECS_T8 = 0;
	info.SECS_T9 = 0;
	try
	{
		if(!dbConnection->Connected)
			return info;

		dbQuery->Connection = dbConnection;
		dbQuery->Close();
		dbQuery->SQL->Clear();
		dbQuery->SQL->Add("SELECT * from tblSetting");
		dbQuery->Open();

		if(dbQuery->RecordCount > 0)
		{
			dbQuery->First();

			info.SECS_TYPE = dbQuery->FieldByName("S_MODE")->AsString;
			info.SECS_LIP = dbQuery->FieldByName("S_LIP")->AsString;
			info.SECS_LPORT = dbQuery->FieldByName("S_LPORT")->AsString;
			info.SECS_RIP = dbQuery->FieldByName("S_RIP")->AsString;
			info.SECS_RPORT = dbQuery->FieldByName("S_RPORT")->AsString;
			info.SECS_T3 = dbQuery->FieldByName("S_T3")->AsString;
			info.SECS_T5 = dbQuery->FieldByName("S_T5")->AsString;
			info.SECS_T6 = dbQuery->FieldByName("S_T6")->AsString;
			info.SECS_T7 = dbQuery->FieldByName("S_T7")->AsString;
			info.SECS_T8 = dbQuery->FieldByName("S_T8")->AsString;
			info.SECS_T9 = dbQuery->FieldByName("S_T9")->AsString;
		}

		if(dbQuery->RecordCount > 0)
		{
			return info;
		}
		else
		{
			return info;
		}
	}
	catch(Exception *e)
	{
		return info;
	}
}

//SECS ���� ����
bool __fastcall TDBManager::EditSECS(stSECSInfo info)
{
	if(!dbConnection->Connected)	return false;

	String Value = "SET [SECS_TYPE] = '" + info.SECS_TYPE + "',";
	Value += "[SECS_IP] = '"	+ info.SECS_LIP + "',";
	Value += "[SECS_PORT] = '" 	+ info.SECS_LPORT + "',";
	Value += "[SECS_IP] = '"	+ info.SECS_RIP + "',";
	Value += "[SECS_PORT] = '" 	+ info.SECS_RPORT + "',";
	Value += "[SECS_T3] = '" 	+ info.SECS_T3 + "',";
	Value += "[SECS_T5] = '" 	+ info.SECS_T5 + "',";
	Value += "[SECS_T6] = '" 	+ info.SECS_T6 + "',";
	Value += "[SECS_T7] = '" 	+ info.SECS_T7 + "',";
	Value += "[SECS_T8] = '" 	+ info.SECS_T8 + "'";
	Value += "[SECS_T9] = '" 	+ info.SECS_T9 + "',";
	String WHERE = " WHERE [SECS_NO]= 'set';";

	dbQuery->Connection = dbConnection;
	dbQuery->Close();
	dbQuery->SQL->Clear();
	dbQuery->SQL->Add("UPDATE tblSECS " + Value + WHERE);
	dbQuery->Prepared = true;

	if(dbQuery->ExecSQL() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}