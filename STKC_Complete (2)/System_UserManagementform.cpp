//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "System_UserManagementform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TSystem_UserManagement_frm *System_UserManagement_frm;
//---------------------------------------------------------------------------
__fastcall TSystem_UserManagement_frm::TSystem_UserManagement_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSystem_UserManagement_frm::FormCreate(TObject *Sender)
{
	System_UserManagement_LeftGrid->AddCheckBoxColumn(0,false,false);
	System_UserManagement_LeftGrid->AddCheckBox(0,0,false,false);
	//-----------------------------------------------------------------------
	System_UserManagement_LeftGrid->Cells[0][0] = " ";
	System_UserManagement_LeftGrid->Cells[1][0] = " Function";
	System_UserManagement_LeftGrid->Cells[2][0] = " Function";
	//-----------------------------------------------------------------------
	System_UserManagement_LeftGrid->ColWidths[0] = 20;
	System_UserManagement_LeftGrid->ColWidths[1] = 164;
	System_UserManagement_LeftGrid->ColWidths[2] = 164;
	//-----------------------------------------------------------------------
	System_UserManagement_LeftGrid->Cells[1][1] = " 001";
	System_UserManagement_LeftGrid->Cells[1][2] = " 002";
	System_UserManagement_LeftGrid->Cells[1][3] = " 003";
	System_UserManagement_LeftGrid->Cells[1][4] = " 004";
	System_UserManagement_LeftGrid->Cells[1][5] = " 005";
	System_UserManagement_LeftGrid->Cells[1][6] = " 006";
	System_UserManagement_LeftGrid->Cells[1][7] = " 007";
	System_UserManagement_LeftGrid->Cells[1][8] = " 008";

	System_UserManagement_LeftGrid->Cells[2][1] = " Change";
	System_UserManagement_LeftGrid->Cells[2][2] = " Log";
	System_UserManagement_LeftGrid->Cells[2][3] = " History";
	System_UserManagement_LeftGrid->Cells[2][4] = " Statistics";
	System_UserManagement_LeftGrid->Cells[2][5] = " Operation";
	System_UserManagement_LeftGrid->Cells[2][6] = " Systme";
	System_UserManagement_LeftGrid->Cells[2][7] = " Remote Command";
	System_UserManagement_LeftGrid->Cells[2][8] = " Carrier Lock/Unlock";
	//-----------------------------------------------------------------------
	//-----------------------------------------------------------------------

	//System_UserManagement_RightGrid->AddCheckBoxColumn(0,false,false);
	System_UserManagement_RightGrid->AddCheckBox(0,1,false,false);
	System_UserManagement_RightGrid->AddCheckBox(0,2,false,false);
	System_UserManagement_RightGrid->AddCheckBox(0,3,false,false);
	System_UserManagement_RightGrid->AddCheckBox(0,4,false,false);
	System_UserManagement_RightGrid->AddCheckBox(0,5,false,false);
	//-----------------------------------------------------------------------
	System_UserManagement_RightGrid->Cells[0][0] = " Reserved";
	System_UserManagement_RightGrid->Cells[1][0] = " User Group";
	//-----------------------------------------------------------------------
	System_UserManagement_RightGrid->ColWidths[0] = 80;
	System_UserManagement_RightGrid->ColWidths[1] = 268;
	//-----------------------------------------------------------------------
	System_UserManagement_RightGrid->Cells[1][1] = " Administrator";
	System_UserManagement_RightGrid->Cells[1][2] = " Guest";
	System_UserManagement_RightGrid->Cells[1][3] = " Operator";
	System_UserManagement_RightGrid->Cells[1][4] = " Monitor";
	System_UserManagement_RightGrid->Cells[1][5] = " Demo";
}
//---------------------------------------------------------------------------

void __fastcall TSystem_UserManagement_frm::System_UserManagement_RightGridGetAlignment(TObject *Sender,
          int ARow, int ACol, TAlignment &HAlign, TVAlignment &VAlign)
{
	if( ARow ==1 && ACol == 0)
	{
		HAlign =taCenter;
	}
	if( ARow ==2 && ACol == 0)
	{
		HAlign =taCenter;
	}
	if( ARow ==3 && ACol == 0)
	{
		HAlign =taCenter;
	}
	if( ARow ==4 && ACol == 0)
	{
		HAlign =taCenter;
	}
	if( ARow ==5 && ACol == 0)
	{
		HAlign =taCenter;
	}
	if( ARow ==6 && ACol == 0)
	{
		HAlign =taCenter;
	}
}
//---------------------------------------------------------------------------

