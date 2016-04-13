//---------------------------------------------------------------------------

#ifndef Operation_ContinuousTestingBt_formH
#define Operation_ContinuousTestingBt_formH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include "editlist.hpp"
//---------------------------------------------------------------------------
class TOperation_ContinuousTestingBt_frm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Operation_ContinuousTesting_Source_Edit;
	TRadioButton *Operation_ContinuousTesting_Cycle_RadioButton;
	TRadioButton *Operation_ContinuousTesting_Count_RadioButton;
	TRadioButton *Operation_ContinuousTesting_Time_RadioButton;
	TAdvGlassButton *Operation_ContinuousTesting_Start_bt;
	TAdvGlassButton *AdvGlassButton1;
	TEditListBox *Operation_ContinuousTesting_Count_EditListbox;
	TEditListBox *Operation_ContinuousTesting_Time_EditListbox;
private:	// User declarations
public:		// User declarations
	__fastcall TOperation_ContinuousTestingBt_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOperation_ContinuousTestingBt_frm *Operation_ContinuousTestingBt_frm;
//---------------------------------------------------------------------------
#endif
