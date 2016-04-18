//---------------------------------------------------------------------------

#ifndef DBModuleH
#define DBModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <deque.h>

#include "G_Define.h"


class TDBManager : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *dbConnection;
	TADOQuery *dbQuery;
private:	// User declarations
public:		// User declarations
	__fastcall TDBManager(TComponent* Owner);
	__fastcall bool ConnectDB();

	//����� ���� �Լ�
	__fastcall bool LoginCheckUser(AnsiString ID, AnsiString PASS, stUserInfo &info);	//����� ���� Ȯ��
	__fastcall stUserInfo GetUserInfo(AnsiString ID); 									//����� ���� ��������
	__fastcall bool AddUser(stUserInfo info); 											//����� �߰�
	__fastcall bool EditUser(stUserInfo info);											//����� ����
	__fastcall bool DeleteUser(AnsiString ID); 											//����� ����
	__fastcall deque<stUserInfo> SelectUsers(); 										//����� ����Ʈ ���

	__fastcall stSECSInfo SelectSECSInfo();                         					//SECS ���� ���
	__fastcall bool EditSECS(stSECSInfo info);											//SECS ���� ����

};
//---------------------------------------------------------------------------
extern PACKAGE TDBManager *DBManager;
//---------------------------------------------------------------------------
#endif
