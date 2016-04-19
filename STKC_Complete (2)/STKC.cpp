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
#pragma resource "*.dfm"


Tstkc_frm *stkc_frm;



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


	/*
	Carrier_Grid->Cells[1][1] = "  15/12/31\n  08:47:57\n  12NL047";
	Carrier_Grid->Cells[1][2] = "  15/12/31\n  06:37:57\n  12NL055";
	Carrier_Grid->Cells[1][3] = "  15/12/31\n  07:45:57\n  12NL157";
	Carrier_Grid->Cells[1][4] = "  15/12/31\n  08:47:57\n  12NL047\n  Lock";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[2][1] = "  15/12/31\n  09:47:57\n  12NL046";
	Carrier_Grid->Cells[2][2] = "  15/12/31\n  08:47:57\n  12NL156";
	Carrier_Grid->Cells[2][3] = "  15/12/31\n  08:47:57\n  12NL153";
	Carrier_Grid->Cells[2][4] = "  15/12/31\n  08:47:57\n  12NL047\n  Lock";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[3][1] = "  15/12/31\n  08:47:57\n  12NL287";
	Carrier_Grid->Cells[3][2] = "  15/12/31\n  06:37:57\n  12NL156";
	Carrier_Grid->Cells[3][3] = "  idle";
	Carrier_Grid->Cells[3][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[4][1] = "  15/12/31\n  08:47:57\n  12NL987";
	Carrier_Grid->Cells[4][2] = "  idle";
	Carrier_Grid->Cells[4][3] = "  idle";
	Carrier_Grid->Cells[4][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[5][1] = "  15/12/31\n  08:47:57\n  12NL985";
	Carrier_Grid->Cells[5][2] = "  idle";
	Carrier_Grid->Cells[5][3] = "  idle";
	Carrier_Grid->Cells[5][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[6][1] = "  15/12/31\n  08:47:57\n  12NL924";
	Carrier_Grid->Cells[6][2] = "  idle";
	Carrier_Grid->Cells[6][3] = "  idle";
	Carrier_Grid->Cells[6][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[7][1] = "  15/12/31\n  08:47:57\n  12NL925";
	Carrier_Grid->Cells[7][2] = "  idle";
	Carrier_Grid->Cells[7][3] = "  Shut\n  down";
	Carrier_Grid->Cells[7][4] = "  ";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[8][1] = "  15/12/31\n  08:47:57\n  12NL926";
	Carrier_Grid->Cells[8][2] = "  idle";
	Carrier_Grid->Cells[8][3] = "  idle";
	Carrier_Grid->Cells[8][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[9][1] = "  15/12/31\n  08:47:57\n  12NL920";
	Carrier_Grid->Cells[9][2] = "  idle";
	Carrier_Grid->Cells[9][3] = "  idle";
	Carrier_Grid->Cells[9][4] = "  idle";
	//--------------------------------------------------------------
	Carrier_Grid->Cells[10][1] = "  15/12/31\n  08:47:57\n  12NL820";
	Carrier_Grid->Cells[10][2] = "  idle";
	Carrier_Grid->Cells[10][3] = "  idle";
	Carrier_Grid->Cells[10][4] = "  idle";
	//--------------------------------------------------------------
	*/

	Stocker_Grid->Cells[0][0] = "  	      Carrier ID  ";
	Stocker_Grid->Cells[1][0] = "   F/E  ";
	Stocker_Grid->Cells[2][0] = "  	   Current Location ID  ";
	Stocker_Grid->Cells[3][0] = "  	 Host Current Location  ";
	Stocker_Grid->Cells[4][0] = "  	     Carrier State  ";
	Stocker_Grid->Cells[5][0] = "  	   Carrier Alarm  ";
	Stocker_Grid->Cells[6][0] = "  	       Comment  ";
	Stocker_Grid->Cells[7][0] = "                  Installed  ";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[0][1] = " 12NL047";
	Stocker_Grid->Cells[0][2] = " 12NL046";
	Stocker_Grid->Cells[0][3] = " 12NL287";
	Stocker_Grid->Cells[0][4] = " 12NL987";
	Stocker_Grid->Cells[0][5] = " 12NL985";
	Stocker_Grid->Cells[0][6] = " 12NL924";
	Stocker_Grid->Cells[0][7] = " 12NL925";
	Stocker_Grid->Cells[0][8] = " 12NL926";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[1][1] = " Fill";
	Stocker_Grid->Cells[1][2] = " Fill";
	Stocker_Grid->Cells[1][3] = " Fill";
	Stocker_Grid->Cells[1][4] = " Fill";
	Stocker_Grid->Cells[1][5] = " Fill";
	Stocker_Grid->Cells[1][6] = " Fill";
	Stocker_Grid->Cells[1][7] = " Fill";
	Stocker_Grid->Cells[1][8] = " Fill";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[2][1] = " STKA_01_T01B01";
	Stocker_Grid->Cells[2][2] = " STKA_01_T02B01";
	Stocker_Grid->Cells[2][3] = " STKA_01_T03B01";
	Stocker_Grid->Cells[2][4] = " STKA_01_T04B01";
	Stocker_Grid->Cells[2][5] = " STKA_01_T05B01";
	Stocker_Grid->Cells[2][6] = " STKA_01_T06B01";
	Stocker_Grid->Cells[2][7] = " STKA_01_T07B01";
	Stocker_Grid->Cells[2][8] = " STKA_01_T08B01";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[3][1] = " STKA_01_T01B01";
	Stocker_Grid->Cells[3][2] = " STKA_01_T02B01";
	Stocker_Grid->Cells[3][3] = " STKA_01_T03B01";
	Stocker_Grid->Cells[3][4] = " STKA_01_T04B01";
	Stocker_Grid->Cells[3][5] = " STKA_01_T05B01";
	Stocker_Grid->Cells[3][6] = " STKA_01_T06B01";
	Stocker_Grid->Cells[3][7] = " STKA_01_T07B01";
	Stocker_Grid->Cells[3][8] = " STKA_01_T08B01";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[4][1] = " Completed";
	Stocker_Grid->Cells[4][2] = " Completed";
	Stocker_Grid->Cells[4][3] = " Completed";
	Stocker_Grid->Cells[4][4] = " Completed";
	Stocker_Grid->Cells[4][5] = " Completed";
	Stocker_Grid->Cells[4][6] = " Completed";
	Stocker_Grid->Cells[4][7] = " Completed";
	Stocker_Grid->Cells[4][8] = " Completed";
	//--------------------------------------------------------------
	Stocker_Grid->Cells[7][1] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][2] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][3] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][4] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][5] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][6] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][7] = " 2015/12/31 08:47:57";
	Stocker_Grid->Cells[7][8] = " 2015/12/31 08:47:57";

	Stocker_Grid->ColWidths[0] = 140;
	Stocker_Grid->ColWidths[1] = 55;
	Stocker_Grid->ColWidths[2] = 180;
	Stocker_Grid->ColWidths[3] = 180;
	Stocker_Grid->ColWidths[4] = 160;
	Stocker_Grid->ColWidths[5] = 140;
	Stocker_Grid->ColWidths[6] = 150;
	Stocker_Grid->ColWidths[7] = 210;


	Alarm_Grid->Cells[0][0] = "  	      Alarm ID  ";
	Alarm_Grid->Cells[1][0] = "        Error Code  ";
	Alarm_Grid->Cells[2][0] = "  	       Name  ";
	Alarm_Grid->Cells[3][0] = "  	            Location  ";
	Alarm_Grid->Cells[4][0] = "  	                      Details  ";
	Alarm_Grid->Cells[5][0] = "  	              Start Time  ";
	Alarm_Grid->Cells[6][0] = "  	             Over Time  ";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[0][1] = " 2011";
	Alarm_Grid->Cells[0][2] = " 2010";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[1][1] = " 9007";
	Alarm_Grid->Cells[1][2] = " 12222";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[2][1] = " Port";
	Alarm_Grid->Cells[2][2] = " Shelf";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[3][1] = " STKA_01_L01";
	Alarm_Grid->Cells[3][2] = " STKA_01_T01B04";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[4][1] = " Area Sensor error";
	Alarm_Grid->Cells[4][2] = " STKA_01_T01B04 Shelf error";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[5][1] = " 2015/12/31 06:47:57";
	Alarm_Grid->Cells[5][2] = " 2015/12/31 06:47:20";
	//--------------------------------------------------------------
	Alarm_Grid->Cells[6][1] = " 2015/12/31 06:47:57";
	Alarm_Grid->Cells[6][2] = " 2015/12/31 06:47:20";
	//--------------------------------------------------------------

	Alarm_Grid->ColWidths[0] = 140;
	Alarm_Grid->ColWidths[1] = 140;
	Alarm_Grid->ColWidths[2] = 120;
	Alarm_Grid->ColWidths[3] = 180;
	Alarm_Grid->ColWidths[4] = 248;
	Alarm_Grid->ColWidths[5] = 200;
	Alarm_Grid->ColWidths[6] = 190;
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::AutoManual1Click(TObject *Sender)
{
	Change_AutoManual_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::LinkStatusChange1Click(TObject *Sender)
{
	Link_Status_Change_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::oAGVPort1Click(TObject *Sender)
{
	Carrier_ToAGVPort_Popup_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::oPGVPort1Click(TObject *Sender)
{
	Carrier_ToPGVPort_Popup_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::FormTo1Click(TObject *Sender)
{
	Carrier_FormTo_popup_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Lock1Click(TObject *Sender)
{
	Carrier_Lock_Comment_frm->Show();
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
	History_Alarm_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Event2Click(TObject *Sender)
{
	History_Event_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::ransferCommand1Click(TObject *Sender)
{
	History_TransferCommand_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::Operation3Click(TObject *Sender)
{
	History_Operation_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::CarrierHistory1Click(TObject *Sender)
{
	History_Carrier_History_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N2Click(TObject *Sender)
{
	Statistics_WorkTime_frm->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tstkc_frm::N1Click(TObject *Sender)
{
	Statistics_Time_statistics_process_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::UserManagement1Click(TObject *Sender)
{
	System_UserManagement_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::UserGrouping1Click(TObject *Sender)
{
	System_UserGrouping_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::MaxPoolLevel1Click(TObject *Sender)
{
	System_Max_PoolLevel_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N3Click(TObject *Sender)
{
	Operation_ShelfTest_frm->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::N4Click(TObject *Sender)
{
	Operation_Shelf_Position_Confirmation_frm->Show();
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
	Now_User = "";
	logout_time = 0;
	logout_cnt = 0;

	logout_timer->Enabled = false;

	stkc_frm->btn_login->Caption = "Login Here";
}

//---------------------------------------------------------------------------

void __fastcall Tstkc_frm::STKC_OnActive(TObject *Sender)
{
	Setting_Frm->Read_Setting();

	gd_carrier->RemoveRows(0,10);
	gd_carrier->RemoveCols(0,3);

	int i, j, row, col;

	col = StrToInt(Setting_Frm->tb_col->Text );
	row = StrToInt(Setting_Frm->tb_row->Text );

	TStringList *pList = new TStringList;


	for(i=0 ; i <= col-1 ; i++){
		gd_carrier->AddColumn();
		pList->Add(printf("%00d",i));
	}
	gd_carrier->ColumnHeaders = pList;

	for(i=1 ; i <= gd_carrier->TotalColCount()-1 ; i++)
		gd_carrier->ColWidths[i]  = int( gd_carrier->Width /col);

	gd_carrier->ColWidths[0] = 25;

	for (j=0 ; j <= row - 1 ; j++)
		gd_carrier->AddRow();
	for (j=1 ; j < gd_carrier->TotalRowCount()-1 ; j++)
		gd_carrier->RowHeights[j] = int(gd_carrier->Height / row);

	gd_carrier->RowHeights[0] = 25;

}
//---------------------------------------------------------------------------

