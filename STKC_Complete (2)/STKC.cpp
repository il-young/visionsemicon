//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include <string>
#include <stdio.h>
#include <windows.h>

#include "STKC.h"
#include "Change_AutoM_frm.h"
#include "LinkStatusChange_frm.h"
#include "Carrier_ToAGVPortPopup_frm.h"
#include "Carrier_ToPGVPortPopup_frm.h"
#include "Carrier_FormTopopup_frm.h"
#include "Carrier_LockComment_frm.h"
#include "History_Alarmform.h"
#include "History_Eventform.h"
#include "History_TransferCommandform.h"
#include "History_Operationform.h"
#include "History_Carrier_Historyform.h"
#include "Statistics_WorkTimeform.h"
#include "Statistics_Time_statistics_processform.h"
#include "System_UserManagementform.h"
#include "System_UserGroupingform.h"
#include "System_Max_PoolLevelform.h"
#include "Operation_ShelfTestForm.h"
#include "Operation_Shelf_Position_Confirmation_form.h"
#include "G_Define.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "EZGEMLib_OCX"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma resource "*.dfm"


Tstkc_frm *stkc_frm;



extern WideString GetBstr(const String sVal)
{
	return static_cast<WideString>(sVal);
};

//---------------------------------------------------------------------------
__fastcall Tstkc_frm::Tstkc_frm(TComponent* Owner)
	: TForm(Owner)
{
	Change_AutoManual_frm = new TChange_AutoManual_frm(this);
	Link_Status_Change_frm = new TLink_Status_Change_frm(this);
	Carrier_ToAGVPort_Popup_frm = new TCarrier_ToAGVPort_Popup_frm(this);
	Carrier_ToPGVPort_Popup_frm = new TCarrier_ToPGVPort_Popup_frm(this);
	Carrier_FormTo_popup_frm = new TCarrier_FormTo_popup_frm(this);
	Carrier_Lock_Comment_frm = new TCarrier_Lock_Comment_frm(this);
	History_Alarm_frm = new THistory_Alarm_frm(this);
	History_Event_frm = new THistory_Event_frm(this);
	History_TransferCommand_frm = new THistory_TransferCommand_frm(this);
	History_Operation_frm = new THistory_Operation_frm(this);
	History_Carrier_History_frm = new THistory_Carrier_History_frm(this);
	Statistics_WorkTime_frm = new TStatistics_WorkTime_frm(this);
	Statistics_Time_statistics_process_frm = new TStatistics_Time_statistics_process_frm(this);
	System_UserManagement_frm = new TSystem_UserManagement_frm(this);
	System_UserGrouping_frm = new TSystem_UserGrouping_frm(this);
	System_Max_PoolLevel_frm = new TSystem_Max_PoolLevel_frm(this);
	Operation_ShelfTest_frm = new TOperation_ShelfTest_frm(this);
	Operation_Shelf_Position_Confirmation_frm = new TOperation_Shelf_Position_Confirmation_frm(this);


}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Carrier_GridGetCellColor(TObject *Sender, int ARow, int ACol,
          TGridDrawState AState, TBrush *ABrush, TFont *AFont)
{
//	if (ACol == 1 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//	 //Carrier_Grid->Cells[1][1] = "Alex";
//
//   }
//   if (ACol == 1 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 1 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 1 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clRed;
//   }
////---------------------------------------------------------------------------
//   if (ACol == 2 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 2 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 2 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 2 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clRed;
//   }
////---------------------------------------------------------------------------
//	if (ACol == 3 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 3 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 3 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 3 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 4 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 4 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 4 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 4 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 5 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 5 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 5 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 5 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 6 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 6 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 6 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 6 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 7 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 7 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 7 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clSilver;
//   }
//   if (ACol == 7 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clBlack;
//   }
////---------------------------------------------------------------------------
//if (ACol == 8 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 8 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 8 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 8 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 9 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 9 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 9 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 9 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
//if (ACol == 10 && ARow == 1)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMenuHighlight;
//   }
//   if (ACol == 10 && ARow == 2)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 10 && ARow == 3)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
//   if (ACol == 10 && ARow == 4)
//   {
//	 Carrier_Grid->Canvas->Brush->Color = clMoneyGreen;
//   }
////---------------------------------------------------------------------------
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::FormCreate(TObject *Sender)
{

	//Setting_Frm->Read_Setting();

	gd_carrier->RemoveRows(0,5);

	gd_carrier->AddRow();


        _TCPIPManager = new TCPIPManager();
	_NodeListManager = new NodeList();
	_NodeListManager->InitialNode();


}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::AutoManual1Click(TObject *Sender)
{
	Change_AutoManual_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::LinkStatusChange1Click(TObject *Sender)
{
	Link_Status_Change_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::oAGVPort1Click(TObject *Sender)
{
	Carrier_ToAGVPort_Popup_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::oPGVPort1Click(TObject *Sender)
{
	Carrier_ToPGVPort_Popup_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::FormTo1Click(TObject *Sender)
{
	Carrier_FormTo_popup_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Lock1Click(TObject *Sender)
{
	Carrier_Lock_Comment_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Event1Click(TObject *Sender) //설정된 파일 열기
{
	ShellExecute(Handle, L"open", L"notepad", L"D:\\test.txt", 0, SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Operation2Click(TObject *Sender) //설정된 파일 열기
{
	ShellExecute(Handle, L"open", L"notepad", L"D:\\test.txt", 0, SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::HostCommunication1Click(TObject *Sender) //설정된 파일 열기
{
	ShellExecute(Handle, L"open", L"notepad", L"D:\\test.txt", 0, SW_SHOW);
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::LogFolder1Click(TObject *Sender)//설정된 폴더 Open
{
	ShellExecute(NULL, L"runas", L"explorer", L"D:\\Exercise", 0, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Alarm1Click(TObject *Sender)
{
	History_Alarm_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Event2Click(TObject *Sender)
{
	History_Event_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::ransferCommand1Click(TObject *Sender)
{
	History_TransferCommand_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Operation3Click(TObject *Sender)
{
	History_Operation_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::CarrierHistory1Click(TObject *Sender)
{
	History_Carrier_History_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N2Click(TObject *Sender)
{
	Statistics_WorkTime_frm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::N1Click(TObject *Sender)
{
	Statistics_Time_statistics_process_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::UserManagement1Click(TObject *Sender)
{
	PNT_ListBox("ENTER USER MANAGERMENT");
	System_UserManagement_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::UserGrouping1Click(TObject *Sender)
{
	System_UserGrouping_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::MaxPoolLevel1Click(TObject *Sender)
{
	System_Max_PoolLevel_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N3Click(TObject *Sender)
{
	Operation_ShelfTest_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N4Click(TObject *Sender)
{
	Operation_Shelf_Position_Confirmation_frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Setting1Click(TObject *Sender)
{
	Setting_Frm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::btn_loginClick(TObject *Sender)
{
	if (btn_login->Caption == "Login Here") {
		Login_frm->ShowModal();
	}
	else	{

		if (MessageDlg("Log Out?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0) == mrYes) {
			logout();
		}
	}

}
//---------------------------------------------------------------------------



void __fastcall Tstkc_frm::logout_timerTimer(TObject *Sender)
{
	if (logout_cnt >= logout_time )	{
		logout();
	}
	else	logout_cnt++;

}

void __fastcall Tstkc_frm::logout()
{
	PNT_ListBox(STK_SRVinfo.SRV_USER  + " LogOut");

	STK_SRVinfo.SRV_USER  = "";
	logout_time = 0;
	logout_cnt = 0;

	logout_timer->Enabled = false;

	stkc_frm->btn_login->Caption = "Login Here";

	//EZGEM1->GoOffline();
}

//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::STKC_OnActive(TObject *Sender)
{

	lb_msg->Clear();

	Setting_Frm->Read_Setting();
	Init_Err_Code();


	bool a;

	//DBManager->Alarm_List_Load();
	DBManager->ALDB_Connect();
	SystemDB_Connect();
	//Setting_Frm->Read_Setting();
	CarrierGrid_init();
	AlarmGrid_init();
	EZGEM_Init();
//	SystemDB_Connect();
	//Alarm_List_Load();




	STK_SRVinfo.SRV_NOWDATE = FormatDateTime("MM/DD/YY", Now());;
	STK_SRVinfo.SRV_NOWTIME = Time().TimeString();



	//EZGEM1->SendMsg(256);

	DB_Loading(false);

	PNT_ListBox("Stocker Server Reboot");

	run = true;
}




//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::CarrierGrid_init(void)
{
	gd_carrier->RemoveRows(1,9);
	gd_carrier->RemoveCols(1,4);

	int i, j, row, col;

	col = StrToInt(Setting_Frm->tb_col->Text );
	row = StrToInt(Setting_Frm->tb_row->Text );



	for(i=0 ; i <= col-1 ; i++)
	{
		gd_carrier->AddColumn();
	}

	for(i=1 ; i <= gd_carrier->TotalColCount()-1 ; i++)
	{
		gd_carrier->ColWidths[i]  = int( (gd_carrier->Width-50) /col);
		gd_carrier->Cells[i][0] =  IntToStr(i);
	}

	gd_carrier->ColWidths[0] = 40;

	for (j=0 ; j <= row-1 ; j++)
		gd_carrier->AddRow();
	for (j=1 ; j < gd_carrier->TotalRowCount() ; j++)
	{
		gd_carrier->RowHeights[j] = int((gd_carrier->Height-20) / row)-3;
		gd_carrier->Cells[0][j] = IntToStr(j);
	}

	gd_carrier->RowHeights[0] = 25;

	//DBManager->GetAllCarrierinfo();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::AlarmGrid_init(void)
{
	gd_Alarm->RemoveRows(1,8);
	gd_Alarm->RemoveCols(0,4);

	int i, j, row, col;

	col = 7;
	row = 50;

	for(i=0 ; i <= col-1 ; i++)
	{
		gd_Alarm->AddColumn();

	}
	gd_Alarm->ColWidths[0] = 50;
	gd_Alarm->ColWidths[1] = 150;
	gd_Alarm->ColWidths[2] = 150;
	gd_Alarm->ColWidths[3] = 120;
	gd_Alarm->ColWidths[4] = 250;
	gd_Alarm->ColWidths[5] = 300;
	gd_Alarm->ColWidths[6] = 250;
	gd_Alarm->ColWidths[7] = 250;


	gd_Alarm->Cells[1][0] = "Alarm ID";
	gd_Alarm->Cells[2][0] = "Error Code";
	gd_Alarm->Cells[3][0] = "Name";
	gd_Alarm->Cells[4][0] = "Locaation";
	gd_Alarm->Cells[5][0] = "Details";
	gd_Alarm->Cells[6][0] = "Start Time";
	gd_Alarm->Cells[7][0] = "Over Time";

	for(i=0 ; i <= row-1 ; i++)
	{
		gd_Alarm->AddRow();

		if (i!=0)
		{
			gd_Alarm->Cells[0][i] = IntToStr(i);
			gd_Alarm->RowHeights[i] = 30;
		}

	}
}
//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::EZGEM_Init()
{
//---------------------------------------------------------------------------
//EZGEM Setting
	EZGEM1->T3 = Setting_Frm->tb_t3->Text.ToInt();
	EZGEM1->T5 = Setting_Frm->tb_t5->Text.ToInt();
	EZGEM1->T6 = Setting_Frm->tb_t6->Text.ToInt();
	EZGEM1->T7 = Setting_Frm->tb_t7->Text.ToInt();
	EZGEM1->T8 = Setting_Frm->tb_t8->Text.ToInt();
	EZGEM1->EstablishCommRetryTimer = Setting_Frm->tb_t9->Text.ToInt();

	if (Setting_Frm->cb_connect_mode->Text == "PASSIVE")
        {
		EZGEM1->PassiveMode = true;
	}
	else
        {
        	EZGEM1->PassiveMode = false;
        }

	EZGEM1->IP = Setting_Frm->AdvIPEdit2->IPAddress;
	EZGEM1->Port = Setting_Frm->tb_remote_port->Text.ToInt() ;
	EZGEM1->SecsI = False;
	EZGEM1->DeviceID = Setting_Frm->tb_dev_num->Text.ToDouble() ;
	EZGEM1->EstablishCommRetryTimer = 5;
	EZGEM1->SetModelName(GetBstr(stkc_frm->STK_SRVinfo.SRV_MODELNAME).c_bstr());
	EZGEM1->SetSoftwareRev(GetBstr(stkc_frm->STK_SRVinfo.SRV_VERSION).c_bstr());

	EZGEM1->HostMode = false;

	EZGEM1->AddRemoteCommand(GetBstr("ABORT").c_bstr() );
	EZGEM1->AddRemoteCommand(GetBstr("CANCEL").c_bstr() );
	EZGEM1->AddRemoteCommand(GetBstr("TRANSFER").c_bstr() );
	EZGEM1->AddRemoteCommand(GetBstr("MOVE").c_bstr() );

        EZGEM1->LinkTestInterval = 300;
        EZGEM1->Retry = 3;

	AddSVIDs();
	AddCEIDs();
	//AddECIDs();
	AddALIDs();
        SetRPTIDs();
        AddRemoteCommands();

	EZGEM1->SetFormatCodeALID(54);
	EZGEM1->SetFormatCodeSVID(54);
	EZGEM1->SetFormatCodeDATAID(52);
	EZGEM1->SetFormatCodeCEID(54);
	//EZGEM1->SetFormatCodeECID(ITEM_UINT4B);
	EZGEM1->SetFormatCodeRPTID(54);
	EZGEM1->SetFormatCodeTRACEID(54);

        EZGEM1->DisableAutoReply(2, 49);
        EZGEM1->DisableAutoReply(3, 17);

	WideString sFile;
	sFile = "LOG\\GEM.LOG";
	EZGEM1->SetLogFile(GetBstr(sFile).c_bstr(),true);

	EZGEM1->DisableSpooling();

	sFile = "DATA\\FORMAT.SML";
	EZGEM1->SetFormatFile(GetBstr(sFile).c_bstr() );

	EZGEM1->SetLogRetention(30);
	EZGEM1->SetFormatCheck(1);

	GemState->bEnabled = true;

	GemState->nControlState = 0;


	//EZGEM1->DisableAutoReply(6,1);
	int res = EZGEM1->Start();


	if(res < 0)
        {
		ShowMessage(GetErrorCode(res));
        }
        else
        {
                EZGEM1->GoOnlineRemote();
                GEMState_Update(CONTROL_ONLINE_REMOTE);

//		if(Ecid->nDefaultControlState == CONTROL_ONLINE_LOCAL)
//			EZGEM1->GoOnlineLocal();		// Control State를 Online Local 으로 만든다.
//		else if(Ecid->nDefaultControlState == CONTROL_ONLINE_REMOTE)
//			EZGEM1->GoOnlineRemote();    // Control State를 Online Remote 으로 만든다.
//		else if(Ecid->nDefaultControlState == CONTROL_EQUIPMENT_OFFLINE)
//			EZGEM1->GoOffline();         // Control State를 Offline 으로 만든다.
	}

	EZGEM1->EnableCommunication();	// 통신 가능한 상태로 만들기 위해 CommRequest 타이머 작동

}

void __fastcall Tstkc_frm::AddRemoteCommands(void)
{
	EzGem->AddRemoteCommand(GetBstr("ABORT").c_bstr() );
	EzGem->AddRemoteCommand(GetBstr("CANCEL").c_bstr() );
}



String __fastcall Tstkc_frm::GetErrorCode(const short ret)
{
	String sRet = "";
	switch (ret)
	{
	case LICENSE_PROBLEM:
		sRet = "License Problem";
		break;
	case CONFIG_FILE_NOTFOUND:
		sRet = "No Configuration File";
		break;
	case FILE_NOT_FOUND:
		sRet = "There is no File";
		break;
	case FILE_IO_FAILURE:
		sRet = "File Input/Output Failure";
		break;
	case FILE_CREATION_ERROR:
		sRet = "Failure of file creation";
		break;
	case NO_ITEM:
		sRet = "There is no item";
		break;
	case TYPE_MISMATCH:
		sRet = "Type of Item is not matched";
		break;
	case SIZE_MISMATCH:
		sRet = "Size and count of item is not matched";
		break;
	case ITEM_I1_OVERFLOW:
		sRet = "I1(1Byte Integer) Overflow happened";
		break;
	case ITEM_I2_OVERFLOW:
		sRet = "I2(2Byte Integer) Overflow happened";
		break;
	case ITEM_I4_OVERFLOW:
		sRet = "I4(4Byte Integer) Overflow happened";
		break;
	case ITEM_U1_OVERFLOW:
		sRet = "U1(1Byte Unsigned Integer) Overflow happened";
		break;
	case ITEM_U2_OVERFLOW:
		sRet = "U2(2Byte Unsigned Integer) Overflow happened";
		break;
	case ITEM_U4_OVERFLOW:
		sRet = "U4(4Byte Unsigned Integer) Overflow happened";
		break;
	case INVALID_MSGID:
		sRet = "Invalid Message ID";
		break;
	case INVALID_STREAM:
		sRet = "Invalid Stream Number";
		break;
	case INVALID_FUNCTION:
		sRet = "Invalid Function Number";
		break;
	case DUPLICATE_SYSTEMBYTE:
		sRet = "System Byte duplicate";
		break;
	case UNDEFINED_STRUCTURE:
		sRet = "Received the not defined Message Structure";
		break;
	case NOT_CONNECTED:
		sRet = "Not Connected yet";
		break;
	case LOW_LEVEL_ERROR:
		sRet = "Error of Operating System";
		break;
	case NOT_SUPPORTED:
        	sRet = "Not supported function";
		break;
	case ALREADY_CONNECTED:
		sRet = "Already connected";
		break;
	case ALREADY_STATRED:
		sRet = "Already drived";
		break;
	case THREAD_NULL:
		sRet = "Various Thread error";
		break;
	case CREATE_EVENT_FAIL:
		sRet = "Event happened error";
		break;
	case SERIAL_OPEN_FAIL:
		sRet = "Serial Port activating error";
		break;
	case SERIAL_SETUP_FAIL:
		sRet = "Serial Port initializing error";
		break;
	case TIMER_CREATE_FAIL:
		sRet = "Timer Creating error";
		break;
	case NOT_STARTED_YET:
		sRet = "Program not activated";
		break;
	case SOCKET_INUSE:
		sRet = "Socket is used already";
		break;
	case SOCKET_STARTERROR:
		sRet = "Socket Activating error";
		break;
	case SOCKET_INVALID:
		sRet = "Invalid Socket";
		break;
	case SOCKET_WINDOWERROR:
		sRet = "Worker Window error for communitating message";
		break;
	case SOCKET_LOCALNAME:
		sRet = "Error happened during getting Host name";
		break;
	case SOCKET_CONNECTERROR:
		sRet = "Socket connecting error";
		break;
	case SOCKET_SETEVENT:
		sRet = "Socket Event Selecting error";
		break;
	case SOCKET_RESOLVE:
		sRet = "Resolve() executing error of Socket functions";
		break;
	default:
		break;
	}

	return sRet;
}

	//Add Status Variable ID
//AddSVID(id,name,format,unit)
void __fastcall Tstkc_frm::AddSVIDs(void)
{
	String sFile = "../../DATA\\STK_SVID.TXT";
	if(!FileExists(sFile))
	{
		ShowMessage("SVID Definition file does not exist.");
		return;
	}

	boost::shared_ptr<TStringList> sLine (new TStringList());
	boost::shared_ptr<TStringList> sData (new TStringList());
	sLine->LoadFromFile(sFile);

        long a,b;
        wstring  str1, str2;

	for(int i=0; i<sLine->Count; i++)
	{
		sData->CommaText = sLine->Strings[i];

                a = (long)(sData->Strings[0].ToIntDef(0));
                str1 = GetBstr(sData->Strings[1]).c_bstr();
	        str2 = GetBstr(sData->Strings[2]).c_bstr();

		if(sData->Count != 3)
			continue;
		else
			EZGEM1->AddSVID(a, GetBstr(sData->Strings[1]).c_bstr()  , GetBstr(sData->Strings[2]).c_bstr(), GetBstr("").c_bstr());

	}
}
void __fastcall Tstkc_frm::AddCEIDs(void)
{
String sFile = "../../DATA\\STK_CEID.TXT";
	if(!FileExists(sFile))
	{
		ShowMessage("CEID Definition file does not exist.");
		return;
	}

	boost::shared_ptr<TStringList> sLine (new TStringList());
	boost::shared_ptr<TStringList> sData (new TStringList());
	sLine->LoadFromFile(sFile);

        long a,b;
        wstring  str1, str2;

	for(int i=0; i<sLine->Count; i++)
	{
		sData->CommaText = sLine->Strings[i];

                a = (long)(sData->Strings[0].ToIntDef(0));
                str1 = GetBstr(sData->Strings[1]).c_bstr();
	        str2 = GetBstr(sData->Strings[2]).c_bstr();

		if(sData->Count != 3)
			continue;
		else
			EZGEM1->AddCEID(a, GetBstr(sData->Strings[1]).c_bstr()  , GetBstr(sData->Strings[2]).c_bstr(), GetBstr("").c_bstr());

	}
}


//Add Alarm ID
//AddAlarmID(id,name,comment)
void __fastcall Tstkc_frm::AddALIDs(void)
{

	String sFile = "../../DATA\\STK_ALID.TXT";
	if(!FileExists(sFile))
	{
		ShowMessage("ALID Definition file does not exist.");
		return;
	}

	boost::shared_ptr<TStringList> sLine (new TStringList());
	boost::shared_ptr<TStringList> sData (new TStringList());
	sLine->LoadFromFile(sFile);

	for(int i=0; i<sLine->Count; i++)
	{
		sData->Delimiter = '\t';
		sData->DelimitedText = sLine->Strings[i];

		if(sData->Count < 2)
			continue;
		else
		{
			String sErrContents = "";
			for(int j=1; j<sData->Count; j++)
			{
				sErrContents = sErrContents + sData->Strings[j];
				sErrContents += " ";
			}

			EZGEM1->AddAlarmID((long)(sData->Strings[0].ToIntDef(0) ), GetBstr(sData->Strings[1]).c_bstr(), GetBstr(sErrContents).c_bstr() );
        }
	}
}

//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::SetRPTIDs(void)
{
	long RPTID_1[3] = {VID_Clock ,VID_EqpName, VID_PortID};
	EzGem->SetReport(1,RPTID_1,3);

        long RPTID_2[3] = {VID_Clock ,VID_EqpName, VID_StockerAvailable};
	EzGem->SetReport(2,RPTID_1,3);

        long RPTID_3[3] = {VID_Clock ,VID_PrevSTKSState, VID_ControlState};
	EzGem->SetReport(3,RPTID_1,3);

	long RPTID_4[3] = {VID_Clock ,VID_PrevSTKSState,VID_STKSState};
	EzGem->SetReport(4,RPTID_1,3);

        long RPTID_5[2] = {VID_Clock ,VID_STKSStateAvailability};
	EzGem->SetReport(5,RPTID_1,2);

        long RPTID_6[2] = {VID_Clock ,VID_CommandID};
	EzGem->SetReport(6,RPTID_1,2);

        long RPTID_7[3] = {VID_Clock ,VID_CommandID, VID_StockerCraneID;
	EzGem->SetReport(7,RPTID_1,3);
//
        long RPTID_8[3] = {VID_Clock ,VID_CarrierInfo, VID_StockerCraneID};
	EzGem->SetReport(8,RPTID_1,3);

        long RPTID_9[3] = {VID_Clock ,VID_CarrierInfo, VID_StockerName};
	EzGem->SetReport(9,RPTID_1,3);

        long RPTID_10[3] = {VID_Clock ,VID_CommandID, VID_CarrierInfo};
	EzGem->SetReport(10,RPTID_1,3);

        long RPTID_11[4] = {VID_Clock ,VID_CommandID, VID_CarrierInfo, VID_Dest};
	EzGem->SetReport(11,RPTID_1,4);

        long RPTID_12[3] = {VID_Clock ,VID_CommandID, VID_CarrierInfo};
	EzGem->SetReport(12,RPTID_1,3);

        long RPTID_13[3] = {VID_Clock ,VID_CarrierInfo, VID_PortType};
	EzGem->SetReport(13,RPTID_1,3);

        long RPTID_14[4] = {VID_Clock ,VID_CommandID, VID_CarrierInfo, VID_Dest};
	EzGem->SetReport(14,RPTID_1,4);

        long RPTID_15[3] = {VID_Clock ,VID_CarrierInfo, VID_IDReadStateus};
	EzGem->SetReport(15,RPTID_1,3);

        long RPTID_16[2] = {VID_Clock ,VID_ActiveCarriers};
	EzGem->SetReport(16,RPTID_1,2);

        long RPTID_17[8] = {VID_Clock ,VID_AlarmID, VID_AlarmID, VID_ErrorID, VID_CommandID, VID_StockerUnitInfo, VID_StockerCraneID, VID_AlarmLoc};
	EzGem->SetReport(17,RPTID_1,8);

        long RPTID_18[7] = {VID_Clock ,VID_CommandID, VID_CommandType, VID_CarrierID, VID_Source, VID_Dest, VID_Priority};
	EzGem->SetReport(18,RPTID_1,7);

}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1_OnConnected(TObject *Sender)
{
	//lb_msg->Items->Add("123456789012345678901234567890123456");
	//lb_msg->Items->Add(Now().DateTimeString());
	PNT_ListBox("MES Server Connected");

	EZGEM1->GoOnlineRemote();
	EZGEM1->EnableCommunication();
	EZGEM1->GoOnlineRemote();
	STK_SRVinfo.SRV_ONLINE_STATE = "ONLINE";
        //GemState->nControlState = CONTROL_ATTEMPT_ONLINE;
        GEMState_Update(CONTROL_ATTEMPT_ONLINE);

	//S1F13();
}
//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::S1F13(void)
{
//	if(GemState->bConnectedFg == true){
		WideString ASK_MDLN = STK_SRVinfo.SRV_MODELNAME; //"TEST_MDLN";				//A[6]
		WideString ASK_SOFTREV = STK_SRVinfo.SRV_VERSION;		//A[6]

		long lMsgID;

		AnsiString str;

		lMsgID = EZGEM1->CreateMsg(1,13,1);

		EZGEM1->OpenListItem(lMsgID);
                EZGEM1->AddAsciiItem(lMsgID, GetBstr(ASK_MDLN).c_bstr(), ASK_MDLN.Length());
                EZGEM1->AddAsciiItem(lMsgID, GetBstr(ASK_SOFTREV).c_bstr(), ASK_MDLN.Length());
		EZGEM1->CloseListItem(lMsgID);

		EZGEM1->SendMsg(lMsgID);

//	}
}


//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::PNT_ListBox(String msg)
{
	String buf = FormatDateTime("MM/DD/YY hh:mm", Now());

	int a, b;

	String str = ToUpper(msg);
	a = buf.Length();
	b = msg.Length();

	String temp = "";

	lb_msg->Sorted = true;

	for (int i=0; i < 48-a-b-2  ; i++) {
		temp += "_";
	}
	String aa =buf + " " + temp + " " + str;


	lb_msg->Items->Insert(0,buf + " " + temp + " " + str);


	SaveMessage(msg);

}


void __fastcall Tstkc_frm::EZGEM1_OnDisConnected(TObject *Sender)
{
//	STK_SRVinfo.SRV_ONLINE_STATE = "OFFLINE";
        //GemState->nControlState = CONTROL_HOST_OFFLINE;
	//PNT_ListBox("MES SERVER Disconnected");
        GEMState_Update(CONTROL_HOST_OFFLINE);
}
//---------------------------------------------------------------------------




//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::pn_lrDblClick(TObject *Sender)
{
	//if (STK_SRVinfo.SRV_ONLINE_STATE == "ONLINE")
//        if(GemState->nControlState == CONTROL_ATTEMPT_ONLINE)
//	{
		if(GemState->nControlState == CONTROL_ONLINE_REMOTE )
		{
			if (MessageDlg("REMOTE -> LOCAL?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
                        {
				EZGEM1->GoOnlineLocal();
//				GemState->nControlState = CONTROL_ONLINE_LOCAL;
//				PNT_ListBox("REMOTE -> LOCAL");
//				pn_lr->Caption = "ONLINE / LOCAL";
				GEMState_Update(CONTROL_ONLINE_LOCAL);
			}
		}
		else if(GemState->nControlState == CONTROL_ONLINE_LOCAL)
		{
			if (MessageDlg("LOCAL -> REMOTE?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0) == mrYes) {
				EZGEM1->GoOnlineRemote();
//                              GemState->nControlState = CONTROL_ONLINE_REMOTE;
//				PNT_ListBox("LOCAL -> REMOTE");
//				pn_lr->Caption = "ONLINE / REMOTE";
                                GEMState_Update(CONTROL_ONLINE_REMOTE);
			}
		}
                else if(GemState->nControlState == CONTROL_HOST_OFFLINE)
                {
                        if (MessageDlg("OFFLINE -> ONLINE?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
                        {

                                //EZGEM1->Retry;
                        	EZGEM1->GoOnlineRemote();
//                        	GemState->nControlState = CONTROL_ONLINE_REMOTE;
//                      	STK_SRVinfo.SRV_ONLINE_STATE = "ONLINE";
//                      	STK_SRVinfo.SRV_LOCAL_REMOTE_STATE = "REMOTE";
//                        	pn_lr->Caption = "ONLINE / REMOTE";
//                        	PNT_ListBox("OFFLINE -> ONLINE");
                                GEMState_Update(CONTROL_ONLINE_REMOTE);

                        }
                }


//	else
//	{
//		MessageDlg("OFFLINE",mtConfirmation,TMsgDlgButtons() << mbOK,0);
//		PNT_ListBox("OFFLINE");
//    }
}

//---------------------------------------------------------------------------
  void __fastcall Tstkc_frm::SaveMessage(AnsiString msg)
  {

	AnsiString dir = GetCurrentDir();
	char cA[255];
	AnsiString str;
	int FileHandle;

	dir += "\\MessageLog\\";

	msg += "\n";
	msg = STK_SRVinfo.SRV_NOWDATE + " " + STK_SRVinfo.SRV_NOWTIME + " : " + msg;

	str = dir + STK_SRVinfo.SRV_NOWDATE + ".txt";

	FILE *log = fopen(str.c_str(),"a+");



	if (!DirectoryExists(ExtractFilePath(str)))
	{
		ForceDirectories(ExtractFilePath(str));

		log = fopen(str.c_str(), "w+");
		fputs(msg.c_str(),log);
		fclose(log);
	}
	else
	{
		if(FileExists(str.c_str())== false )
		{
			CreateFileA(str.c_str() , GENERIC_READ|GENERIC_WRITE, 0, NULL, OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL|FILE_FLAG_NO_BUFFERING|FILE_FLAG_SEQUENTIAL_SCAN, NULL);
			fputs(msg.c_str(),log);
			fclose(log);
		}
		else
		{
			fputs(msg.c_str(),log);
			fclose(log);
		}
	}
}

//---------------------------------------------------------------------------



void __fastcall Tstkc_frm::FormClose(TObject *Sender, TCloseAction &Action)
{
	run = false;

	Sleep(500);

	PNT_ListBox("STOKER SERVER CLOSE");
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::gd_carrierRightClickCell(TObject *Sender, int ARow, int ACol)

{
	tagPOINT *pt;
	GetCursorPos(pt) ;

	Carrier_cell.x = ACol;
	Carrier_cell.y = ARow;

	Carrier_grid_menu->Popup(pt->x, pt->y );


}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::EZGEM1Connected(TObject *Sender)
{
	PNT_ListBox("MES Server Connected");

	EZGEM1->GoOnlineRemote();
	EZGEM1->EnableCommunication();
	EZGEM1->GoOnlineRemote();
//	STK_SRVinfo.SRV_ONLINE_STATE = "ONLINE";
//	GemState->nControlState = CONTROL_ONLINE_REMOTE;
        //pn_lr->Caption = "ONLINE";
	GEMState_Update(CONTROL_ONLINE_REMOTE);
	//EZGEM1->Start();
	//S1F13();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1Disconnected(TObject *Sender)
{
	GemState->bConnectedFg = false;
	GemState->bEstablish = false;
	GemState->bEnabled = false;

//	STK_SRVinfo.SRV_ONLINE_STATE = "OFFLINE";
//	GemState->nControlState = CONTROL_HOST_OFFLINE;
//	PNT_ListBox("MES SERVER Disconnected");
	GEMState_Update(CONTROL_HOST_OFFLINE);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::gd_carrierGetCellColor(TObject *Sender, int ARow, int ACol,
		  TGridDrawState AState, TBrush *ABrush, TFont *AFont)
{

		String  str;
		str = stkc_frm->gd_carrier->Cells[ACol][ARow];

		if(str == Carrier_ST_Alarm_Str)
		{
			gd_carrier->Canvas->Brush->Color = clRed;
		}
		else if(str == Carrier_ST_Complete_Str)
		{
			gd_carrier->Canvas->Brush->Color = clBlue ;
		}
		else if(str == Carrier_ST_Idel_Str)
		{
			gd_carrier->Canvas->Brush->Color = clMoneyGreen;
		}
		else if(str == Carrier_ST_Lock_Str)
		{
			gd_carrier->Canvas->Brush->Color = clMaroon   ;
		}
		else
		{
		gd_carrier->Canvas->Brush->Color = clSilver ;
		}

}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Button1Click(TObject *Sender)
{
//	DBManager->btntest();
	//System_UserManagement_frm->Show();
        S1F13();
}

//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::btn_lockClick(TObject *Sender)
{
	DBManager->Carrier_Lock(Carrier_cell.x,Carrier_cell.y);
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::Carrier_grid_menuPopup(TObject *Sender)
{
	stCARRIERInfo info;
	info = DBManager->GetCarrierinfo(Carrier_cell.x, Carrier_cell.y);

	if (info.ST == Carrier_ST_Lock)
	{
		btn_lock->Enabled = false;
		btn_unlock->Enabled = true;
	}
	else
	{
		btn_lock->Enabled = true;
		btn_unlock->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::btn_unlockClick(TObject *Sender)
{
	DBManager->Carrier_unLock(Carrier_cell.x,Carrier_cell.y);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::SystemDB_Connect(void)
{
	SystemConnection->Close();
	String strConn = "Provider=Microsoft.Jet.OLEDB.4.0;";
	strConn += "Data Source=" + GetCurrentDir() + "\\System_Infomation.MDB";
	strConn += ";Persist Security Info=False;";
	strConn += "Jet OLEDB:Database";
	SystemConnection->ConnectionString  = strConn;

	SystemQuery->Connection = SystemConnection;

	SystemConnection->Open();
	if(SystemConnection->State == (TObjectStates() << stOpen))
	{
		SystemConnection->Connected = true;
	}
}


void __fastcall Tstkc_frm::Init_Err_Code(void)
{
	Err_Code_Str_arr[0] = "NULL";
	Err_Code_Str_arr[1] = ERR_CODE_1_STR;
	Err_Code_Str_arr[2] = ERR_CODE_2_STR;
	Err_Code_Str_arr[3] = ERR_CODE_3_STR;
	Err_Code_Str_arr[4] = ERR_CODE_4_STR;
	Err_Code_Str_arr[5] = ERR_CODE_5_STR;
	Err_Code_Str_arr[6] = ERR_CODE_6_STR;
	Err_Code_Str_arr[7] = ERR_CODE_7_STR;
	Err_Code_Str_arr[8] = ERR_CODE_8_STR;
	Err_Code_Str_arr[9] = ERR_CODE_9_STR;
	Err_Code_Str_arr[10] = ERR_CODE_10_STR;
	Err_Code_Str_arr[11] = ERR_CODE_11_STR;
	Err_Code_Str_arr[12] = ERR_CODE_12_STR;
	Err_Code_Str_arr[13] = ERR_CODE_13_STR;
	Err_Code_Str_arr[14] = ERR_CODE_14_STR;
	Err_Code_Str_arr[15] = ERR_CODE_15_STR;
	Err_Code_Str_arr[16] = ERR_CODE_16_STR;
	Err_Code_Str_arr[17] = ERR_CODE_17_STR;
	Err_Code_Str_arr[18] = ERR_CODE_18_STR;
	Err_Code_Str_arr[19] = ERR_CODE_19_STR;
	Err_Code_Str_arr[20] = ERR_CODE_20_STR;
	Err_Code_Str_arr[21] = ERR_CODE_21_STR;
	Err_Code_Str_arr[22] = ERR_CODE_22_STR;
	Err_Code_Str_arr[23] = ERR_CODE_23_STR;
	Err_Code_Str_arr[24] = ERR_CODE_24_STR;
	Err_Code_Str_arr[25] = ERR_CODE_25_STR;
	Err_Code_Str_arr[26] = ERR_CODE_26_STR;
	Err_Code_Str_arr[27] = ERR_CODE_27_STR;
	Err_Code_Str_arr[28] = ERR_CODE_28_STR;
	Err_Code_Str_arr[29] = ERR_CODE_29_STR;
	Err_Code_Str_arr[30] = ERR_CODE_30_STR;
	Err_Code_Str_arr[31] = ERR_CODE_31_STR;
	Err_Code_Str_arr[32] = ERR_CODE_32_STR;
	Err_Code_Str_arr[33] = ERR_CODE_33_STR;
	Err_Code_Str_arr[34] = ERR_CODE_34_STR;
	Err_Code_Str_arr[35] = ERR_CODE_35_STR;
	Err_Code_Str_arr[36] = ERR_CODE_36_STR;
	Err_Code_Str_arr[37] = ERR_CODE_37_STR;
	Err_Code_Str_arr[38] = ERR_CODE_38_STR;
	Err_Code_Str_arr[39] = ERR_CODE_39_STR;
	Err_Code_Str_arr[40] = ERR_CODE_40_STR;
	Err_Code_Str_arr[41] = ERR_CODE_41_STR;
	Err_Code_Str_arr[42] = ERR_CODE_42_STR;
	Err_Code_Str_arr[43] = ERR_CODE_43_STR;
	Err_Code_Str_arr[44] = ERR_CODE_44_STR;
	Err_Code_Str_arr[45] = ERR_CODE_45_STR;
	Err_Code_Str_arr[46] = ERR_CODE_46_STR;
	Err_Code_Str_arr[47] = ERR_CODE_47_STR;
	Err_Code_Str_arr[48] = ERR_CODE_48_STR;
	Err_Code_Str_arr[49] = ERR_CODE_49_STR;
	Err_Code_Str_arr[50] = ERR_CODE_50_STR;
	Err_Code_Str_arr[51] = ERR_CODE_51_STR;
	Err_Code_Str_arr[52] = ERR_CODE_52_STR;
	Err_Code_Str_arr[53] = ERR_CODE_53_STR;
	Err_Code_Str_arr[54] = ERR_CODE_54_STR;
	Err_Code_Str_arr[71] = ERR_CODE_71_STR;
	Err_Code_Str_arr[72] = ERR_CODE_72_STR;
	Err_Code_Str_arr[73] = ERR_CODE_73_STR;
	Err_Code_Str_arr[74] = ERR_CODE_74_STR;
	Err_Code_Str_arr[75] = ERR_CODE_75_STR;
	Err_Code_Str_arr[76] = ERR_CODE_76_STR;
	Err_Code_Str_arr[77] = ERR_CODE_77_STR;
	Err_Code_Str_arr[78] = ERR_CODE_78_STR;
	Err_Code_Str_arr[79] = ERR_CODE_79_STR;
	Err_Code_Str_arr[80] = ERR_CODE_80_STR;
	Err_Code_Str_arr[81] = ERR_CODE_81_STR;
	Err_Code_Str_arr[82] = ERR_CODE_82_STR;
	Err_Code_Str_arr[83] = ERR_CODE_83_STR;
	Err_Code_Str_arr[84] = ERR_CODE_84_STR;
	Err_Code_Str_arr[85] = ERR_CODE_85_STR;
	Err_Code_Str_arr[86] = ERR_CODE_86_STR;
}

void __fastcall Tstkc_frm::EZGEM1OfflineRequest(TObject *Sender, long lMsgId)
{

        EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_PrevSTKSState, GetBstr(IntToStr(GemState->nControlState)).c_bstr());
//      GemState->nControlState = CONTROL_HOST_OFFLINE;
	EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_STKSState, GetBstr(IntToStr(GemState->nPrevControlState)).c_bstr());


	EZGEM1->SendEventReport(CEID_OFFLINE_RID);
	EZGEM1->GoOffline();

	//STK_SRVinfo.SRV_ONLINE_STATE = "OFFLINE";
        //	PNT_ListBox("OFFLINE");
//	pn_lr->Caption = "OFFLINE";

        GEMState_Update(CONTROL_HOST_OFFLINE);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1OnlineLocal(TObject *Sender)
{
//	GemState->nPrevControlState = GemState->nControlState;
	EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_PrevSTKSState, GetBstr(IntToStr(GemState->nControlState)).c_bstr() );
//	GemState->nControlState = CONTROL_ONLINE_LOCAL;
	EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_STKSState, GetBstr(IntToStr(GemState->nPrevControlState)).c_bstr() );

	//이벤트(CEID)발생 보고
	EZGEM1->SendEventReport(CEID_LOCAL_RID);

	UdpateGemState();
//	GemState->nControlState = CONTROL_ONLINE_LOCAL;
//	PNT_ListBox("ONLINE/LOCAL");
//	pn_lr->Caption = "ONLINE/LOCAL";
	GEMState_Update(CONTROL_ONLINE_LOCAL);
}
//host로부터 S1F17(OnlineRequest)를 받았을때 발생하는 이벤트
void __fastcall Tstkc_frm::EZGEM1OnlineRequest(TObject *Sender, long lMsgId)
{
	if (GemState->nControlState == CONTROL_HOST_OFFLINE)
	{
		EZGEM1->AcceptOnlineRequest(lMsgId);						//Online 허용

		if (GemState->nPrevControlState == CONTROL_ONLINE_LOCAL){
			//btnGoOnlineLocalClick(this);
                        //GemState->nControlState = CONTROL_ONLINE_LOCAL;
//                      PNT_ListBox("ONLINE/LOCAL");
//			pn_lr->Caption = "ONLINE/LOCAL";
                        GEMState_Update(CONTROL_ONLINE_LOCAL);
		}
		else if (GemState->nPrevControlState == CONTROL_ONLINE_REMOTE)
		{
			//btnGoOnlineRemoteClick(this);
                        //GemState->nControlState = CONTROL_ONLINE_REMOTE;
//                        PNT_ListBox("ONLINE/REMOTE");
//			pn_lr->Caption = "ONLINE/REMOTE";
                        GEMState_Update(CONTROL_ONLINE_REMOTE);
		}
	}
	else
	{
		EZGEM1->DenyOnlineRequest(lMsgId);
	}
}

//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::GEMState_Update(int mode)
{
	String str = "";

	GemState->nPrevControlState = GemState->nControlState;
        GemState->nControlState = mode;
        if (GemState->nPrevControlState != GemState->nControlState)
        {
		str = Get_ControlState(GemState->nPrevControlState) + "->" + Get_ControlState(GemState->nControlState);

                PNT_ListBox(str);
                pn_lr->Caption = Get_ControlState(GemState->nControlState);
        }

}


String __fastcall Tstkc_frm::Get_ControlState(int State)
{
	String str ="";
	switch (State)
	{
	case CONTROL_EQUIPMENT_OFFLINE:
		str =  "OFFLINE";
		break;
	case CONTROL_ATTEMPT_ONLINE:
		str = "ATTEMPT/ONLINE";
		break;
	case CONTROL_HOST_OFFLINE:
		str = "HOST/OFFLINE";
		break;
	case CONTROL_ONLINE_LOCAL:
		str = "ONLINE/LOCAL";
		break;
	case CONTROL_ONLINE_REMOTE:
		str = "ONLINE/REMOTE";
		break;
	default:
        	str = "NULL";
		break;
	}

        return str;
}


//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::gd_carrierDragDrop(TObject *Sender, TObject *Source, int X,
          int Y)
{
     int a=0;
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::gd_carrierEndDrag(TObject *Sender, TObject *Target, int X,
          int Y)
{
	int a=0;
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::FormDestroy(TObject *Sender)
{
	run = false;
	Sleep(1000);
}
//---------------------------------------------------------------------------



void __fastcall Tstkc_frm::EZGEM1CommEstablished(TObject *Sender)
{
	GemState->bEstablish = true;
	UdpateGemState();

        PNT_ListBox("GEM ESTABLISHED");
}
//---------------------------------------------------------------------------



void __fastcall Tstkc_frm::UdpateGemState(void)
{
	String sBmpPath, sConnected, sEnabled;
//	if(GemState->bConnectedFg)
//	{
//		sBmpPath = "../../Image\\bitmap_connected.bmp";
//		sConnected = "CONNECTED";
//	}
//	else
//	{
//		sBmpPath = "../../Image\\bitmap_notconnected.bmp";
//		sConnected = "NOT CONNECTED";
//	}

	if(GemState->bEnabled)
		sEnabled = "ENABLED";
	else
		sEnabled = "DISABLED";

//	imgConn->Picture->LoadFromFile(sBmpPath);
//	StatusGrid->CreatePicture(0, 0, true, StretchWithAspectRatio, 0, TCellHAlign::haLeft, TCellVAlign::vaTop)->LoadFromFile(sBmpPath);
//	StatusGrid->Cells[1][0] = sConnected;
//	StatusGrid->Cells[1][1] = sEnabled;

	String sCtrlState = "";

	switch (GemState->nControlState)
	{
	case CONTROL_EQUIPMENT_OFFLINE:
		sCtrlState = "OFFLINE";
		break;
	case CONTROL_ATTEMPT_ONLINE:
		sCtrlState = "ATTEMPT ONLINE";
		break;
	case CONTROL_HOST_OFFLINE:
		sCtrlState = "HOST OFFLINE";
		break;
	case CONTROL_ONLINE_LOCAL:
		sCtrlState = "ONLINE LOCAL";
		break;
	case CONTROL_ONLINE_REMOTE:
		sCtrlState = "ONLINE REMOTE";
		break;
	default:
		break;
	}
//	StatusGrid->Cells[1][2] = sCtrlState;

//	btnGemStart->Enabled = !GemState->bConnectedFg;
//	btnGemStop->Enabled	 = GemState->bConnectedFg;
//	btnGoOffline->Enabled = GemState->bConnectedFg && !IsGemOffline();
//	btnGoOnlineLocal->Enabled   = GemState->bConnectedFg && !IsGemOnlineLocal();
//	btnGoOnlineRemote->Enabled  = GemState->bConnectedFg && !IsGemOnlineRemote();

//	btnGoOffline->Enabled = GemState->bConnectedFg && IsGemOffline();
//	btnGoOnlineLocal->Enabled   = GemState->bConnectedFg && IsGemOnlineLocal();
//	btnGoOnlineRemote->Enabled  = GemState->bConnectedFg && IsGemOnlineRemote();

//	SendMessage(Application->MainFormHandle, CIM_MSG, CIM_STT_UPDATE, 0);
}

//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1DateTimeSetRequest(TObject *Sender, long lMsgId,
          BSTR strNewDateTime)
{
	//시간데이터에 에러가 없다면
        EZGEM1->AcceptAndSetNewDateTime(lMsgId, strNewDateTime);

	PNT_ListBox("DATE TIME SET REQUEST");

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------




//---------------------------------------------------------------------------

//EQ의 ControlState가 Online_Remote로 변경 되었을때 발생하는 이벤트
//GEM DRIVER 에서 GoOnlineRemote() 했을 경우
//설비측 에서 OnlineRemote로 변경 했을 경우
//HOST에서 S1F17(OnlineRequest)요청하여 그것을 Accept 했을 경우
//이때 필요한 svid, ceid 등을 처리 해야함.
void __fastcall Tstkc_frm::EZGEM1OnlineRemote(TObject *Sender)
{
//	GemState->nPrevControlState = GemState->nControlState;
	EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_PrevSTKSState, GetBstr(IntToStr(GemState->nPrevControlState)).c_bstr() );
	//GemState->nControlState = CONTROL_ONLINE_REMOTE;
	EZGEM1->SetCurrentStatusValue(VLID_STK_SEM_STKSState, GetBstr(IntToStr(GemState->nControlState)).c_bstr() );

	//이벤트(CEID)발생 보고
	EZGEM1->SendEventReport(CEID_REMOTE_RID);

	UdpateGemState();

//	PNT_ListBox("ONLINE/REMOTE");
//        pn_lr->Caption = "ONLINE/REMOTE";
	GEMState_Update(CONTROL_ONLINE_REMOTE);
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
/**
 * Initial Job Information Structure
 * In : Void
 * Out : Unsigned char (Reserved)
 */
unsigned char Tstkc_frm::InitialJobInformStructure(void)
{
	m_Jobs.clear();

	return 0x0;
}


void __fastcall Tstkc_frm::EZGEM1NewEquipConst(TObject *Sender, long lMsgId, short nCount)

{
	//변경요청 개수 만큼 ECID 값 확인
	for(short i=0; i< nCount; i++)
	{
		long ECID = EZGEM1->GetNewEquipConst(lMsgId, i);
		WideString sValue = EZGEM1->GetNewEquipConstValue(lMsgId, i);

		switch (ECID)
		{
		case ECID_PORT:
			HsmsPara->nPort = StrToInt(sValue);
			break;
		case ECID_DEVICEID:
			HsmsPara->nDeiceId = StrToInt(sValue);
			break;
		case ECID_T3:
			HsmsPara->nT3 = StrToInt(sValue);
			break;
		case ECID_T5:
			HsmsPara->nT5 = StrToInt(sValue);
			break;
		case ECID_T6:
			HsmsPara->nT6 = StrToInt(sValue);
			break;
		case ECID_T7:
			HsmsPara->nT7 = StrToInt(sValue);
			break;
		case ECID_T8:
			HsmsPara->nT8 = StrToInt(sValue);
			break;
		case ECID_LINKTEST:
			HsmsPara->nLnkTest = StrToInt(sValue);
			break;
		case ECID_RETRY:
			HsmsPara->nRetry = StrToInt(sValue);
			break;
		case ECID_DEFAULT_COMM_STATE:
			Ecid->nDefaultCommState = StrToInt(sValue);
			break;
		case ECID_DEFAULT_CONTROL_STATE:
			Ecid->nDefaultControlState = StrToInt(sValue);
			break;
		case ECID_ESTABLISH_TIMEOUT:
			Ecid->nCommReqeustTimeout = StrToInt(sValue);
			break;
		case ECID_MDLN:
			Ecid->sModelName = sValue;
			break;
		case ECID_SOFTREV:
			Ecid->sSoftRev = sValue;
			break;
		case ECID_MAXSPOOL_TRANSMIT:
			Ecid->SPOOLINFO.nMaxSpoolTransmit = StrToInt(sValue);
			break;
		case ECID_SPOOL_OVERWRITE:
			Ecid->SPOOLINFO.bSpoolOverwrite   = (StrToInt(sValue)==1);
			break;
		case ECID_SPOOLING_MODE:
			Ecid->SPOOLINFO.bSpoolEnabled     = (StrToInt(sValue)==1);
			break;
		case ECID_MAX_SPOOL_SIZE:
			Ecid->SPOOLINFO.nMaxSpoolSize     = StrToInt(sValue);
			break;
		case ECID_TIME_FORMAT:
			Ecid->nTimeFormat = StrToInt(sValue);
				if (Ecid->nTimeFormat == 0)
					Ecid->nTimeFormat = 14;
				else if (Ecid->nTimeFormat == 1)
					Ecid->nTimeFormat = 16;
				break;
		default:
			break;
		}
	}
	//이상이 없을 때 응답 메시지 전송
	EZGEM1->AcceptNewEquipConst(lMsgId);

	EZGEM1->Port = HsmsPara->nPort;
	EZGEM1->DeviceID = HsmsPara->nDeiceId;
	EZGEM1->T3 = HsmsPara->nT3;
	EZGEM1->T5 = HsmsPara->nT5;
	EZGEM1->T6 = HsmsPara->nT6;
	EZGEM1->T7 = HsmsPara->nT7;
	EZGEM1->T8 = HsmsPara->nT8;
	EZGEM1->LinkTestInterval = HsmsPara->nLnkTest;
	EZGEM1->Retry = HsmsPara->nRetry;

	UpdateEcidPara();
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::UpdateEcidPara(void)
{
	EZGEM1->SetEquipConstValue(ECID_PORT, GetBstr(IntToStr(HsmsPara->nPort)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_DEVICEID, GetBstr(IntToStr(HsmsPara->nDeiceId)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_T3, GetBstr(IntToStr(HsmsPara->nT3)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_T5, GetBstr(IntToStr(HsmsPara->nT5)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_T6, GetBstr(IntToStr(HsmsPara->nT6)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_T7, GetBstr(IntToStr(HsmsPara->nT7)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_T8, GetBstr(IntToStr(HsmsPara->nT8)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_LINKTEST, GetBstr(IntToStr(HsmsPara->nLnkTest)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_RETRY, GetBstr(HsmsPara->nRetry).c_bstr() );

	EZGEM1->SetEquipConstValue(ECID_DEFAULT_COMM_STATE, GetBstr(IntToStr(static_cast<int>(Ecid->nDefaultCommState))).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_DEFAULT_CONTROL_STATE, GetBstr(IntToStr(Ecid->nDefaultControlState)).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_ESTABLISH_TIMEOUT, GetBstr(IntToStr(static_cast<int>(Ecid->nCommReqeustTimeout))).c_bstr() );

	EZGEM1->SetEquipConstValue(ECID_MAXSPOOL_TRANSMIT, GetBstr(IntToStr(static_cast<int>(Ecid->SPOOLINFO.nMaxSpoolTransmit))).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_SPOOL_OVERWRITE, GetBstr(IntToStr(static_cast<int>(Ecid->SPOOLINFO.bSpoolOverwrite))).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_SPOOLING_MODE, GetBstr(IntToStr(static_cast<int>(Ecid->SPOOLINFO.bSpoolEnabled))).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_MAX_SPOOL_SIZE, GetBstr(IntToStr(static_cast<int>(Ecid->SPOOLINFO.nMaxSpoolSize))).c_bstr() );

	EZGEM1->SetEquipConstValue(ECID_MDLN, GetBstr(Ecid->sModelName).c_bstr() );
	EZGEM1->SetEquipConstValue(ECID_SOFTREV, GetBstr(Ecid->sSoftRev).c_bstr() );

	if(Ecid->nTimeFormat == 14)
		EZGEM1->SetEquipConstValue(ECID_SOFTREV, GetBstr("0").c_bstr() );
	else if(Ecid->nTimeFormat == 16)
		EZGEM1->SetEquipConstValue(ECID_SOFTREV, GetBstr("1").c_bstr() );
}



//host로부터 S2F41을 받은 경우 발생하는 이벤트
void __fastcall Tstkc_frm::EZGEM1RemoteCommand(TObject *Sender, long lMsgId, BSTR strCommand,
          short nParamCount)
{
	if(Ecid->nDefaultControlState == CONTROL_HOST_OFFLINE) return;
	short HCACK = 0;
	//0 = Acknowledge, command has been performed						//확인, 명령이 곧 수행 될 것임.
	//1 = Command does not exist										//명령이 존재 하지 않음.
	//2	= Cannot perform now                        					//지금 수행 불가.
	//3	= At least parameter isinvalid              					//적어도 하나의 파라미터가 잘못 됨.
	//4	= Acknowledge, command will been performed with completion signaled later by an event	//확인, 명령이 완료 신호를 이벤트로 발생 후 수행 될 것임.
	//5 = Reject, Already in Desired Condition Reject transport			//거부, 이미 요청한 상태 임.
	//6 = No such object exists                     					//해당 오브젝트가 존재 하지 않음.
	//7 = Shelf physical full                       					//선반이 가득 참.

	stJob jobinfo;
	jobinfo.Job_RCMD = strCommand;

	jobinfo.Job_CommandInfo.CommandID = "";
	jobinfo.Job_CommandInfo.Priority = 0;
	jobinfo.Job_CommandInfo.Replace = 0;

	jobinfo.Job_TransferInfo.Rule = "";
	jobinfo.Job_TransferInfo.AgvID = "";
	jobinfo.Job_TransferInfo.CarrierID = "";
	jobinfo.Job_TransferInfo.Source = "";
	jobinfo.Job_TransferInfo.Dest = "";
	jobinfo.Job_TransferInfo.Idr = 0;
	jobinfo.Job_TransferInfo.Movement = 0;

	jobinfo.Job_DATAID = 0;
	jobinfo.Job_OBJSPEC = "";

	if(jobinfo.Job_RCMD == "ABORT"){
		for(int i = 0; i < nParamCount; i++){

			String CP_Name = EZGEM1->GetRemoteCommandParamName(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), i);
			String CP_Val = EZGEM1->GetRemoteCommandParamValue(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), i);

			if(CP_Name == "COMMANDID"){
				jobinfo.Job_CommandInfo.CommandID = CP_Val;
			}else{
            	HCACK = 3;	//적어도 하나의 파라미터가 잘못 되었음
				EZGEM1->SetRemoteCommandErrorCode(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(),i,1);
				EZGEM1->DenyRemoteCommand(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(),HCACK);
            }
		}
	}
	else if(jobinfo.Job_RCMD == "CANCEL"){
        for(int i = 0; i < nParamCount; i++){

			String CP_Name = EZGEM1->GetRemoteCommandParamName(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), i);
			String CP_Val = EZGEM1->GetRemoteCommandParamValue(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), i);

			if(CP_Name == "COMMANDID"){
				jobinfo.Job_CommandInfo.CommandID = CP_Val;
			}else{
				HCACK = 3;	//적어도 하나의 파라미터가 잘못 되었음
				EZGEM1->SetRemoteCommandErrorCode(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(),i,1);
				EZGEM1->DenyRemoteCommand(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(),HCACK);
			}
		}
	}
	else{
		HCACK = 1;	//명령이 존재 하지 않음
	}

	bool isCheck = false;
	//AGV중에 COMMNAD 값이 같은 작업을 수행하고 있다면 잡에 추가
	for(int i = 0 ; i < stkc_frm->m_AGVs.size(); i++){
		//AGV 잡Command ID == 현재 잡Command ID
		if(stkc_frm->m_AGVs[i].stJobInfo.Job_CommandInfo.CommandID == jobinfo.Job_CommandInfo.CommandID){
			if(stkc_frm->m_AGVs[i].stJobInfo.Job_RCMD == "CANCEL" || stkc_frm->m_AGVs[i].stJobInfo.Job_RCMD == "ABORT"){
				HCACK = 5;		//이미 요청된 상태
				break;
			}
			else if(stkc_frm->m_AGVs[i].stJobInfo.Job_RCMD == "TRANSFER" || stkc_frm->m_AGVs[i].stJobInfo.Job_RCMD == "MOVE")
			{
				stkc_frm->m_Jobs.push_back(jobinfo);
				isCheck = true;
				break;
            }
        }
	}

	if(isCheck = false)	HCACK = 2; //지금수행불가(취소나 정지할 커맨드가 없음)

	short CPACK = 0;
	//	Command Parameter Acknowledge Code, 1 byte
	//	1	=  Parameter Name (CPNAME) does notexist
	//	2	=  Illegal Value specified for CPVAL
	//	3	=  Illegal Format specified for CPVAL
	//	>3	=  Other equipment-specific error

	PNT_ListBox("GEM is Get RemoteCommand(S2F41)...");

	if(HCACK != 0){

		EZGEM1->OpenListItem(lMsgId);
                EZGEM1->AddBinaryItem(lMsgId, &HCACK, 1);
                PNT_ListBox("+HCACK : "+(String)HCACK);
                EZGEM1->OpenListItem(lMsgId);
                ///////////////CPACK가 존재 한다면 추가
                if(CPACK > 0)
                {
//					EZGEM1->OpenListItem(lMsgId);
//						EZGEM1->AddAsciiItem(lMsgId, GetBstr(ASK_CPNAME1).c_bstr(), ASK_CPNAME1.Length());
//						memoList->Lines->Add("++CPNAME : "+ASK_CPNAME1);
//						EZGEM1->AddBinaryItem(lMsgId, &CPACK, 1);
//						memoList->Lines->Add("++CPACK : "+(String)CPACK);
//					EZGEM1->CloseListItem(lMsgId);
                }
                EZGEM1->CloseListItem(lMsgId);
		EZGEM1->CloseListItem(lMsgId);

		EZGEM1->DenyRemoteCommand(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), HCACK);
    }
	else{
		if(jobinfo.Job_RCMD == "ABORT"){
			//ABORT작업시작
		}
		else if(jobinfo.Job_RCMD == "CANCEL"){
			//CANCEL작업시작
		}

		EZGEM1->OpenListItem(lMsgId);
			EZGEM1->AddBinaryItem(lMsgId, &HCACK, 1);
                        PNT_ListBox("+HCACK : "+(String)HCACK);
			EZGEM1->OpenListItem(lMsgId);
				///////////////CPACK가 존재 한다면 추가
				if(CPACK > 0)
				{
//					EZGEM1->OpenListItem(lMsgId);
//						EZGEM1->AddAsciiItem(lMsgId, GetBstr(ASK_CPNAME1).c_bstr(), ASK_CPNAME1.Length());
//						memoList->Lines->Add("++CPNAME : "+ASK_CPNAME1);
//						EZGEM1->AddBinaryItem(lMsgId, &CPACK, 1);
//						memoList->Lines->Add("++CPACK : "+(String)CPACK);
//					EZGEM1->CloseListItem(lMsgId);
				}
			EZGEM1->CloseListItem(lMsgId);
		EZGEM1->CloseListItem(lMsgId);

		//문제가 없다면 아래 AcceptRemoteCommand 수행
		EZGEM1->AcceptRemoteCommand(lMsgId, GetBstr(jobinfo.Job_RCMD).c_bstr(), HCACK);
    }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::EZGEM1SecsMsgIn(TObject *Sender, short nStream, short nFunction,
		  short nWbit, long lSysByte)
{
	AnsiString strLog = "";
	SYSTEMTIME time;
	GetLocalTime(&time);

	strLog.sprintf("(HOST->EQ) S%dF%d", nStream, nFunction);

	PNT_ListBox(strLog);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::EZGEM1SecsMsgOut(TObject *Sender, short nStream, short nFunction,
          short nWbit, long lSysByte)
{
	AnsiString strLog = "";
	SYSTEMTIME time;
	GetLocalTime(&time);

	strLog.sprintf("(HOST<-EQ) S%dF%d", nStream, nFunction);

	PNT_ListBox(strLog);
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1TerminalMessageMulti(TObject *Sender, long lMsgId,
          short nCode, short nCount)
{
	AnsiString strMsg = "";

	for (int i=0;i<nCount;i++)
	{
		strMsg.sprintf("%s", EZGEM1->GetTerminalMessageMulti(lMsgId,i));

		ShowMessage(strMsg);
	}
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::EZGEM1TerminalMessageSingle(TObject *Sender, long lMsgId,
          BSTR strCommand, short nParamCount)
{
	ShowMessage(strCommand);
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::EZGEM1MsgRequested(TObject *Sender, long lMsgId)
{

	short nStream, nFunction, nWbit;
	long lLength;

	EZGEM1->GetMsgInfo(lMsgId, &nStream, &nFunction, &nWbit, &lLength);

	if(GemState->nControlState != 0)
	{
		if(nWbit)
		{
			PNT_ListBox("");
			AnsiString str;
			str.sprintf("#####[S%dF%dW]Request Msg",nStream,nFunction);
			PNT_ListBox(str);

			if (nStream == 2 && nFunction == 49) 	OnS2F49W(lMsgId);
			else if (nStream == 3 && nFunction == 17) 	OnS3F17W(lMsgId);
			else
			{
				EZGEM1->CloseMsg(lMsgId);
			}
		}
		else
		{
			PNT_ListBox("");
			AnsiString str;
			str.sprintf("#####[S%dF%d]Request Msg",nStream,nFunction);
			PNT_ListBox(str);

			if (nStream == 1 && nFunction == 2)		OnS1F2(lMsgId);
			else if (nStream == 1 && nFunction == 14) 	OnS1F14(lMsgId);
			else if (nStream == 2 && nFunction == 18) 	OnS2F18(lMsgId);
			else if (nStream == 5 && nFunction == 2) 	OnS5F2(lMsgId);
			else if (nStream == 6 && nFunction == 2) 	OnS6F2(lMsgId);
			else if (nStream == 6 && nFunction == 12) 	OnS6F12(lMsgId);
			else if (nStream == 10 && nFunction == 2) 	OnS10F2(lMsgId);
			else
			{
				EZGEM1->CloseMsg(lMsgId);
			}
		}
	}
	else
	{
		EZGEM1->AbortMsg(lMsgId);
	}

}

bool __fastcall Tstkc_frm::InsertTransferCommandInfo(stJob jInfo)
{
	stTransportCommandInfo tInfo;

	//tInfo.TRANSPORT_ISSUEDATE = frmMain->txtCurrentDateTime->Caption;
	tInfo.TRANSPORT_CARRIERID = jInfo.Job_TransferInfo.CarrierID;
	tInfo.TRANSPORT_SOURCE = jInfo.Job_TransferInfo.Source;
	tInfo.TRANSPORT_DESTINATION = jInfo.Job_TransferInfo.Dest;
	tInfo.TRANSPORT_PRIORITY = (String)jInfo.Job_CommandInfo.Priority;
	tInfo.TRANSPORT_COMMANDID = jInfo.Job_CommandInfo.CommandID;
	int res = DBManager->AddTransportCommand(tInfo);

	if(res > 0) return true;
	else return false;
}

//---------------------------------------------------------------------------
//S1**********************
void __fastcall Tstkc_frm::OnS1F2(long lMsgId)
{
	WideString ASK_MDLN = "";
	WideString ASK_SOFTREV = "";

	EZGEM1->GetListItemOpen(lMsgId);
        EZGEM1->GetAsciiItem(lMsgId, &ASK_MDLN);
        PNT_ListBox("+MDLN : "+ASK_MDLN);
        EZGEM1->GetAsciiItem(lMsgId, &ASK_SOFTREV);
        PNT_ListBox("+SOFTREV : "+ASK_SOFTREV);
	EZGEM1->GetListItemClose(lMsgId);

	PNT_ListBox("----------------------------------");
}

//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::OnS1F14(long lMsgId)
{
	short B_COMMACK = 0;
	WideString ASK_MDLN = "";
	WideString ASK_SOFTREV = "";

	EZGEM1->GetListItemOpen(lMsgId);
	EZGEM1->GetBinaryItem(lMsgId, &B_COMMACK);
	PNT_ListBox("+COMMACK : "+(String)B_COMMACK);
	EZGEM1->GetListItemOpen(lMsgId);
	EZGEM1->GetAsciiItem(lMsgId, &ASK_MDLN);
	PNT_ListBox("++MDLN : "+ASK_MDLN);
	EZGEM1->GetAsciiItem(lMsgId, &ASK_SOFTREV);
	PNT_ListBox("++SOFTREV : "+ASK_SOFTREV);
	EZGEM1->GetListItemClose(lMsgId);
	EZGEM1->GetListItemClose(lMsgId);

	PNT_ListBox("----------------------------------");
}
//---------------------------------------------------------------------------
//S2**********************
void __fastcall Tstkc_frm::OnS2F18(long lMsgId)
{
	WideString ASK_TIME = "";

	EZGEM1->GetAsciiItem(lMsgId, &ASK_TIME);
	PNT_ListBox("TIME : "+ASK_TIME);

	PNT_ListBox("----------------------------------");
}

void __fastcall Tstkc_frm::OnS2F49W(long lMsgId)
{
	if(Ecid->nDefaultControlState == CONTROL_HOST_OFFLINE) return;

	short nAck = 0;

	int nCnt = 0;
	int nCPCnt = 0;

	short HCACK = 0;
	//0 = Acknowledge, command has been performed						//확인, 명령이 곧 수행 될 것임.
	//1 = Command does not exist										//명령이 존재 하지 않음.
	//2	= Cannot perform now                        					//지금 수행 불가.
	//3	= At least parameter isinvalid              					//적어도 하나의 파라미터가 잘못 됨.
	//4	= Acknowledge, command will been performed with completion signaled later by an event	//확인, 명령이 완료 신호를 이벤트로 발생 후 수행 될 것임.
	//5 = Reject, Already in Desired Condition Reject transport			//거부, 이미 요청한 상태 임.
	//6 = No such object exists                     					//해당 오브젝트가 존재 하지 않음.
	//7 = Shelf physical full                       					//선반이 가득 참.

	WideString ASK_CPNAME1 = "";
	WideString ASK_CPNAME2 = "";

	stJob jobinfo;
	jobinfo.Job_RCMD = "";

	jobinfo.Job_CommandInfo.CommandID = "";
	jobinfo.Job_CommandInfo.Priority = 0;
	jobinfo.Job_CommandInfo.Replace = 0;

	jobinfo.Job_TransferInfo.Rule = "";
	jobinfo.Job_TransferInfo.AgvID = "";
	jobinfo.Job_TransferInfo.CarrierID = "";
	jobinfo.Job_TransferInfo.Source = "";
	jobinfo.Job_TransferInfo.Dest = "";
	jobinfo.Job_TransferInfo.Idr = 0;
	jobinfo.Job_TransferInfo.Movement = 0;

	jobinfo.Job_DATAID = 0;
	jobinfo.Job_OBJSPEC = "";

	//	S2F49W
	//	<L
	//		<U2 DATAID>
	//		<A[0] OBJSPEC>
	//		<A[8] RCMD>
	//		<L[n]
	//			<L
	//				<A[64] CPNAME>
	//						<L[n]
	//								<L
	//						<A[64] CPNAME>
	//									<VARIANT CPVAL>
	//					>
	//						>
	//			>
	//		>
	//	>.

	//	S2F50
	//	<L
	//		<B HCACK>
	//		<L[n]
	//			<L
	//				<A[40] CEPNAME>
	//				<VARIANT CEPACK>
	//			>
	//		>
	//	>.

	EZGEM1->GetListItemOpen(lMsgId);
        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_DATAID);				PNT_ListBox("+DATAID : "+(String)jobinfo.Job_DATAID);
        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_OBJSPEC);			PNT_ListBox("+OBJSPEC : "+jobinfo.Job_OBJSPEC);
        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_RCMD);				PNT_ListBox("+RCMD : "+jobinfo.Job_RCMD);

        HCACK = 0;

        if(jobinfo.Job_RCMD == "TRANSFER")
        {
                nCnt = EZGEM1->GetListItemOpen(lMsgId);
			for(int i = 0; i < nCnt; i++)
                        {
                                EZGEM1->GetListItemOpen(lMsgId);
				EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME1);	PNT_ListBox("==CPNAME : "+ASK_CPNAME1+"==");
                        	nCPCnt = EZGEM1->GetListItemOpen(lMsgId);

				if(ASK_CPNAME1 == "COMMANDINFO")
				{
					for(int j = 0; j < nCPCnt; j++)
					{
						EZGEM1->GetListItemOpen(lMsgId);
                                                EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME2);								PNT_ListBox("CPNAME : "+ASK_CPNAME2);
                                                if(ASK_CPNAME2 == "COMMANDID")
                                                {
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_CommandInfo.CommandID);	PNT_ListBox("CPVALUE : "+jobinfo.Job_CommandInfo.CommandID);
                                                }else if(ASK_CPNAME2 == "PRIORITY")
                                                {
                                                        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_CommandInfo.Priority);		PNT_ListBox("CPVALUE : "+(String)jobinfo.Job_CommandInfo.Priority);
                                                }
                                                EZGEM1->GetListItemClose(lMsgId);
                                        }
                                }
                                else if(ASK_CPNAME1 == "TRANSFERINFO")
                                {
                                        for(int j = 0; j < nCPCnt; j++)
                                        {
						EZGEM1->GetListItemOpen(lMsgId);
                                                EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME2);								PNT_ListBox("CPNAME : "+ASK_CPNAME2);
                                                if(ASK_CPNAME2 == "CARRIERID")
                                                {
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.CarrierID);	PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.CarrierID);
                                                }else if(ASK_CPNAME2 == "SOURCE")
                                                {
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.Source);		PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.Source);
                                                }else if(ASK_CPNAME2 == "DEST")
                                                {
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.Dest);		PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.Dest);
                                                }
                                                EZGEM1->GetListItemClose(lMsgId);
                                        }
				}
                                else
                                {
                                        HCACK = 3;	//적어도 하나의 파라미터가 잘못 되었음
                                }
                                EZGEM1->GetListItemClose(lMsgId);
                                EZGEM1->GetListItemClose(lMsgId);
                        }
                EZGEM1->GetListItemClose(lMsgId);
        	EZGEM1->GetListItemClose(lMsgId);
	}
	else if(jobinfo.Job_RCMD == "MOVE"){
		nCnt = EZGEM1->GetListItemOpen(lMsgId);
			for(int i = 0; i < nCnt; i++)
			{
				EZGEM1->GetListItemOpen(lMsgId);
                                EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME1);										PNT_ListBox("==CPNAME : "+ASK_CPNAME1+"==");
                                nCPCnt = EZGEM1->GetListItemOpen(lMsgId);

                                if(ASK_CPNAME1 == "COMMANDINFO")
                                {
					for(int j = 0; j < nCPCnt; j++)
                                        {
						EZGEM1->GetListItemOpen(lMsgId);
                                                EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME2);								PNT_ListBox("CPNAME : "+ASK_CPNAME2);
                                                if(ASK_CPNAME2 == "COMMANDID"){
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_CommandInfo.CommandID);	PNT_ListBox("CPVALUE : "+jobinfo.Job_CommandInfo.CommandID);
                                                }else if(ASK_CPNAME2 == "PRIORITY"){
                                                        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_CommandInfo.Priority);        PNT_ListBox("CPVALUE : "+(String)jobinfo.Job_CommandInfo.Priority);
                                                }else if(ASK_CPNAME2 == "REPLACE"){
                                                        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_CommandInfo.Replace);			PNT_ListBox("CPVALUE : "+(String)jobinfo.Job_CommandInfo.Replace);
                                                }
                                                EZGEM1->GetListItemClose(lMsgId);
                                        }
                                }else if(ASK_CPNAME1 == "TRANSFERINFO"){
                                        for(int j = 0; j < nCPCnt; j++)
                                        {
                                                EZGEM1->GetListItemOpen(lMsgId);
                                                EZGEM1->GetAsciiItem(lMsgId, &ASK_CPNAME2);								PNT_ListBox("CPNAME : "+ASK_CPNAME2);
                                                if(ASK_CPNAME2 == "RULE"){
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.Rule);		PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.Rule);
                                                }
                                                else if(ASK_CPNAME2 == "AgvID"){
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.AgvID);		PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.AgvID);
                                                }
                                                else if(ASK_CPNAME2 == "CARRIERID"){
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.CarrierID);	PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.CarrierID);
                                                }
                                                else if(ASK_CPNAME2 == "DEST"){
                                                        EZGEM1->GetAsciiItem(lMsgId, &jobinfo.Job_TransferInfo.Dest);		PNT_ListBox("CPVALUE : "+jobinfo.Job_TransferInfo.Dest);
                                                }
                                                else if(ASK_CPNAME2 == "IDR"){
                                                        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_TransferInfo.Idr);			PNT_ListBox("CPVALUE : "+(String)jobinfo.Job_TransferInfo.Idr);
                                                }
                                                else if(ASK_CPNAME2 == "MOVEMENT"){
                                                        EZGEM1->GetU2Item(lMsgId, &jobinfo.Job_TransferInfo.Movement);		PNT_ListBox("CPVALUE : "+(String)jobinfo.Job_TransferInfo.Movement);
                                                }
                                                EZGEM1->GetListItemClose(lMsgId);
                                        }
                                }
                                else
                                {
                                        HCACK = 3;	//적어도 하나의 파라미터가 잘못 되었음
	                        }
				EZGEM1->GetListItemClose(lMsgId);
                                EZGEM1->GetListItemClose(lMsgId);
			}
		EZGEM1->GetListItemClose(lMsgId);
		EZGEM1->GetListItemClose(lMsgId);
	}
	else
        {
		HCACK = 1;		//명령이 존재 하지 않음
	}

	if(jobinfo.Job_RCMD == "TRANSFER")
        {
		bool check = false;

		for(int j = 0; j < stkc_frm->m_Jobs.size(); j++)
                {
			if(stkc_frm->m_Jobs[j].Job_CommandInfo.CommandID == jobinfo.Job_CommandInfo.CommandID)
                        {
				check = true;
			}
		}

		if(check)	HCACK = 5;	//이미 요청된 상태
	}
	else if(jobinfo.Job_RCMD == "MOVE")
        {
        	bool check = false;

		for(int j = 0; j < stkc_frm->m_Jobs.size(); j++)
                {
			if(stkc_frm->m_Jobs[j].Job_CommandInfo.CommandID == jobinfo.Job_CommandInfo.CommandID)
                        {
				check = true;
			}
		}

		if(check)	HCACK = 5;	//이미 요청된 상태
	}

	short CPACK = 0;
	//	Command Enhanced Parameter Acknowledge.
	//	If a specific value of CPNAME is defined to have a CEPVAL that is a LIST,
	//	then CEPACK shall have the same structure as the corresponding list format of
	//	CEPVAL as used in S2,F63. Otherwise CEPACK will a 1 byte integer. Enumerated:
	//	0	=  no error
	//	1	=  Parameter Name (CPNAME) does notexist
	//	2	=  Illegal value specified for CEPVAL
	//	3	=  Illegal format specified for CEPVAL
	//	4	= Parameter name (CPNAME) not valid as used

	if(HCACK != 0)
        {
        	lMsgId = EZGEM1->CreateReplyMsg(lMsgId);

		EZGEM1->OpenListItem(lMsgId);
                EZGEM1->AddBinaryItem(lMsgId, &HCACK, 1);
                PNT_ListBox("+HCACK : "+(String)HCACK);
                EZGEM1->OpenListItem(lMsgId);

                ///////////////CPACK가 존재 한다면 추가
                if(CPACK > 0)
                {
                        EZGEM1->OpenListItem(lMsgId);
                        EZGEM1->AddAsciiItem(lMsgId, GetBstr(ASK_CPNAME1).c_bstr(), ASK_CPNAME1.Length());	PNT_ListBox("++CPNAME : "+ASK_CPNAME1);
                        EZGEM1->AddBinaryItem(lMsgId, &CPACK, 1);											PNT_ListBox("++CPACK : "+(String)CPACK);
                        EZGEM1->CloseListItem(lMsgId);
                }

                EZGEM1->CloseListItem(lMsgId);
		EZGEM1->CloseListItem(lMsgId);

		EZGEM1->SendMsg(lMsgId);

		PNT_ListBox("----------------------------------");
		AnsiString str;
		str.sprintf("#####[S%dF%d]Send Msg",2,50);
		PNT_ListBox(str);

		PNT_ListBox("----------------------------------");
	}
        else
        {
		if(jobinfo.Job_RCMD == "TRANSFER")
                {
			stkc_frm->m_Jobs.push_back(jobinfo);

			InsertTransferCommandInfo(jobinfo);
		}
		else if(jobinfo.Job_RCMD == "MOVE")
                {
			stkc_frm->m_Jobs.push_back(jobinfo);
		}
		//문제가 없다면
		lMsgId = EZGEM1->CreateReplyMsg(lMsgId);

		EZGEM1->OpenListItem(lMsgId);
                EZGEM1->AddBinaryItem(lMsgId, &HCACK, 1);
                PNT_ListBox("+HCACK : "+(String)HCACK);
                EZGEM1->OpenListItem(lMsgId);
                ///////////////CPACK가 존재 한다면 추가
                if(CPACK > 0)
                {
                        EZGEM1->OpenListItem(lMsgId);
                        EZGEM1->AddAsciiItem(lMsgId, GetBstr(ASK_CPNAME1).c_bstr(), ASK_CPNAME1.Length());	PNT_ListBox("++CPNAME : "+ASK_CPNAME1);
                        EZGEM1->AddBinaryItem(lMsgId, &CPACK, 1);											PNT_ListBox("++CPACK : "+(String)CPACK);
                        EZGEM1->CloseListItem(lMsgId);
                }
                EZGEM1->CloseListItem(lMsgId);
		EZGEM1->CloseListItem(lMsgId);

		EZGEM1->SendMsg(lMsgId);

		PNT_ListBox("----------------------------------");
		AnsiString str;
		str.sprintf("#####[S%dF%d]Send Msg",2,50);
		PNT_ListBox(str);

		PNT_ListBox("----------------------------------");
	}
}

//---------------------------------------------------------------------------
//S3**********************

void __fastcall Tstkc_frm::OnS3F17W(long lMsgId)
{
	//	S3F17W
	//	<L
	//		<U2 DATAID>
	//		<A[40] CARRIERACTION>
	//		<A[40] CARRIERID>
	//		<B PTN>
	//		<L[n]
	//			<L
	//				<VAR CARRIERID>
	//				<VAR CARRIERDATA>
	//			>
	//		>
	//	>.

	long U2_DATAID = 0;
	WideString ASK_CARRIERACTION = "";
	WideString ASK_CARRIERID = "";
	short B_PTN = 0;

	int nCnt = 0;
	int nCARRIERCnt = 0;

	EZGEM1->GetListItemOpen(lMsgId);
        EZGEM1->GetU2Item(lMsgId, &U2_DATAID);
        EZGEM1->GetAsciiItem(lMsgId, &ASK_CARRIERACTION);
        EZGEM1->GetAsciiItem(lMsgId, &ASK_CARRIERID);
        EZGEM1->GetBinaryItem(lMsgId, &B_PTN);
        PNT_ListBox("+DATAID : "+(String)U2_DATAID);
        PNT_ListBox("+CARRIERACTION : "+ASK_CARRIERACTION);
        PNT_ListBox("+CARRIERID : "+ASK_CARRIERID);
        PNT_ListBox("+PTN : "+(String)B_PTN);

        nCnt = EZGEM1->GetListItemOpen(lMsgId);

        for(int i = 0; i < nCnt; i++)
        {
	        short VAR_CARRIERID = 0;

		EZGEM1->GetListItemOpen(lMsgId);
                WideString VAR_CARRIERDATA = "";
                EZGEM1->GetBinaryItem(lMsgId, &VAR_CARRIERID);
                EZGEM1->GetAsciiItem(lMsgId, &VAR_CARRIERDATA);
                PNT_ListBox("++CARRIERID : "+(String)VAR_CARRIERID);
                PNT_ListBox("++CARRIERDATA : "+VAR_CARRIERDATA);
                EZGEM1->GetListItemClose(lMsgId);
   	 }

        EZGEM1->GetListItemClose(lMsgId);
	EZGEM1->GetListItemClose(lMsgId);

	//	S3F18
	//	<L
	//		<U1 CAACK>
	//		<L[n]
	//			<L
	//				<U1 ERRCODE>
	//				<A[80] ERRTEXT>
	//			>
	//		>
	//	>.

	lMsgId = EZGEM1->CreateReplyMsg(lMsgId);

	EZGEM1->SendMsg(lMsgId);

	PNT_ListBox("----------------------------------");
	AnsiString str;
	str.sprintf("#####[S%dF%d]Send Msg",3,18);
	PNT_ListBox(str);
	PNT_ListBox("----------------------------------");
}


//---------------------------------------------------------------------------
//S5**********************
void __fastcall Tstkc_frm::OnS5F2(long lMsgID)
{
	short B_ACKC5 = 0;					//B

	EZGEM1->GetBinaryItem(lMsgID, &B_ACKC5);
	PNT_ListBox("ACKC5 : "+(String)B_ACKC5);

	PNT_ListBox("----------------------------------");
}
//---------------------------------------------------------------------------
//S6**********************
void __fastcall Tstkc_frm::OnS6F2(long lMsgID)
{
	short B_ACKC6 = 0;					//B

	EZGEM1->GetBinaryItem(lMsgID, &B_ACKC6);
	PNT_ListBox("ACKC6 : "+(String)B_ACKC6);

	PNT_ListBox("----------------------------------");
}
//---------------------------------------------------------------------------
void __fastcall Tstkc_frm::OnS6F12(long lMsgID)
{
	short B_ACKC6 = 0;					//B

	EZGEM1->GetBinaryItem(lMsgID, &B_ACKC6);
	PNT_ListBox("ACKC6 : "+(String)B_ACKC6);

	PNT_ListBox("----------------------------------");
}
//---------------------------------------------------------------------------
//S10**********************
void __fastcall Tstkc_frm::OnS10F2(long lMsgID)
{
	short B_ACKC10 = 0;					//B

	EZGEM1->GetBinaryItem(lMsgID, &B_ACKC10);
	PNT_ListBox("ACKC10 : "+(String)B_ACKC10);

	PNT_ListBox("----------------------------------");
}

//---------------------------------------------------------------------------





//---------------------------------------------------------------------------


unsigned char Tstkc_frm::InitialAGVInformStructure(void)
{
	m_AGVs.clear();
	m_TrraficNodes.clear();

//	if(DBManager->ConnectDB())
//	{
//		deque<stAGVInfo> list = DBManager->SelectAGVs();
//
//		if(list.size() > 0)
//		{
//			for(int i = 0; i < list.size(); i++){
//				stagvInform agv;
//				agv.ip = list[i].AGV_IP;
//				String id = list[i].AGV_ID;
//				agv.agvDeviceID = id.ToInt();
//				agv.isConn = false;
//
//				m_AGVs.push_back(agv);
//			}
//		}
//    }

	return 0x0;
}

//---------------------------------------------------------------------------
