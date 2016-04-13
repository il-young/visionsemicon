//---------------------------------------------------------------------------

#ifndef Operation_ShelfTest_OnceTestBtformH
#define Operation_ShelfTest_OnceTestBtformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TOperation_ShelfTest_OnceTestBt_frm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TAdvGlassButton *System_User_Management_Add_bt;
	TAdvGlassButton *AdvGlassButton1;
private:	// User declarations
public:		// User declarations
	__fastcall TOperation_ShelfTest_OnceTestBt_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOperation_ShelfTest_OnceTestBt_frm *Operation_ShelfTest_OnceTestBt_frm;
//---------------------------------------------------------------------------
#endif
