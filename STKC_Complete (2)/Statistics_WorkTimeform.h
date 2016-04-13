//---------------------------------------------------------------------------

#ifndef Statistics_WorkTimeformH
#define Statistics_WorkTimeformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TStatistics_WorkTime_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TAdvGlassButton *History_Alarm_Search_bt;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
private:	// User declarations
public:		// User declarations
	__fastcall TStatistics_WorkTime_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TStatistics_WorkTime_frm *Statistics_WorkTime_frm;
//---------------------------------------------------------------------------
#endif
