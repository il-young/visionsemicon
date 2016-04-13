//---------------------------------------------------------------------------

#ifndef Change_AutoM_frmH
#define Change_AutoM_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.TeCanvas.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TChange_AutoManual_frm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Change_Close_bt;
	TAdvGlassButton *Change_Auto_bt;
	TAdvGlassButton *Change_Manual_bt;
	void __fastcall Change_Auto_btClick(TObject *Sender);
	void __fastcall Change_Manual_btClick(TObject *Sender);
	void __fastcall Change_Close_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TChange_AutoManual_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TChange_AutoManual_frm *Change_AutoManual_frm;
//---------------------------------------------------------------------------
#endif
