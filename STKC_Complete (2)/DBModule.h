//---------------------------------------------------------------------------

#ifndef DBModuleH
#define DBModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <deque.h>


#include "System_Setting.h"
#include "G_Define.h"


class TDBManager : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *dbConnection;
	//TADOConnection *SystemConnection;
	TADOQuery *dbQuery;
	TADOConnection *ALConnection;
	TADOQuery *ALQuery;
	TADOConnection *CAConnection;
	TADOQuery *CAQuery;
	TADOConnection *QConnection;
	TADOQuery *QQuery;
	void __fastcall DataModuleCreate(TObject *Sender);
	//TADOQuery *SystemQuery;
private:	// User declarations
public:		// User declarations
	__fastcall TDBManager(TComponent* Owner);
	//__fastcall TDBManager(void);
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
	void __fastcall InitCarrierDB();													//DB 초기화
	void __fastcall CarrierDB_Init(int col, int row);									//DB 재 생성
	stCARRIERInfo __fastcall GetCarrierinfo(int row, int col);         		              //개별 CarrierDB 정보
	__fastcall GetAllCarrierinfo();                                                     //모든 CarrierDB 정보 얻기
	void __fastcall Carrier_Lock(int col, int row);											//Carrier Lock
	void __fastcall Carrier_unLock(int col, int row);

	bool __fastcall ALDB_Connect();
	void __fastcall Alram_Insert(stERR_INFO info);
	void __fastcall btntest();
	void __fastcall Alarm_List_Load(void);
	bool __fastcall CADB_Connect();

        bool __fastcall AddTransportCommand(stTransportCommandInfo info);

};
//---------------------------------------------------------------------------
extern PACKAGE TDBManager *DBManager;

//---------------------------------------------------------------------------
#endif
