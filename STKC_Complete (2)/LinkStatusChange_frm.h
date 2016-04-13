//---------------------------------------------------------------------------

#ifndef LinkStatusChange_frmH
#define LinkStatusChange_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TLink_Status_Change_frm : public TForm
{
__published:	// IDE-managed Components
	TAdvGlassButton *Change_LinkStatusChange_Online_bt;
	TAdvGlassButton *Change_LinkStatusChange_Offline_bt;
	TAdvGlassButton *Change_LinkStatusChange_Online_Remote_bt;
	TAdvGlassButton *Change_LinkStatusChange_Online_Lock_bt;
	TPanel *Panel1;
	TButton *Change_LinkStatusChange_Close_bt;
	void __fastcall Change_LinkStatusChange_Close_btClick(TObject *Sender);
	void __fastcall Change_LinkStatusChange_Online_btClick(TObject *Sender);
	void __fastcall Change_LinkStatusChange_Offline_btClick(TObject *Sender);
	void __fastcall Change_LinkStatusChange_Online_Remote_btClick(TObject *Sender);
	void __fastcall Change_LinkStatusChange_Online_Lock_btClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TLink_Status_Change_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLink_Status_Change_frm *Link_Status_Change_frm;
//---------------------------------------------------------------------------
#endif
