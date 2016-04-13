//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "History_Operationform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
THistory_Operation_frm *History_Operation_frm;
//---------------------------------------------------------------------------
__fastcall THistory_Operation_frm::THistory_Operation_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistory_Operation_frm::FormCreate(TObject *Sender)
{
	History_Operation_Grid->Cells[0][0] = " Operation Time  ";
	History_Operation_Grid->Cells[1][0] = "   Code  ";
	History_Operation_Grid->Cells[2][0] = " Event Name ";
	History_Operation_Grid->Cells[3][0] = " Content  ";
	//-----------------------------------------------------------------------
	History_Operation_Grid->ColWidths[0] = 210;
	History_Operation_Grid->ColWidths[1] = 70;
	History_Operation_Grid->ColWidths[2] = 150;
	History_Operation_Grid->ColWidths[3] = 315;
	//-----------------------------------------------------------------------
	History_Operation_Grid->Cells[0][1] = " 2015/12/31 06:47:57";
	History_Operation_Grid->Cells[1][1] = " 6187";
	History_Operation_Grid->Cells[2][1] = " Carrier Remove";
	History_Operation_Grid->Cells[3][1] = " IP Address=168.178.124.024  User ID=D2891";
}
//---------------------------------------------------------------------------
