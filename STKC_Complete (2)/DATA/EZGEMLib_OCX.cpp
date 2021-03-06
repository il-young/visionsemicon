// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 46046 $
// File generated on 2016-04-20 오전 8:56:15 from Type Library described below.

// ************************************************************************  //
// Type Lib: C:\windows\SysWow64\ezGEM.ocx (1)
// LIBID: {D5C23D40-4FF3-4FB4-87DD-823CE2A59534}
// LCID: 0
// Helpfile: C:\windows\system32\ezGEM.hlp 
// HelpString: ezGEM ActiveX Control module
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// SYS_KIND: SYS_WIN32
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include <olectrls.hpp>
#include <oleserver.hpp>
#if defined(USING_ATL)
#include <atl\atlvcl.h>
#endif

#pragma option -w-8122
#include "EZGEMLib_OCX.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Ezgemlib_tlb
{



// *********************************************************************//
// OCX PROXY CLASS IMPLEMENTATION
// (The following variables/methods implement the class TEZGEM which
// allows "EZGEM Control" to be hosted in CBuilder IDE/apps).
// *********************************************************************//
int   TEZGEM::EventDispIDs[26] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006,
    0x00000007, 0x00000008, 0x00000009, 0x0000000A, 0x0000000B, 0x0000000C,
    0x0000000D, 0x0000000E, 0x0000000F, 0x00000010, 0x00000011, 0x00000012,
    0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017, 0x00000018,
    0x00000019, 0x0000001A};

Vcl::Olectrls::TControlData2 TEZGEM::CControlData =
{
  // GUID of CoClass and Event Interface of Control
  {0x67C03CC4, 0xF690, 0x46E7,{ 0xA8, 0xD1, 0x53,0x8E, 0xC1, 0xB1,0x08, 0x07} }, // CoClass
  {0x1BC01D96, 0xA9E3, 0x4519,{ 0xB4, 0xC4, 0xE1,0xAB, 0xD6, 0x66,0x0D, 0x18} }, // Events

  // Count of Events and array of their DISPIDs
  26, &EventDispIDs,

  // Pointer to Runtime License string
  NULL,  // HRESULT(0x80004005)

  // Flags for OnChanged PropertyNotification
  0x00000000,
  401,// (IDE Version)

  // Count of Font Prop and array of their DISPIDs
  0, Winapi::Activex::PDispIDList(NULL),

  // Count of Pict Prop and array of their DISPIDs
  0, Winapi::Activex::PDispIDList(NULL),
  0, // Reserved
  0, // Instance count (used internally)
  0, // List of Enum descriptions (internal)
};

GUID     TEZGEM::DEF_CTL_INTF = {0x07082B38, 0x8F27, 0x4F3A,{ 0x99, 0xD0, 0xCA,0x67, 0x96, 0xE9,0xA1, 0x34} };
TNoParam TEZGEM::OptParam;

static inline void ValidCtrCheck(TEZGEM *)
{
   delete new TEZGEM((System::Classes::TComponent*)(0));
};

void __fastcall TEZGEM::InitControlData()
{
  ControlData = (Vcl::Olectrls::TControlData*)&CControlData;
  CControlData.FirstEventOfs = System::PByte(&FOnConnected) - System::PByte(this);
};

void __fastcall TEZGEM::CreateControl()
{
  if (!m_OCXIntf)
  {
    _ASSERTE(DefaultDispatch);
    DefaultDispatch->QueryInterface(DEF_CTL_INTF, (LPVOID*)&m_OCXIntf);
  }
};

_DEZGEMDisp __fastcall TEZGEM::GetDefaultInterface()
{
  CreateControl();
  return m_OCXIntf;
};

short __fastcall TEZGEM::Start(void)
{
  return  GetDefaultInterface()->Start();
}

short __fastcall TEZGEM::Stop(void)
{
  return  GetDefaultInterface()->Stop();
}

void __fastcall TEZGEM::SetConfigFile(BSTR strConfigFile)
{
  GetDefaultInterface()->SetConfigFile(strConfigFile);
}

short __fastcall TEZGEM::AcceptAndSetNewDateTime(long lMsgId, BSTR strNewDateTime)
{
  return  GetDefaultInterface()->AcceptAndSetNewDateTime(lMsgId, strNewDateTime);
}

short __fastcall TEZGEM::AcceptEstablishCommRequest(long lMsgId)
{
  return  GetDefaultInterface()->AcceptEstablishCommRequest(lMsgId);
}

short __fastcall TEZGEM::AcceptNewDateTimeSet(long lMsgId)
{
  return  GetDefaultInterface()->AcceptNewDateTimeSet(lMsgId);
}

short __fastcall TEZGEM::AcceptNewEquipConst(long lMsgId)
{
  return  GetDefaultInterface()->AcceptNewEquipConst(lMsgId);
}

short __fastcall TEZGEM::AcceptOnlineRequest(long lMsgId)
{
  return  GetDefaultInterface()->AcceptOnlineRequest(lMsgId);
}

short __fastcall TEZGEM::AcceptRemoteCommand(long lMsgId, BSTR strCommand, short nState)
{
  return  GetDefaultInterface()->AcceptRemoteCommand(lMsgId, strCommand, nState);
}

VARIANT_BOOL __fastcall TEZGEM::AddAlarmID(long ALID, BSTR strName, BSTR strDescription)
{
  return  GetDefaultInterface()->AddAlarmID(ALID, strName, strDescription);
}

VARIANT_BOOL __fastcall TEZGEM::AddCEID(long CEID, BSTR strName, BSTR strDescription)
{
  return  GetDefaultInterface()->AddCEID(CEID, strName, strDescription);
}

VARIANT_BOOL __fastcall TEZGEM::AddECID(long ECID, BSTR strName, BSTR strUnit, BSTR strDataFormat)
{
  return  GetDefaultInterface()->AddECID(ECID, strName, strUnit, strDataFormat);
}

VARIANT_BOOL __fastcall TEZGEM::AddRemoteCommand(BSTR strCommandName)
{
  return  GetDefaultInterface()->AddRemoteCommand(strCommandName);
}

VARIANT_BOOL __fastcall TEZGEM::AddSVID(long SVID, BSTR strName, BSTR strDataFormat, BSTR strUnit)
{
  return  GetDefaultInterface()->AddSVID(SVID, strName, strDataFormat, strUnit);
}

VARIANT_BOOL __fastcall TEZGEM::AddSubSVID(long SVID, short subSVID, BSTR strName)
{
  return  GetDefaultInterface()->AddSubSVID(SVID, subSVID, strName);
}

short __fastcall TEZGEM::DenyEstablishCommRequest(long lMsgId)
{
  return  GetDefaultInterface()->DenyEstablishCommRequest(lMsgId);
}

short __fastcall TEZGEM::DenyNewDateTimeSet(long lMsgId)
{
  return  GetDefaultInterface()->DenyNewDateTimeSet(lMsgId);
}

short __fastcall TEZGEM::DenyNewEquipConst(long lMsgId)
{
  return  GetDefaultInterface()->DenyNewEquipConst(lMsgId);
}

short __fastcall TEZGEM::DenyOnlineRequest(long lMsgId)
{
  return  GetDefaultInterface()->DenyOnlineRequest(lMsgId);
}

short __fastcall TEZGEM::DenyRemoteCommand(long lMsgId, BSTR strCommand, short nState)
{
  return  GetDefaultInterface()->DenyRemoteCommand(lMsgId, strCommand, nState);
}

short __fastcall TEZGEM::DisableCommunication(void)
{
  return  GetDefaultInterface()->DisableCommunication();
}

short __fastcall TEZGEM::EnableCommunication(void)
{
  return  GetDefaultInterface()->EnableCommunication();
}

BSTR __fastcall TEZGEM::GetRemoteCommandParamName(long lMsgId, BSTR strCommand, short nIndex)
{
  return  GetDefaultInterface()->GetRemoteCommandParamName(lMsgId, strCommand, nIndex);
}

BSTR __fastcall TEZGEM::GetRemoteCommandParamValue(long lMsgId, BSTR strCommand, short nIndex)
{
  return  GetDefaultInterface()->GetRemoteCommandParamValue(lMsgId, strCommand, nIndex);
}

VARIANT_BOOL __fastcall TEZGEM::IsEventEnabled(long CEID)
{
  return  GetDefaultInterface()->IsEventEnabled(CEID);
}

VARIANT_BOOL __fastcall TEZGEM::IsOffline(void)
{
  return  GetDefaultInterface()->IsOffline();
}

VARIANT_BOOL __fastcall TEZGEM::IsOnline(void)
{
  return  GetDefaultInterface()->IsOnline();
}

VARIANT_BOOL __fastcall TEZGEM::SelectCurrentStatusValue(long SVID, short subSVID)
{
  return  GetDefaultInterface()->SelectCurrentStatusValue(SVID, subSVID);
}

VARIANT_BOOL __fastcall TEZGEM::SetCurrentStatusValue(long SVID, BSTR strValue)
{
  return  GetDefaultInterface()->SetCurrentStatusValue(SVID, strValue);
}

VARIANT_BOOL __fastcall TEZGEM::SetEquipConstRange(long ECID, BSTR strMinValue, BSTR strMaxValue)
{
  return  GetDefaultInterface()->SetEquipConstRange(ECID, strMinValue, strMaxValue);
}

VARIANT_BOOL __fastcall TEZGEM::SetEquipConstValue(long ECID, BSTR strCurrentValue)
{
  return  GetDefaultInterface()->SetEquipConstValue(ECID, strCurrentValue);
}

void __fastcall TEZGEM::SetModelName(BSTR strMDLN)
{
  GetDefaultInterface()->SetModelName(strMDLN);
}

void __fastcall TEZGEM::SetSoftwareRev(BSTR strSOFTREV)
{
  GetDefaultInterface()->SetSoftwareRev(strSOFTREV);
}

long __fastcall TEZGEM::GetNewEquipConst(long lMsgId, short nIndex)
{
  return  GetDefaultInterface()->GetNewEquipConst(lMsgId, nIndex);
}

BSTR __fastcall TEZGEM::GetNewEquipConstValue(long lMsgId, short nIndex)
{
  return  GetDefaultInterface()->GetNewEquipConstValue(lMsgId, nIndex);
}

short __fastcall TEZGEM::AddUnformattedPP(BSTR strPPID, BSTR strFilename)
{
  return  GetDefaultInterface()->AddUnformattedPP(strPPID, strFilename);
}

short __fastcall TEZGEM::RemoveProcessProgram(BSTR strPPID)
{
  return  GetDefaultInterface()->RemoveProcessProgram(strPPID);
}

short __fastcall TEZGEM::SetCurrentProcessProgram(BSTR strPPID)
{
  return  GetDefaultInterface()->SetCurrentProcessProgram(strPPID);
}

short __fastcall TEZGEM::DenyProcessProgramLoad(long lMsgId, short nErrorCode)
{
  return  GetDefaultInterface()->DenyProcessProgramLoad(lMsgId, nErrorCode);
}

short __fastcall TEZGEM::AcceptProcessProgram(long lMsgId, BSTR PPID)
{
  return  GetDefaultInterface()->AcceptProcessProgram(lMsgId, PPID);
}

short __fastcall TEZGEM::DenyProcessProgram(long lMsgId, short nCode)
{
  return  GetDefaultInterface()->DenyProcessProgram(lMsgId, nCode);
}

short __fastcall TEZGEM::AcceptDeleteProcessProgram(long lMsgId)
{
  return  GetDefaultInterface()->AcceptDeleteProcessProgram(lMsgId);
}

short __fastcall TEZGEM::DenyDeleteProcessProgram(long lMsgId, short nCode)
{
  return  GetDefaultInterface()->DenyDeleteProcessProgram(lMsgId, nCode);
}

BSTR __fastcall TEZGEM::GetPPDeleteRequested(long lMsgId, short nIndex)
{
  return  GetDefaultInterface()->GetPPDeleteRequested(lMsgId, nIndex);
}

short __fastcall TEZGEM::AcceptTerminalMessage(long lMsgId)
{
  return  GetDefaultInterface()->AcceptTerminalMessage(lMsgId);
}

short __fastcall TEZGEM::DenyTerminalMessage(short lMsgId)
{
  return  GetDefaultInterface()->DenyTerminalMessage(lMsgId);
}

BSTR __fastcall TEZGEM::GetTerminalMessageMulti(long lMsgId, short nIndex)
{
  return  GetDefaultInterface()->GetTerminalMessageMulti(lMsgId, nIndex);
}

short __fastcall TEZGEM::SendAlarmReport(long ALID, short ALCD)
{
  return  GetDefaultInterface()->SendAlarmReport(ALID, ALCD);
}

short __fastcall TEZGEM::SendEventReport(long CEID)
{
  return  GetDefaultInterface()->SendEventReport(CEID);
}

short __fastcall TEZGEM::AcceptProcessProgramLoad(long lMsgId)
{
  return  GetDefaultInterface()->AcceptProcessProgramLoad(lMsgId);
}

double __fastcall TEZGEM::GetProcessProgramSize(BSTR PPID)
{
  return  GetDefaultInterface()->GetProcessProgramSize(PPID);
}

void __fastcall TEZGEM::EnableAutoReply(short nStream, short nFunction)
{
  GetDefaultInterface()->EnableAutoReply(nStream, nFunction);
}

void __fastcall TEZGEM::DisableAutoReply(short nStream, short nFunction)
{
  GetDefaultInterface()->DisableAutoReply(nStream, nFunction);
}

short __fastcall TEZGEM::AbortMsg(long lMsgId)
{
  return  GetDefaultInterface()->AbortMsg(lMsgId);
}

short __fastcall TEZGEM::AddAsciiItem(long lMsgId, BSTR strValue, long lCount)
{
  return  GetDefaultInterface()->AddAsciiItem(lMsgId, strValue, lCount);
}

short __fastcall TEZGEM::AddBinaryItem(long lMsgId, short* pnValue, long lCount)
{
  return  GetDefaultInterface()->AddBinaryItem(lMsgId, pnValue, lCount);
}

short __fastcall TEZGEM::AddBoolItem(long lMsgId, short* pnValue, long lCount)
{
  return  GetDefaultInterface()->AddBoolItem(lMsgId, pnValue, lCount);
}

short __fastcall TEZGEM::AddF4Item(long lMsgId, float* pfValue, long lCount)
{
  return  GetDefaultInterface()->AddF4Item(lMsgId, pfValue, lCount);
}

short __fastcall TEZGEM::AddF8Item(long lMsgId, double* prValue, long lCount)
{
  return  GetDefaultInterface()->AddF8Item(lMsgId, prValue, lCount);
}

long __fastcall TEZGEM::AddFileBinaryItem(long lMsgId, BSTR strFilename)
{
  return  GetDefaultInterface()->AddFileBinaryItem(lMsgId, strFilename);
}

short __fastcall TEZGEM::AddI1Item(long lMsgId, short* pnValue, long lCount)
{
  return  GetDefaultInterface()->AddI1Item(lMsgId, pnValue, lCount);
}

short __fastcall TEZGEM::AddI2Item(long lMsgId, short* pnValue, long lCount)
{
  return  GetDefaultInterface()->AddI2Item(lMsgId, pnValue, lCount);
}

short __fastcall TEZGEM::AddI4Item(long lMsgId, long* plValue, long lCount)
{
  return  GetDefaultInterface()->AddI4Item(lMsgId, plValue, lCount);
}

short __fastcall TEZGEM::AddI8Item(long lMsgId, long* plValue, long lCount)
{
  return  GetDefaultInterface()->AddI8Item(lMsgId, plValue, lCount);
}

short __fastcall TEZGEM::AddJ8Item(long lMsgId, BSTR pszValue, long lCount)
{
  return  GetDefaultInterface()->AddJ8Item(lMsgId, pszValue, lCount);
}

short __fastcall TEZGEM::AddU1Item(long lMsgId, short* pnValue, long lCount)
{
  return  GetDefaultInterface()->AddU1Item(lMsgId, pnValue, lCount);
}

short __fastcall TEZGEM::AddU2Item(long lMsgId, long* plValue, long lCount)
{
  return  GetDefaultInterface()->AddU2Item(lMsgId, plValue, lCount);
}

short __fastcall TEZGEM::AddU4Item(long lMsgId, double* prValue, long lCount)
{
  return  GetDefaultInterface()->AddU4Item(lMsgId, prValue, lCount);
}

short __fastcall TEZGEM::AddU8Item(long lMsgId, double* prValue, long lCount)
{
  return  GetDefaultInterface()->AddU8Item(lMsgId, prValue, lCount);
}

short __fastcall TEZGEM::CloseListItem(long lMsgId)
{
  return  GetDefaultInterface()->CloseListItem(lMsgId);
}

short __fastcall TEZGEM::CloseMsg(long lMsgId)
{
  return  GetDefaultInterface()->CloseMsg(lMsgId);
}

long __fastcall TEZGEM::CreateMsg(short nStream, short nFunction, short bWaitReply)
{
  return  GetDefaultInterface()->CreateMsg(nStream, nFunction, bWaitReply);
}

long __fastcall TEZGEM::CreateReplyMsg(long lMsgId)
{
  return  GetDefaultInterface()->CreateReplyMsg(lMsgId);
}

void __fastcall TEZGEM::DisableLog(void)
{
  GetDefaultInterface()->DisableLog();
}

void __fastcall TEZGEM::EnableLog(void)
{
  GetDefaultInterface()->EnableLog();
}

long __fastcall TEZGEM::GetAsciiItem(long lMsgId, BSTR* pszValue)
{
  return  GetDefaultInterface()->GetAsciiItem(lMsgId, pszValue);
}

long __fastcall TEZGEM::GetAsciiItemD(long lMsgId, BSTR strPointer, BSTR* pszValue)
{
  return  GetDefaultInterface()->GetAsciiItemD(lMsgId, strPointer, pszValue);
}

BSTR __fastcall TEZGEM::GetAsciiItemString(long lMsgId)
{
  return  GetDefaultInterface()->GetAsciiItemString(lMsgId);
}

BSTR __fastcall TEZGEM::GetAsciiItemStringD(long lMsgId, BSTR strPointer)
{
  return  GetDefaultInterface()->GetAsciiItemStringD(lMsgId, strPointer);
}

long __fastcall TEZGEM::GetBinaryItem(long lMsgId, short* pnValue)
{
  return  GetDefaultInterface()->GetBinaryItem(lMsgId, pnValue);
}

long __fastcall TEZGEM::GetBinaryItemD(long lMsgId, BSTR strPointer, short* pnValue)
{
  return  GetDefaultInterface()->GetBinaryItemD(lMsgId, strPointer, pnValue);
}

long __fastcall TEZGEM::GetBoolItem(long lMsgId, short* pnValue)
{
  return  GetDefaultInterface()->GetBoolItem(lMsgId, pnValue);
}

long __fastcall TEZGEM::GetBoolItemD(long lMsgId, BSTR strPointer, short* pnValue)
{
  return  GetDefaultInterface()->GetBoolItemD(lMsgId, strPointer, pnValue);
}

long __fastcall TEZGEM::GetF4Item(long lMsgId, float* pfValue)
{
  return  GetDefaultInterface()->GetF4Item(lMsgId, pfValue);
}

long __fastcall TEZGEM::GetF4ItemD(long lMsgId, BSTR strPointer, float* pfValue)
{
  return  GetDefaultInterface()->GetF4ItemD(lMsgId, strPointer, pfValue);
}

long __fastcall TEZGEM::GetF8Item(long lMsgId, double* prValue)
{
  return  GetDefaultInterface()->GetF8Item(lMsgId, prValue);
}

long __fastcall TEZGEM::GetF8ItemD(long lMsgId, BSTR strPointer, double* prValue)
{
  return  GetDefaultInterface()->GetF8ItemD(lMsgId, strPointer, prValue);
}

long __fastcall TEZGEM::GetFileBinaryItem(long lMsgId, BSTR strFilename)
{
  return  GetDefaultInterface()->GetFileBinaryItem(lMsgId, strFilename);
}

long __fastcall TEZGEM::GetFileBinaryItemD(long lMsgId, BSTR strPointer, BSTR strFilename)
{
  return  GetDefaultInterface()->GetFileBinaryItemD(lMsgId, strPointer, strFilename);
}

BSTR __fastcall TEZGEM::GetHeaderMsg(long lMsgId)
{
  return  GetDefaultInterface()->GetHeaderMsg(lMsgId);
}

long __fastcall TEZGEM::GetI1Item(long lMsgId, short* pnValue)
{
  return  GetDefaultInterface()->GetI1Item(lMsgId, pnValue);
}

long __fastcall TEZGEM::GetI1ItemD(long lMsgId, BSTR strPointer, short* pnValue)
{
  return  GetDefaultInterface()->GetI1ItemD(lMsgId, strPointer, pnValue);
}

long __fastcall TEZGEM::GetI2Item(long lMsgId, short* pnValue)
{
  return  GetDefaultInterface()->GetI2Item(lMsgId, pnValue);
}

long __fastcall TEZGEM::GetI2ItemD(long lMsgId, BSTR strPointer, short* pnValue)
{
  return  GetDefaultInterface()->GetI2ItemD(lMsgId, strPointer, pnValue);
}

long __fastcall TEZGEM::GetI4Item(long lMsgId, long* plValue)
{
  return  GetDefaultInterface()->GetI4Item(lMsgId, plValue);
}

long __fastcall TEZGEM::GetI4ItemD(long lMsgId, BSTR strPointer, long* plValue)
{
  return  GetDefaultInterface()->GetI4ItemD(lMsgId, strPointer, plValue);
}

long __fastcall TEZGEM::GetI8Item(long lMsgId, long* plValue)
{
  return  GetDefaultInterface()->GetI8Item(lMsgId, plValue);
}

long __fastcall TEZGEM::GetI8ItemD(long lMsgId, BSTR strPointer, long* plValue)
{
  return  GetDefaultInterface()->GetI8ItemD(lMsgId, strPointer, plValue);
}

long __fastcall TEZGEM::GetJ8Item(long lMsgId, BSTR* pszValue)
{
  return  GetDefaultInterface()->GetJ8Item(lMsgId, pszValue);
}

long __fastcall TEZGEM::GetJ8ItemD(long lMsgId, BSTR strPointer, BSTR* pszValue)
{
  return  GetDefaultInterface()->GetJ8ItemD(lMsgId, strPointer, pszValue);
}

BSTR __fastcall TEZGEM::GetJ8ItemString(long lMsgId)
{
  return  GetDefaultInterface()->GetJ8ItemString(lMsgId);
}

BSTR __fastcall TEZGEM::GetJ8ItemStringD(long lMsgId, BSTR strPointer)
{
  return  GetDefaultInterface()->GetJ8ItemStringD(lMsgId, strPointer);
}

short __fastcall TEZGEM::GetListItemClose(long lMsgId)
{
  return  GetDefaultInterface()->GetListItemClose(lMsgId);
}

short __fastcall TEZGEM::GetListItemOpen(long lMsgId)
{
  return  GetDefaultInterface()->GetListItemOpen(lMsgId);
}

short __fastcall TEZGEM::GetMsgInfo(long lMsgId, short* pnStream, short* pnFunction, 
                                    short* pnWaitReply, long* plMsgLength)
{
  return  GetDefaultInterface()->GetMsgInfo(lMsgId, pnStream, pnFunction, pnWaitReply, plMsgLength);
}

short __fastcall TEZGEM::GetMsgQueSize(void)
{
  return  GetDefaultInterface()->GetMsgQueSize();
}

short __fastcall TEZGEM::GetNextItemFormat(long lMsgId)
{
  return  GetDefaultInterface()->GetNextItemFormat(lMsgId);
}

short __fastcall TEZGEM::GetSubItemFormat(long lMsgId)
{
  return  GetDefaultInterface()->GetSubItemFormat(lMsgId);
}

BSTR __fastcall TEZGEM::GetSystemByte(long lMsgId)
{
  return  GetDefaultInterface()->GetSystemByte(lMsgId);
}

long __fastcall TEZGEM::GetU1Item(long lMsgId, short* pnValue)
{
  return  GetDefaultInterface()->GetU1Item(lMsgId, pnValue);
}

long __fastcall TEZGEM::GetU1ItemD(long lMsgId, BSTR strPointer, short* pnValue)
{
  return  GetDefaultInterface()->GetU1ItemD(lMsgId, strPointer, pnValue);
}

long __fastcall TEZGEM::GetU2Item(long lMsgId, long* plValue)
{
  return  GetDefaultInterface()->GetU2Item(lMsgId, plValue);
}

long __fastcall TEZGEM::GetU2ItemD(long lMsgId, BSTR strPointer, long* plValue)
{
  return  GetDefaultInterface()->GetU2ItemD(lMsgId, strPointer, plValue);
}

long __fastcall TEZGEM::GetU4Item(long lMsgId, double* prValue)
{
  return  GetDefaultInterface()->GetU4Item(lMsgId, prValue);
}

long __fastcall TEZGEM::GetU4ItemD(long lMsgId, BSTR strPointer, double* prValue)
{
  return  GetDefaultInterface()->GetU4ItemD(lMsgId, strPointer, prValue);
}

long __fastcall TEZGEM::GetU8Item(long lMsgId, double* prValue)
{
  return  GetDefaultInterface()->GetU8Item(lMsgId, prValue);
}

long __fastcall TEZGEM::GetU8ItemD(long lMsgId, BSTR strPointer, double* prValue)
{
  return  GetDefaultInterface()->GetU8ItemD(lMsgId, strPointer, prValue);
}

short __fastcall TEZGEM::OpenListItem(long lMsgId)
{
  return  GetDefaultInterface()->OpenListItem(lMsgId);
}

short __fastcall TEZGEM::SendMsg(long lMsgId)
{
  return  GetDefaultInterface()->SendMsg(lMsgId);
}

short __fastcall TEZGEM::SetComm(short nComPort, long lBaudRate, short nParity, short nDataBits, 
                                 short nStopBits)
{
  return  GetDefaultInterface()->SetComm(nComPort, lBaudRate, nParity, nDataBits, nStopBits);
}

void __fastcall TEZGEM::SetLogFile(BSTR strFilename, short bLogSecsII)
{
  GetDefaultInterface()->SetLogFile(strFilename, bLogSecsII);
}

void __fastcall TEZGEM::GoOnlineLocal(void)
{
  GetDefaultInterface()->GoOnlineLocal();
}

void __fastcall TEZGEM::GoOnlineRemote(void)
{
  GetDefaultInterface()->GoOnlineRemote();
}

void __fastcall TEZGEM::GoOffline(void)
{
  GetDefaultInterface()->GoOffline();
}

void __fastcall TEZGEM::EnableSpooling(void)
{
  GetDefaultInterface()->EnableSpooling();
}

void __fastcall TEZGEM::DisableSpooling(void)
{
  GetDefaultInterface()->DisableSpooling();
}

BSTR __fastcall TEZGEM::GetSpoolStartTime(void)
{
  return  GetDefaultInterface()->GetSpoolStartTime();
}

void __fastcall TEZGEM::SetMaxSpoolCount(short nMax)
{
  GetDefaultInterface()->SetMaxSpoolCount(nMax);
}

short __fastcall TEZGEM::GetMaxSpoolCount(void)
{
  return  GetDefaultInterface()->GetMaxSpoolCount();
}

short __fastcall TEZGEM::GetActualSpoolCount(void)
{
  return  GetDefaultInterface()->GetActualSpoolCount();
}

BSTR __fastcall TEZGEM::GetSpoolFullTime(void)
{
  return  GetDefaultInterface()->GetSpoolFullTime();
}

void __fastcall TEZGEM::EnableSpoolOverWrite(void)
{
  GetDefaultInterface()->EnableSpoolOverWrite();
}

void __fastcall TEZGEM::DisableSpoolOverWrite(void)
{
  GetDefaultInterface()->DisableSpoolOverWrite();
}

VARIANT_BOOL __fastcall TEZGEM::IsSpoolEnabled(void)
{
  return  GetDefaultInterface()->IsSpoolEnabled();
}

VARIANT_BOOL __fastcall TEZGEM::IsSpoolOverWritable(void)
{
  return  GetDefaultInterface()->IsSpoolOverWritable();
}

void __fastcall TEZGEM::SetMaxSpoolTransmit(short nMaxTransmit)
{
  GetDefaultInterface()->SetMaxSpoolTransmit(nMaxTransmit);
}

short __fastcall TEZGEM::GemMaxSpoolTransmit(void)
{
  return  GetDefaultInterface()->GemMaxSpoolTransmit();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeCEID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeCEID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeCEID(void)
{
  return  GetDefaultInterface()->GetFormatCodeCEID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeALID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeALID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeALID(void)
{
  return  GetDefaultInterface()->GetFormatCodeALID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeECID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeECID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeECID(void)
{
  return  GetDefaultInterface()->GetFormatCodeECID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeSVID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeSVID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeSVID(void)
{
  return  GetDefaultInterface()->GetFormatCodeSVID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeRPTID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeRPTID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeRPTID(void)
{
  return  GetDefaultInterface()->GetFormatCodeRPTID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeDATAID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeDATAID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeDATAID(void)
{
  return  GetDefaultInterface()->GetFormatCodeDATAID();
}

VARIANT_BOOL __fastcall TEZGEM::SetFormatCodeTRACEID(short nFormatCode)
{
  return  GetDefaultInterface()->SetFormatCodeTRACEID(nFormatCode);
}

short __fastcall TEZGEM::GetFormatCodeTRACEID(void)
{
  return  GetDefaultInterface()->GetFormatCodeTRACEID();
}

VARIANT_BOOL __fastcall TEZGEM::CreateFormattedProcessProgram(BSTR strPPID)
{
  return  GetDefaultInterface()->CreateFormattedProcessProgram(strPPID);
}

VARIANT_BOOL __fastcall TEZGEM::AddProcessProgramParameter(BSTR strPPID, short nCommandCode, 
                                                           BSTR strDataFormat, BSTR strValue)
{
  return  GetDefaultInterface()->AddProcessProgramParameter(strPPID, nCommandCode, strDataFormat, 
                                                            strValue);
}

BSTR __fastcall TEZGEM::GetCurrentECValue(long ECID)
{
  return  GetDefaultInterface()->GetCurrentECValue(ECID);
}

BSTR __fastcall TEZGEM::GetEquipConstName(long ECID)
{
  return  GetDefaultInterface()->GetEquipConstName(ECID);
}

BSTR __fastcall TEZGEM::GetCurrentPPID(void)
{
  return  GetDefaultInterface()->GetCurrentPPID();
}

short __fastcall TEZGEM::SendProcessProgram(BSTR strPPID)
{
  return  GetDefaultInterface()->SendProcessProgram(strPPID);
}

void __fastcall TEZGEM::SetLogRetention(short nDays)
{
  GetDefaultInterface()->SetLogRetention(nDays);
}

short __fastcall TEZGEM::GetLogRetention(void)
{
  return  GetDefaultInterface()->GetLogRetention();
}

BSTR __fastcall TEZGEM::GetMsgText(long lMsgId)
{
  return  GetDefaultInterface()->GetMsgText(lMsgId);
}

long __fastcall TEZGEM::CreateEmptyMsg(void)
{
  return  GetDefaultInterface()->CreateEmptyMsg();
}

short __fastcall TEZGEM::SetHeaderByte(long lMsgId, short* pnBuff)
{
  return  GetDefaultInterface()->SetHeaderByte(lMsgId, pnBuff);
}

short __fastcall TEZGEM::GetHeaderByte(long lMsgId, short* pnBuff)
{
  return  GetDefaultInterface()->GetHeaderByte(lMsgId, pnBuff);
}

long __fastcall TEZGEM::SetMsgByte(long lMsgId, short* pnBuff, long lSize)
{
  return  GetDefaultInterface()->SetMsgByte(lMsgId, pnBuff, lSize);
}

long __fastcall TEZGEM::GetMsgByte(long lMsgId, short* pnBuff, long lSize)
{
  return  GetDefaultInterface()->GetMsgByte(lMsgId, pnBuff, lSize);
}

void __fastcall TEZGEM::SetFormatCheck(short bEnabled)
{
  GetDefaultInterface()->SetFormatCheck(bEnabled);
}

short __fastcall TEZGEM::GetFormatCheck(void)
{
  return  GetDefaultInterface()->GetFormatCheck();
}

void __fastcall TEZGEM::SetFormatFile(BSTR lpszFormatFile)
{
  GetDefaultInterface()->SetFormatFile(lpszFormatFile);
}

void __fastcall TEZGEM::EnableMultiBlockInquire(void)
{
  GetDefaultInterface()->EnableMultiBlockInquire();
}

void __fastcall TEZGEM::DisableMultiBlockInquire(void)
{
  GetDefaultInterface()->DisableMultiBlockInquire();
}

void __fastcall TEZGEM::EnableAlarm(long ALID)
{
  GetDefaultInterface()->EnableAlarm(ALID);
}

void __fastcall TEZGEM::DisableAlarm(long ALID)
{
  GetDefaultInterface()->DisableAlarm(ALID);
}

void __fastcall TEZGEM::SetStatusValueRange(long SVID, BSTR strMin, BSTR strMax)
{
  GetDefaultInterface()->SetStatusValueRange(SVID, strMin, strMax);
}

void __fastcall TEZGEM::EnableErrorMessage(void)
{
  GetDefaultInterface()->EnableErrorMessage();
}

void __fastcall TEZGEM::DisableErrorMessage(void)
{
  GetDefaultInterface()->DisableErrorMessage();
}

short __fastcall TEZGEM::AddListItem(long lMsgId, long lCount)
{
  return  GetDefaultInterface()->AddListItem(lMsgId, lCount);
}

long __fastcall TEZGEM::GetListItem(long lMsgId)
{
  return  GetDefaultInterface()->GetListItem(lMsgId);
}

long __fastcall TEZGEM::SetReport(long RPTID, long* plSVID, long lCount)
{
  return  GetDefaultInterface()->SetReport(RPTID, plSVID, lCount);
}

long __fastcall TEZGEM::GetReport(long RPTID, long* plSVID)
{
  return  GetDefaultInterface()->GetReport(RPTID, plSVID);
}

long __fastcall TEZGEM::ClearReport(void)
{
  return  GetDefaultInterface()->ClearReport();
}

long __fastcall TEZGEM::RemoveReport(long RPTID)
{
  return  GetDefaultInterface()->RemoveReport(RPTID);
}

long __fastcall TEZGEM::SetEventReport(long CEID, long* plRPTID, long lCount)
{
  return  GetDefaultInterface()->SetEventReport(CEID, plRPTID, lCount);
}

long __fastcall TEZGEM::GetEventReport(long CEID, long* plRPTID)
{
  return  GetDefaultInterface()->GetEventReport(CEID, plRPTID);
}

long __fastcall TEZGEM::AddCurrentStatusValue(long lMsgId, long SVID)
{
  return  GetDefaultInterface()->AddCurrentStatusValue(lMsgId, SVID);
}

BSTR __fastcall TEZGEM::GetCurrentStatusValue(long SVID)
{
  return  GetDefaultInterface()->GetCurrentStatusValue(SVID);
}

BSTR __fastcall TEZGEM::GetSVName(long SVID)
{
  return  GetDefaultInterface()->GetSVName(SVID);
}

BSTR __fastcall TEZGEM::GetSVUnit(long SVID)
{
  return  GetDefaultInterface()->GetSVUnit(SVID);
}

void __fastcall TEZGEM::SetRemoteCommandErrorCode(long lMsgId, BSTR strCommand, short nParamIndex, 
                                                  short nErrorCode)
{
  GetDefaultInterface()->SetRemoteCommandErrorCode(lMsgId, strCommand, nParamIndex, nErrorCode);
}

short __fastcall TEZGEM::GetRuntimeState(void)
{
  return  GetDefaultInterface()->GetRuntimeState();
}

long __fastcall TEZGEM::GetTotalSpoolCount(void)
{
  return  GetDefaultInterface()->GetTotalSpoolCount();
}

void __fastcall TEZGEM::SetTimeFormat(short nLength)
{
  GetDefaultInterface()->SetTimeFormat(nLength);
}

long __fastcall TEZGEM::GetAlarmInfo(long ALID, short* pnALCD, BSTR* pszALTX)
{
  return  GetDefaultInterface()->GetAlarmInfo(ALID, pnALCD, pszALTX);
}

short __fastcall TEZGEM::GetAlarmCode(long ALID)
{
  return  GetDefaultInterface()->GetAlarmCode(ALID);
}

BSTR __fastcall TEZGEM::GetAlarmText(long ALID)
{
  return  GetDefaultInterface()->GetAlarmText(ALID);
}

short __fastcall TEZGEM::ReplyRemoteCommand(long lMsgId, BSTR strCommand, short nCode)
{
  return  GetDefaultInterface()->ReplyRemoteCommand(lMsgId, strCommand, nCode);
}

short __fastcall TEZGEM::UpdateAlarm(long ALID, BSTR strName, short ALCD)
{
  return  GetDefaultInterface()->UpdateAlarm(ALID, strName, ALCD);
}

short __fastcall TEZGEM::SeparateLog(BSTR szLogFileName, short nStream, short nFunction)
{
  return  GetDefaultInterface()->SeparateLog(szLogFileName, nStream, nFunction);
}

void __fastcall TEZGEM::SetMaxLogFileSize(short nMegaByte)
{
  GetDefaultInterface()->SetMaxLogFileSize(nMegaByte);
}

long __fastcall TEZGEM::AddArrayItem(long lMsgId, BSTR pszType, long nDataCount, BSTR pszData)
{
  return  GetDefaultInterface()->AddArrayItem(lMsgId, pszType, nDataCount, pszData);
}

long __fastcall TEZGEM::GetArrayItem(long lMsgId, BSTR* pszValue)
{
  return  GetDefaultInterface()->GetArrayItem(lMsgId, pszValue);
}

void __fastcall TEZGEM::SkipLog(short nStream, short nFunction)
{
  GetDefaultInterface()->SkipLog(nStream, nFunction);
}


};     // namespace Ezgemlib_tlb


// *********************************************************************//
// The Register function is invoked by the IDE when this module is 
// installed in a Package. It provides the list of Components (including
// OCXes) implemented by this module. The following implementation
// informs the IDE of the OCX proxy classes implemented here.
// *********************************************************************//
namespace Ezgemlib_ocx
{

void __fastcall PACKAGE Register()
{
  // [1]
  System::Classes::TComponentClass cls_ocx[] = {
                              __classid(Ezgemlib_tlb::TEZGEM)
                           };
  System::Classes::RegisterComponents("ActiveX", cls_ocx,
                     sizeof(cls_ocx)/sizeof(cls_ocx[0])-1);
}

};     // namespace Ezgemlib_ocx
