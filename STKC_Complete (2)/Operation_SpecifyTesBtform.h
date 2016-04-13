//---------------------------------------------------------------------------

#ifndef Operation_SpecifyTesBtformH
#define Operation_SpecifyTesBtformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include "editlist.hpp"
//---------------------------------------------------------------------------
class TOperation_SpecifyTest_Bt_frm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Operation_SpecifyTest_Source_Edit;
	TLabel *Label2;
	TEdit *Operation_SpecifyTest_Target_Edit;
	TRadioButton *Operation_SpecifyTest_Cycle_RadioButton;
	TRadioButton *Operation_SpecifyTest_Count_RadioButton;
	TEditListBox *Operation_SpecifyTest_Count_EditListBox;
	TAdvGlassButton *Operation_SpecifyTest_Start_bt;
	TAdvGlassButton *AdvGlassButton1;
private:	// User declarations
public:		// User declarations
	__fastcall TOperation_SpecifyTest_Bt_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOperation_SpecifyTest_Bt_frm *Operation_SpecifyTest_Bt_frm;
//---------------------------------------------------------------------------
#endif
