//---------------------------------------------------------------------------

#ifndef History_AlarmformH
#define History_AlarmformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class THistory_Alarm_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TStringGrid *Alarm_Grid;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TLabel *Label1;
	TLabel *Label2;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TLabel *Label3;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TLabel *Label4;
	TComboBox *ComboBox7;
	TLabel *Label5;
	TComboBox *ComboBox8;
	TPanel *Panel3;
	TAdvGlassButton *History_Alarm_AlarmID_bt;
	TAdvGlassButton *History_Alarm_Search_bt;
	TAdvGlassButton *History_Alarm_Save_bt;
	TAdvGlassButton *History_Alarm_Print_bt;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistory_Alarm_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistory_Alarm_frm *History_Alarm_frm;
//---------------------------------------------------------------------------
#endif
