//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "History_Carrier_Historyform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
THistory_Carrier_History_frm *History_Carrier_History_frm;
//---------------------------------------------------------------------------
__fastcall THistory_Carrier_History_frm::THistory_Carrier_History_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistory_Carrier_History_frm::FormCreate(TObject *Sender)
{
	History_CarrierHistory_grid->Cells[0][0] = "   Carrier ID  ";
	History_CarrierHistory_grid->Cells[1][0] = "   Remove Location  ";
	History_CarrierHistory_grid->Cells[2][0] = "        Remove Time  ";
	History_CarrierHistory_grid->Cells[3][0] = "       Installed  ";
	History_CarrierHistory_grid->Cells[4][0] = "            Installed Time  ";
	//-----------------------------------------------------------------------
	History_CarrierHistory_grid->ColWidths[0] = 100;
	History_CarrierHistory_grid->ColWidths[1] = 140;
	History_CarrierHistory_grid->ColWidths[2] = 170;
	History_CarrierHistory_grid->ColWidths[3] = 130;
	History_CarrierHistory_grid->ColWidths[4] = 205;
	//-----------------------------------------------------------------------
	History_CarrierHistory_grid->Cells[0][1] = " 12NL047";
	History_CarrierHistory_grid->Cells[0][2] = " 12NL046";
	History_CarrierHistory_grid->Cells[0][3] = " 12NL055";
	History_CarrierHistory_grid->Cells[3][1] = " STKA_T01B01";
	History_CarrierHistory_grid->Cells[3][2] = " STKA_T02B01";
	History_CarrierHistory_grid->Cells[3][3] = " STKA_T01B02";
	History_CarrierHistory_grid->Cells[4][1] = " 2015/12/31 06:47:57";
	History_CarrierHistory_grid->Cells[4][2] = " 2015/12/31 06:47:20";
	History_CarrierHistory_grid->Cells[4][3] = " 2015/12/31 06:42:20";
}
//---------------------------------------------------------------------------
