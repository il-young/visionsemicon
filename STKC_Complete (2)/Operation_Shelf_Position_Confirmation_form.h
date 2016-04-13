//---------------------------------------------------------------------------

#ifndef Operation_Shelf_Position_Confirmation_formH
#define Operation_Shelf_Position_Confirmation_formH
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
class TOperation_Shelf_Position_Confirmation_frm : public TForm
{
__published:	// IDE-managed Components
	TAdvStringGrid *Operation_Shelf_Position_Confirmation_Left_Grid;
	TPanel *Panel1;
	TAdvGlassButton *Operation_Shelf_Position_Confirmation_AC_bt;
	TAdvGlassButton *Operation_Shelf_Position_Confirmation_QIR_bt;
	TAdvGlassButton *Operation_Shelf_Position_Confirmation_QS_bt;
	TAdvStringGrid *Operation_Shelf_Position_Confirmation_Right_Grid;
	TLabel *Label1;
	TComboBox *Operation_Shelf_Position_Confirmation_Port_ComboBox;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Operation_Shelf_Position_Confirmation_Left_GridGetCellColor(TObject *Sender,
          int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont);
	void __fastcall Operation_Shelf_Position_Confirmation_Right_GridGetCellColor(TObject *Sender,
          int ARow, int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont);


private:	// User declarations
public:		// User declarations
	__fastcall TOperation_Shelf_Position_Confirmation_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOperation_Shelf_Position_Confirmation_frm *Operation_Shelf_Position_Confirmation_frm;
//---------------------------------------------------------------------------
#endif
