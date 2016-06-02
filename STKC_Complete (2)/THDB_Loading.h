//---------------------------------------------------------------------------

#ifndef THDB_LoadingH
#define THDB_LoadingH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include "G_Define.h"

//---------------------------------------------------------------------------
class DB_Loading : public TThread
{
protected:
	void __fastcall Execute();
public:
	__fastcall DB_Loading(bool CreateSuspended);

};
//---------------------------------------------------------------------------
#endif
