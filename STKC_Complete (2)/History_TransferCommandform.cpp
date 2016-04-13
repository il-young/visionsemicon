//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "History_TransferCommandform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
THistory_TransferCommand_frm *History_TransferCommand_frm;
//---------------------------------------------------------------------------
__fastcall THistory_TransferCommand_frm::THistory_TransferCommand_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistory_TransferCommand_frm::FormCreate(TObject *Sender)
{
	History_Transfer_Command_Grid->Cells[0][0] = "     Kind  ";
	History_Transfer_Command_Grid->Cells[1][0] = "   Command ID  ";
	History_Transfer_Command_Grid->Cells[2][0] = "  Carrier ID  ";
	History_Transfer_Command_Grid->Cells[3][0] = "    From  ";
	History_Transfer_Command_Grid->Cells[4][0] = "   to  ";
	History_Transfer_Command_Grid->Cells[5][0] = "        Installed Time  ";
	History_Transfer_Command_Grid->Cells[6][0] = "            End Time  ";
	//-----------------------------------------------------------------------
	History_Transfer_Command_Grid->ColWidths[0] = 80;
	History_Transfer_Command_Grid->ColWidths[1] = 110;
	History_Transfer_Command_Grid->ColWidths[2] = 95;
	History_Transfer_Command_Grid->ColWidths[3] = 70;
	History_Transfer_Command_Grid->ColWidths[4] = 50;
	History_Transfer_Command_Grid->ColWidths[5] = 168;
	History_Transfer_Command_Grid->ColWidths[6] = 168;
	//-----------------------------------------------------------------------
	History_Transfer_Command_Grid->Cells[0][1] = " Remote";
	History_Transfer_Command_Grid->Cells[0][2] = " Remote";
	History_Transfer_Command_Grid->Cells[5][1] = " 2015/12/31 06:47:57";
	History_Transfer_Command_Grid->Cells[5][2] = " 2015/12/31 06:47:57";
	History_Transfer_Command_Grid->Cells[6][1] = " 2015/12/31 06:48:00";
	History_Transfer_Command_Grid->Cells[6][2] = " 2015/12/31 06:47:30";
}
//---------------------------------------------------------------------------

