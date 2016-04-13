//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Operation_Shelf_Position_Confirmation_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma resource "*.dfm"
TOperation_Shelf_Position_Confirmation_frm *Operation_Shelf_Position_Confirmation_frm;
//---------------------------------------------------------------------------
__fastcall TOperation_Shelf_Position_Confirmation_frm::TOperation_Shelf_Position_Confirmation_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOperation_Shelf_Position_Confirmation_frm::FormCreate(TObject *Sender)

{
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[1][0] = " 10";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[2][0] = " 09";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[3][0] = " 08";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[4][0] = " 07";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[5][0] = " 06";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[6][0] = " 05";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[7][0] = " 04";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[8][0] = " 03";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[9][0] = " 02";
	Operation_Shelf_Position_Confirmation_Right_Grid->Cells[10][0] = " 01";
}
//---------------------------------------------------------------------------
void __fastcall TOperation_Shelf_Position_Confirmation_frm::Operation_Shelf_Position_Confirmation_Left_GridGetCellColor(TObject *Sender,
          int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont)

{
	if (ACol == 7 && ARow == 3)
   {
	 Operation_Shelf_Position_Confirmation_Left_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 7 && ARow == 4)
   {
	 Operation_Shelf_Position_Confirmation_Left_Grid->Canvas->Brush->Color = clGray;
   }
}
//---------------------------------------------------------------------------
void __fastcall TOperation_Shelf_Position_Confirmation_frm::Operation_Shelf_Position_Confirmation_Right_GridGetCellColor(TObject *Sender,
          int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont)

{
	//-----------------------------------------------------------------
   if (ACol == 9 && ARow == 3)
   {
	 Operation_Shelf_Position_Confirmation_Right_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 9 && ARow == 4)
   {
	 Operation_Shelf_Position_Confirmation_Right_Grid->Canvas->Brush->Color = clGray;
   }
}
//---------------------------------------------------------------------------
