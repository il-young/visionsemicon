//---------------------------------------------------------------------------

#ifndef System_Max_PoolLevelformH
#define System_Max_PoolLevelformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSystem_Max_PoolLevel_frm : public TForm
{
__published:	// IDE-managed Components
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TComboBox *ComboBox1;
	TEdit *Edit1;
	TComboBox *ComboBox2;
	TAdvGlassButton *System_Max_PoolLevel_Lock_bt;
	TAdvGlassButton *System_Max_PoolLevel_UnLock_bt;
	TAdvStringGrid *System_Max_PoolLevel_Left_Grid;
	TAdvStringGrid *System_Max_PoolLevel_Right_Grid;
	void __fastcall System_Max_PoolLevel_Left_GridGetCellColor(TObject *Sender, int ARow,
          int ACol, TGridDrawState AState, TBrush *ABrush, TFont *AFont);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSystem_Max_PoolLevel_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSystem_Max_PoolLevel_frm *System_Max_PoolLevel_frm;
//---------------------------------------------------------------------------
#endif
