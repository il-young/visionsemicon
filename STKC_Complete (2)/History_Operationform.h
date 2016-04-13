//---------------------------------------------------------------------------

#ifndef History_OperationformH
#define History_OperationformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class THistory_Operation_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	TComboBox *ComboBox8;
	TPanel *Panel3;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TAdvGlassButton *History_Operation_Save_bt;
	TAdvGlassButton *History_Operation_Print_bt;
	TAdvGlassButton *History_Operation_Search_bt;
	TStringGrid *History_Operation_Grid;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistory_Operation_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistory_Operation_frm *History_Operation_frm;
//---------------------------------------------------------------------------
#endif
