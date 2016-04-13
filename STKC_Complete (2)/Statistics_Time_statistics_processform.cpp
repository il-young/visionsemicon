//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Statistics_Time_statistics_processform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TStatistics_Time_statistics_process_frm *Statistics_Time_statistics_process_frm;
//---------------------------------------------------------------------------
__fastcall TStatistics_Time_statistics_process_frm::TStatistics_Time_statistics_process_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TStatistics_Time_statistics_process_frm::FormCreate(TObject *Sender)

{
	Statistics_Time_statistics_process_grid->Cells[0][0] = "              òäü§÷ÖÍª  ";
	Statistics_Time_statistics_process_grid->Cells[1][0] = "                õóü§÷ÖÍª  ";
	Statistics_Time_statistics_process_grid->Cells[2][0] = "                  õÅÚæê¡ó­â¦  ";
	Statistics_Time_statistics_process_grid->Cells[3][0] = "                          ãÁÊà  ";
	//-----------------------------------------------------------------------
	Statistics_Time_statistics_process_grid->ColWidths[0] = 191;
	Statistics_Time_statistics_process_grid->ColWidths[1] = 211;
	Statistics_Time_statistics_process_grid->ColWidths[2] = 232;
	Statistics_Time_statistics_process_grid->ColWidths[3] = 263;
	//-----------------------------------------------------------------------
	Statistics_Time_statistics_process_grid->Cells[0][1] = " 54";
	Statistics_Time_statistics_process_grid->Cells[0][2] = " 98";
	Statistics_Time_statistics_process_grid->Cells[1][1] = " 20";
	Statistics_Time_statistics_process_grid->Cells[1][2] = " 98";
	Statistics_Time_statistics_process_grid->Cells[2][1] = " 74";
	Statistics_Time_statistics_process_grid->Cells[2][2] = " 196";
	Statistics_Time_statistics_process_grid->Cells[3][1] = " 2015/12/31";
	Statistics_Time_statistics_process_grid->Cells[3][2] = " 2015/12/30";
}
//---------------------------------------------------------------------------

