//---------------------------------------------------------------------------

#ifndef History_TransferCommandformH
#define History_TransferCommandformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class THistory_TransferCommand_frm : public TForm
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
	TAdvGlassButton *History_Transfer_Command_Save_bt;
	TAdvGlassButton *History_Transfer_Command_Print_bt;
	TAdvGlassButton *History_Transfer_Command_Search_bt;
	TStringGrid *History_Transfer_Command_Grid;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistory_TransferCommand_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistory_TransferCommand_frm *History_TransferCommand_frm;
//---------------------------------------------------------------------------
#endif
