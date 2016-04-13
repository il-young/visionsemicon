//---------------------------------------------------------------------------

#ifndef History_Carrier_HistoryformH
#define History_Carrier_HistoryformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class THistory_Carrier_History_frm : public TForm
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
	TAdvGlassButton *History_CarrierHistory_CarrierID_bt;
	TAdvGlassButton *History_CarrierHistory_Search_bt;
	TAdvGlassButton *History_CarrierHistory_Save_bt;
	TAdvGlassButton *History_CarrierHistory_print_bt;
	TStringGrid *History_CarrierHistory_grid;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistory_Carrier_History_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistory_Carrier_History_frm *History_Carrier_History_frm;
//---------------------------------------------------------------------------
#endif
