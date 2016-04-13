//---------------------------------------------------------------------------

#ifndef System_UserManagementformH
#define System_UserManagementformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ValEdit.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TSystem_UserManagement_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TAdvStringGrid *System_UserManagement_LeftGrid;
	TAdvStringGrid *System_UserManagement_RightGrid;
	TAdvGlassButton *System_User_Management_Add_bt;
	TAdvGlassButton *System_User_Management_Delete_bt;
	TAdvGlassButton *System_User_Management_Edit_bt;
	TAdvGlassButton *System_User_Management_Accept_bt;
	TAdvGlassButton *System_User_Management_ChangeName_bt;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall System_UserManagement_RightGridGetAlignment(TObject *Sender, int ARow,
          int ACol, TAlignment &HAlign, TVAlignment &VAlign);
private:	// User declarations
public:		// User declarations
	__fastcall TSystem_UserManagement_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSystem_UserManagement_frm *System_UserManagement_frm;
//---------------------------------------------------------------------------
#endif
