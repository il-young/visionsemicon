//---------------------------------------------------------------------------

#ifndef Statistics_Time_statistics_processformH
#define Statistics_Time_statistics_processformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <VCLTee.Series.hpp>
//---------------------------------------------------------------------------
class TStatistics_Time_statistics_process_frm : public TForm
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
	TAdvGlassButton *History_CarrierHistory_Search_bt;
	TStringGrid *Statistics_Time_statistics_process_grid;
	TChart *Chart2;
	TBarSeries *Series2;
	TBarSeries *Series1;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TStatistics_Time_statistics_process_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TStatistics_Time_statistics_process_frm *Statistics_Time_statistics_process_frm;
//---------------------------------------------------------------------------
#endif
