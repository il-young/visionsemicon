//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------










#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>





































































































































USEFORM("Operation_ShelfTest_OnceTestBtform.cpp", Operation_ShelfTest_OnceTestBt_frm);
USEFORM("Operation_ShelfTestForm.cpp", Operation_ShelfTest_frm);
USEFORM("Operation_Shelf_Position_Confirmation_form.cpp", Operation_Shelf_Position_Confirmation_frm);
USEFORM("Statistics_Time_statistics_processform.cpp", Statistics_Time_statistics_process_frm);
USEFORM("Operation_SpecifyTesBtform.cpp", Operation_SpecifyTest_Bt_frm);
USEFORM("Operation_ContinuousTestingBt_form.cpp", Operation_ContinuousTestingBt_frm);
USEFORM("History_Operationform.cpp", History_Operation_frm);
USEFORM("History_Eventform.cpp", History_Event_frm);
USEFORM("History_TransferCommandform.cpp", History_TransferCommand_frm);
USEFORM("LinkStatusChange_frm.cpp", Link_Status_Change_frm);
USEFORM("System_UserManagementform.cpp", System_UserManagement_frm);
USEFORM("System_UserGroupingform.cpp", System_UserGrouping_frm);
USEFORM("System_Setting.cpp", Setting_Frm);
USEFORM("STKC.cpp", stkc_frm);
USEFORM("Statistics_WorkTimeform.cpp", Statistics_WorkTime_frm);
USEFORM("System_Max_PoolLevelform.cpp", System_Max_PoolLevel_frm);
USEFORM("System_login_frm.cpp", Login_frm);
USEFORM("History_Carrier_Historyform.cpp", History_Carrier_History_frm);
USEFORM("Carrier_FormTopopup_frm.cpp", Carrier_FormTo_popup_frm);
USEFORM("Carrier_FormTopopupConfirm_frm.cpp", Carrier_FormTopopup_Confirm_frm);
USEFORM("Carrier_LockComment_frm.cpp", Carrier_Lock_Comment_frm);
USEFORM("Carrier_ToPGVPortPopup_frm.cpp", Carrier_ToPGVPort_Popup_frm);
USEFORM("Carrier_ToAGVPortPopup_frm.cpp", Carrier_ToAGVPort_Popup_frm);
USEFORM("DBModule.cpp", DBManager); /* TDataModule: File Type */
USEFORM("History_Alarmform.cpp", History_Alarm_frm);
USEFORM("Change_AutoM_frm.cpp", Change_AutoManual_frm);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(Tstkc_frm), &stkc_frm);
		Application->CreateForm(__classid(TChange_AutoManual_frm), &Change_AutoManual_frm);
		Application->CreateForm(__classid(TLink_Status_Change_frm), &Link_Status_Change_frm);
		Application->CreateForm(__classid(TCarrier_ToAGVPort_Popup_frm), &Carrier_ToAGVPort_Popup_frm);
		Application->CreateForm(__classid(TCarrier_ToPGVPort_Popup_frm), &Carrier_ToPGVPort_Popup_frm);
		Application->CreateForm(__classid(TCarrier_FormTo_popup_frm), &Carrier_FormTo_popup_frm);
		Application->CreateForm(__classid(TCarrier_FormTopopup_Confirm_frm), &Carrier_FormTopopup_Confirm_frm);
		Application->CreateForm(__classid(TCarrier_Lock_Comment_frm), &Carrier_Lock_Comment_frm);
		Application->CreateForm(__classid(THistory_Alarm_frm), &History_Alarm_frm);
		Application->CreateForm(__classid(THistory_Event_frm), &History_Event_frm);
		Application->CreateForm(__classid(THistory_TransferCommand_frm), &History_TransferCommand_frm);
		Application->CreateForm(__classid(THistory_Operation_frm), &History_Operation_frm);
		Application->CreateForm(__classid(THistory_Carrier_History_frm), &History_Carrier_History_frm);
		Application->CreateForm(__classid(TStatistics_WorkTime_frm), &Statistics_WorkTime_frm);
		Application->CreateForm(__classid(TStatistics_Time_statistics_process_frm), &Statistics_Time_statistics_process_frm);
		Application->CreateForm(__classid(TSystem_UserManagement_frm), &System_UserManagement_frm);
		Application->CreateForm(__classid(TSystem_UserGrouping_frm), &System_UserGrouping_frm);
		Application->CreateForm(__classid(TSystem_Max_PoolLevel_frm), &System_Max_PoolLevel_frm);
		Application->CreateForm(__classid(TOperation_ShelfTest_frm), &Operation_ShelfTest_frm);
		Application->CreateForm(__classid(TOperation_ShelfTest_OnceTestBt_frm), &Operation_ShelfTest_OnceTestBt_frm);
		Application->CreateForm(__classid(TOperation_ContinuousTestingBt_frm), &Operation_ContinuousTestingBt_frm);
		Application->CreateForm(__classid(TOperation_SpecifyTest_Bt_frm), &Operation_SpecifyTest_Bt_frm);
		Application->CreateForm(__classid(TOperation_Shelf_Position_Confirmation_frm), &Operation_Shelf_Position_Confirmation_frm);
		Application->CreateForm(__classid(TSetting_Frm), &Setting_Frm);
		Application->CreateForm(__classid(TDBManager), &DBManager);
		Application->CreateForm(__classid(TLogin_frm), &Login_frm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
