//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "History_Eventform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
THistory_Event_frm *History_Event_frm;
//---------------------------------------------------------------------------
__fastcall THistory_Event_frm::THistory_Event_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistory_Event_frm::FormCreate(TObject *Sender)
{
	History_Event_Grid->Cells[0][0] = "                 LogCode  ";
	History_Event_Grid->Cells[1][0] = "        Event Name  ";
	History_Event_Grid->Cells[2][0] = "              Content  ";
	History_Event_Grid->Cells[3][0] = "                 Event Time  ";
	//-----------------------------------------------------------------------
	History_Event_Grid->ColWidths[0] = 202;
	History_Event_Grid->ColWidths[1] = 145;
	History_Event_Grid->ColWidths[2] = 175;
	History_Event_Grid->ColWidths[3] = 222;
	//-----------------------------------------------------------------------
	History_Event_Grid->Cells[1][1] = " Link Test";
	History_Event_Grid->Cells[3][1] = " 2015/12/31 06:47:57";
	History_Event_Grid->Cells[3][2] = " 2015/12/31 06:47:20";
}
//---------------------------------------------------------------------------
