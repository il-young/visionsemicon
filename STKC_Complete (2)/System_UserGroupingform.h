//---------------------------------------------------------------------------

#ifndef System_UserGroupingformH
#define System_UserGroupingformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSystem_UserGrouping_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TAdvGlassButton *System_User_Management_Add_bt;
	TAdvGlassButton *System_User_Management_Delete_bt;
	TAdvGlassButton *System_User_Management_Edit_bt;
	TAdvGlassButton *System_User_Management_Accept_bt;
	TAdvStringGrid *System_UserGrouping_Grid;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall System_UserGrouping_GridGetAlignment(TObject *Sender, int ARow,
          int ACol, TAlignment &HAlign, TVAlignment &VAlign);
private:	// User declarations
public:		// User declarations
	__fastcall TSystem_UserGrouping_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSystem_UserGrouping_frm *System_UserGrouping_frm;
//---------------------------------------------------------------------------
#endif
