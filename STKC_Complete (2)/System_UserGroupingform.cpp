//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "System_UserGroupingform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma resource "*.dfm"
TSystem_UserGrouping_frm *System_UserGrouping_frm;
//---------------------------------------------------------------------------
__fastcall TSystem_UserGrouping_frm::TSystem_UserGrouping_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSystem_UserGrouping_frm::FormCreate(TObject *Sender)
{
	//System_UserManagement_RightGrid->AddCheckBoxColumn(0,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,1,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,2,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,3,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,4,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,5,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,6,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,7,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,8,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,9,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,10,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,11,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,12,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,13,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,14,false,false);
	System_UserGrouping_Grid->AddCheckBox(4,15,false,false);

	//-----------------------------------------------------------------------
	System_UserGrouping_Grid->Cells[0][0] = " No.";
	System_UserGrouping_Grid->Cells[1][0] = " User Name";
	System_UserGrouping_Grid->Cells[2][0] = " User Descriptions";
	System_UserGrouping_Grid->Cells[3][0] = " User Group";
	System_UserGrouping_Grid->Cells[4][0] = " Logout Timer";
	//-----------------------------------------------------------------------
	System_UserGrouping_Grid->ColWidths[0] = 30;
	System_UserGrouping_Grid->ColWidths[1] = 120;
	System_UserGrouping_Grid->ColWidths[2] = 170;
	System_UserGrouping_Grid->ColWidths[3] = 170;
	System_UserGrouping_Grid->ColWidths[4] = 225;
	//-----------------------------------------------------------------------
	System_UserGrouping_Grid->Cells[0][1] = " 1";
	System_UserGrouping_Grid->Cells[0][2] = " 2";
	System_UserGrouping_Grid->Cells[0][3] = " 3";
	System_UserGrouping_Grid->Cells[0][4] = " 4";
	System_UserGrouping_Grid->Cells[0][5] = " 5";
	System_UserGrouping_Grid->Cells[0][6] = " 6";
	System_UserGrouping_Grid->Cells[0][7] = " 7";
	System_UserGrouping_Grid->Cells[0][8] = " 8";
	System_UserGrouping_Grid->Cells[0][9] = " 9";
	System_UserGrouping_Grid->Cells[0][10] = " 10";
	System_UserGrouping_Grid->Cells[0][11] = " 11";
	System_UserGrouping_Grid->Cells[0][12] = " 12";
	System_UserGrouping_Grid->Cells[0][13] = " 13";
	System_UserGrouping_Grid->Cells[0][14] = " 14";
	System_UserGrouping_Grid->Cells[0][15] = " 15";
	System_UserGrouping_Grid->Cells[0][16] = " 16";
	System_UserGrouping_Grid->Cells[0][17] = " 17";
	System_UserGrouping_Grid->Cells[0][18] = " 18";
	System_UserGrouping_Grid->Cells[0][19] = " 19";
	System_UserGrouping_Grid->Cells[1][1] = " Godlen";
	System_UserGrouping_Grid->Cells[1][2] = " Andy Chiu";
	System_UserGrouping_Grid->Cells[1][3] = " RaKo";
	System_UserGrouping_Grid->Cells[1][4] = " KenBY";
	System_UserGrouping_Grid->Cells[3][1] = " Administrator";
	System_UserGrouping_Grid->Cells[3][2] = " Guest";
	System_UserGrouping_Grid->Cells[3][3] = " Guest";
	System_UserGrouping_Grid->Cells[3][4] = " Administrator";
	System_UserGrouping_Grid->Cells[4][1] = "";
	System_UserGrouping_Grid->Cells[4][2] = "";
	System_UserGrouping_Grid->Cells[4][3] = "";
	System_UserGrouping_Grid->Cells[4][4] = "";
}
//---------------------------------------------------------------------------
void __fastcall TSystem_UserGrouping_frm::System_UserGrouping_GridGetAlignment(TObject *Sender,
		  int ARow, int ACol, TAlignment &HAlign, TVAlignment &VAlign)
{
	if( ARow ==1 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==2 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==3 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==4 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==5 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==6 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==7 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==8 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==9 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==10 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==11 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==12 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==13 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==14 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
	if( ARow ==15 && ACol == 4)
	{
		HAlign =taRightJustify;
	}
}
//---------------------------------------------------------------------------


