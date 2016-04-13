//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "System_Max_PoolLevelform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma resource "*.dfm"
TSystem_Max_PoolLevel_frm *System_Max_PoolLevel_frm;
//---------------------------------------------------------------------------
__fastcall TSystem_Max_PoolLevel_frm::TSystem_Max_PoolLevel_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSystem_Max_PoolLevel_frm::System_Max_PoolLevel_Left_GridGetCellColor(TObject *Sender,
		  int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont)

{
	if (ACol == 1 && ARow == 4)
   {
	 System_Max_PoolLevel_Left_Grid->Canvas->Brush->Color = clRed;
   }
   if (ACol == 2 && ARow == 4)
   {
	 System_Max_PoolLevel_Left_Grid->Canvas->Brush->Color = clRed;
   }
   if (ACol == 7 && ARow == 3)
   {
	 System_Max_PoolLevel_Left_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 7 && ARow == 4)
   {
	 System_Max_PoolLevel_Left_Grid->Canvas->Brush->Color = clGray;
   }
   //-----------------------------------------------------------------
   if (ACol == 9 && ARow == 3)
   {
	 System_Max_PoolLevel_Right_Grid->Canvas->Brush->Color = clGray;
   }
   if (ACol == 9 && ARow == 4)
   {
	 System_Max_PoolLevel_Right_Grid->Canvas->Brush->Color = clGray;
   }
}
//---------------------------------------------------------------------------
void __fastcall TSystem_Max_PoolLevel_frm::FormCreate(TObject *Sender)
{
	System_Max_PoolLevel_Right_Grid->Cells[1][0] = " 10";
	System_Max_PoolLevel_Right_Grid->Cells[2][0] = " 09";
	System_Max_PoolLevel_Right_Grid->Cells[3][0] = " 08";
	System_Max_PoolLevel_Right_Grid->Cells[4][0] = " 07";
	System_Max_PoolLevel_Right_Grid->Cells[5][0] = " 06";
	System_Max_PoolLevel_Right_Grid->Cells[6][0] = " 05";
	System_Max_PoolLevel_Right_Grid->Cells[7][0] = " 04";
	System_Max_PoolLevel_Right_Grid->Cells[8][0] = " 03";
	System_Max_PoolLevel_Right_Grid->Cells[9][0] = " 02";
	System_Max_PoolLevel_Right_Grid->Cells[10][0] = " 01";
}
//---------------------------------------------------------------------------
