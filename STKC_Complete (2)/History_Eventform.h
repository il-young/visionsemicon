//---------------------------------------------------------------------------

#ifndef History_EventformH
#define History_EventformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class THistory_Event_frm : public TForm
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
	TAdvGlassButton *History_Event_Save_bt;
	TAdvGlassButton *History_Event_Print_bt;
	TStringGrid *History_Event_Grid;
	TAdvGlassButton *History_Event_Search_bt;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistory_Event_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistory_Event_frm *History_Event_frm;
//---------------------------------------------------------------------------
#endif
