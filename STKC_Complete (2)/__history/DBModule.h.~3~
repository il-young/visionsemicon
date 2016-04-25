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

	//사용자 관련 함수
	__fastcall bool LoginCheckUser(AnsiString ID, AnsiString PASS, stUserInfo &info);	//사용자 유무 확인
	__fastcall stUserInfo GetUserInfo(AnsiString ID); 									//사용자 정보 가져오기
	__fastcall bool AddUser(stUserInfo info); 											//사용자 추가
	__fastcall bool EditUser(stUserInfo info);											//사용자 수정
	__fastcall bool DeleteUser(AnsiString ID); 											//사용자 삭제
	__fastcall deque<stUserInfo> SelectUsers(); 										//사용자 리스트 얻기

	__fastcall stSECSInfo SelectSECSInfo();                         					//SECS 정보 얻기
	__fastcall bool EditSECS(stSECSInfo info);											//SECS 정보 수정

};
//---------------------------------------------------------------------------
extern PACKAGE TDBManager *DBManager;
//---------------------------------------------------------------------------
#endif
