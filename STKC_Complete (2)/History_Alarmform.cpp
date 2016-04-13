//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "History_Alarmform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
THistory_Alarm_frm *History_Alarm_frm;
//---------------------------------------------------------------------------
__fastcall THistory_Alarm_frm::THistory_Alarm_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistory_Alarm_frm::FormCreate(TObject *Sender)
{
	Alarm_Grid->Cells[0][0] = "Alarm ID  ";
	Alarm_Grid->Cells[1][0] = " Error Code  ";
	Alarm_Grid->Cells[2][0] = "   Lot ID  ";
	Alarm_Grid->Cells[3][0] = "  	               Content  ";
	Alarm_Grid->Cells[4][0] = "  Status  ";
	Alarm_Grid->Cells[5][0] = "  	                 Installed  ";
	//-----------------------------------------------------------------------
	Alarm_Grid->ColWidths[0] = 70;
	Alarm_Grid->ColWidths[1] = 90;
	Alarm_Grid->ColWidths[2] = 70;
	Alarm_Grid->ColWidths[3] = 205;
	Alarm_Grid->ColWidths[4] = 70;
	Alarm_Grid->ColWidths[5] = 238;
	//-----------------------------------------------------------------------
	Alarm_Grid->Cells[0][1] = " 2011";
	Alarm_Grid->Cells[0][2] = " 2010";
	Alarm_Grid->Cells[1][1] = " 52";
	Alarm_Grid->Cells[1][2] = " 51";
	Alarm_Grid->Cells[2][1] = " NA";
	Alarm_Grid->Cells[2][2] = " 12NL047";
	Alarm_Grid->Cells[3][1] = " Area Sensor Pass Fail";
	Alarm_Grid->Cells[3][2] = " ID does not match";
	Alarm_Grid->Cells[4][1] = " Clear";
	Alarm_Grid->Cells[4][2] = " Clear";
	Alarm_Grid->Cells[5][1] = " 2015/12/31 06:47:57";
	Alarm_Grid->Cells[6][2] = " 2015/12/31 06:47:20";
}
//---------------------------------------------------------------------------

