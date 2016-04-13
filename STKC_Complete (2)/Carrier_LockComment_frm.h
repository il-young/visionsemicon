//---------------------------------------------------------------------------

#ifndef Carrier_LockComment_frmH
#define Carrier_LockComment_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TCarrier_Lock_Comment_frm : public TForm
{
__published:	// IDE-managed Components
	TAdvGlassButton *Carrier_Lock_Comment_Ok_bt;
	TAdvGlassButton *Carrier_Lock_Comment_Cancel_bt;
	TEdit *Carrier_Lock_Comment_Edit;
	TLabel *Label2;
	void __fastcall Carrier_Lock_Comment_Cancel_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCarrier_Lock_Comment_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCarrier_Lock_Comment_frm *Carrier_Lock_Comment_frm;
//---------------------------------------------------------------------------
#endif
