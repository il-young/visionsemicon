//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Operation_ShelfTestForm.h"
#include "Operation_ShelfTest_OnceTestBtform.h"
#include "Operation_ContinuousTestingBt_form.h"
#include "Operation_SpecifyTesBtform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma resource "*.dfm"
TOperation_ShelfTest_frm *Operation_ShelfTest_frm;
//---------------------------------------------------------------------------
__fastcall TOperation_ShelfTest_frm::TOperation_ShelfTest_frm(TComponent* Owner)
	: TForm(Owner)
{
	Operation_ShelfTest_OnceTestBt_frm = new TOperation_ShelfTest_OnceTestBt_frm(this);
	Operation_ContinuousTestingBt_frm = new TOperation_ContinuousTestingBt_frm(this);
	Operation_SpecifyTest_Bt_frm = new TOperation_SpecifyTest_Bt_frm(this);
}
//---------------------------------------------------------------------------
void __fastcall TOperation_ShelfTest_frm::FormCreate(TObject *Sender)
{
	Operation_ShelfTest_Right_Grid->Cells[1][0] = " 10";
	Operation_ShelfTest_Right_Grid->Cells[2][0] = " 09";
	Operation_ShelfTest_Right_Grid->Cells[3][0] = " 08";
	Operation_ShelfTest_Right_Grid->Cells[4][0] = " 07";
	Operation_ShelfTest_Right_Grid->Cells[5][0] = " 06";
	Operation_ShelfTest_Right_Grid->Cells[6][0] = " 05";
	Operation_ShelfTest_Right_Grid->Cells[7][0] = " 04";
	Operation_ShelfTest_Right_Grid->Cells[8][0] = " 03";
	Operation_ShelfTest_Right_Grid->Cells[9][0] = " 02";
	Operation_ShelfTest_Right_Grid->Cells[10][0] = " 01";
}
//---------------------------------------------------------------------------
void __fastcall TOperation_ShelfTest_frm::Operation_ShelfTest_Left_GridGetCellColor(TObject *Sender,
		  int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont)

{
   if (ACol == 7 && ARow == 3)
   {
	 Operation_ShelfTest_Left_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 7 && ARow == 4)
   {
	 Operation_ShelfTest_Left_Grid->Canvas->Brush->Color = clGray;
   }
}
//---------------------------------------------------------------------------
void __fastcall TOperation_ShelfTest_frm::Operation_ShelfTest_Right_GridGetCellColor(TObject *Sender,
          int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont)

{
	//-----------------------------------------------------------------
   if (ACol == 9 && ARow == 3)
   {
	 Operation_ShelfTest_Right_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 9 && ARow == 4)
   {
	 Operation_ShelfTest_Right_Grid->Canvas->Brush->Color = clGray;
   }
}
//---------------------------------------------------------------------------

void __fastcall TOperation_ShelfTest_frm::Operation_ShelfTest_OnceTest_btClick(TObject *Sender)

{
	Operation_ShelfTest_OnceTestBt_frm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TOperation_ShelfTest_frm::Operation_ShelfTest_ContinuousTesting_btClick(TObject *Sender)

{
	Operation_ContinuousTestingBt_frm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TOperation_ShelfTest_frm::Operation_ShelfTest_SpecifyTest_btClick(TObject *Sender)

{
	Operation_SpecifyTest_Bt_frm->Show();
}
//---------------------------------------------------------------------------

