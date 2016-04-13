//---------------------------------------------------------------------------

#ifndef Operation_ShelfTestFormH
#define Operation_ShelfTestFormH
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
class TOperation_ShelfTest_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TAdvGlassButton *Operation_ShelfTest_OnceTest_bt;
	TAdvGlassButton *Operation_ShelfTest_ContinuousTesting_bt;
	TAdvGlassButton *Operation_ShelfTest_SpecifyTest_bt;
	TAdvStringGrid *Operation_ShelfTest_Left_Grid;
	TAdvStringGrid *Operation_ShelfTest_Right_Grid;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Operation_ShelfTest_Left_GridGetCellColor(TObject *Sender, int ARow,
          int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont);
	void __fastcall Operation_ShelfTest_Right_GridGetCellColor(TObject *Sender, int ARow,
          int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont);
	void __fastcall Operation_ShelfTest_OnceTest_btClick(TObject *Sender);
	void __fastcall Operation_ShelfTest_ContinuousTesting_btClick(TObject *Sender);
	void __fastcall Operation_ShelfTest_SpecifyTest_btClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TOperation_ShelfTest_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOperation_ShelfTest_frm *Operation_ShelfTest_frm;
//---------------------------------------------------------------------------
#endif
