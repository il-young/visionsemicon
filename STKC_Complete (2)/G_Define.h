#include "STKC.h"

#include "System_Setting.h"
#include "System_login_frm.h"
#include "DBModule.h"



#define local_ip_default "127.0.0.1"
#define local_port_default 5001
#define remote_ip_default "127.0.0.1"
#define remote_port_default 5001





//-------
// User Info
//-------
#ifndef UserInfo
typedef struct UserInfo
{
	AnsiString USER_ID;
	AnsiString USER_PASS;
	AnsiString USER_GROUP;
	AnsiString USER_DESCRIPTIONS;
	AnsiString USER_LOGOUTTIME;
	AnsiString USER_LOGINDATE;
}stUserInfo;
#define UserInfo
#endif

//-------
// AGV Info
//-------
#ifndef AGVInfo
typedef struct AGVInfo
{
	AnsiString AGV_ID;
	AnsiString AGV_STATUS;
	AnsiString AGV_ERROR;
	AnsiString AGV_POINT;
	AnsiString AGV_DESTINATION;
	AnsiString AGV_MAGAZINEID;
    AnsiString AGV_BATTERY;
}stAGVInfo;
#define AGVInfo
#endif

//-------
// Transport Command Info
//-------
#ifndef TransportCommandInfo
typedef struct TransportCommandInfo
{
	AnsiString TRANSPORT_ISSUEDATE;
	AnsiString TRANSPORT_STATUS;
	AnsiString TRANSPORT_MAGAZINEID;
	AnsiString TRANSPORT_SOURCE;
	AnsiString TRANSPORT_DESTINATION;
	AnsiString TRANSPORT_PRIORITY;
	AnsiString TRANSPORT_TYPE;
	AnsiString TRANSPORT_COMMANDID;
}stTransportCommandInfo;
#define TransportCommandInfo
#endif

//-------
// Magazine Info
//-------
#ifndef MagazineInfo
typedef struct MagazineInfo
{
	AnsiString MAGAZINE_ID;
	AnsiString MAGAZINE_LOCATION;
	AnsiString MAGAZINE_STATUS;
	AnsiString MAGAZINE_ENTERDATE;
}stMagazineInfo;
#define MagazineInfo
#endif

//-------
// Port Info
//-------
#ifndef PortInfo
typedef struct PortInfo
{
	AnsiString PORT_ID;
	AnsiString PORT_STATUS;
	AnsiString PORT_TYPE;
	AnsiString PORT_ENTERDATE;
	AnsiString PORT_MODIFIER;
}stPortInfo;
#define PortInfo
#endif

//-------
// SECS Info
//-------
#ifndef SECSInfo
typedef struct SECSInfo
{
	AnsiString SECS_TYPE;
	AnsiString SECS_LIP;
	AnsiString SECS_LPORT;
	AnsiString SECS_RIP;
	AnsiString SECS_RPORT;
	AnsiString SECS_T3;
	AnsiString SECS_T5;
	AnsiString SECS_T6;
	AnsiString SECS_T7;
	AnsiString SECS_T8;
	AnsiString SECS_T9;
}stSECSInfo;
#define SECSInfo
#endif

#ifndef MCS_COMMAND
typedef enum MCS_COMMAND
{
	MCS_COMMAND_ABORT = 1,
	MCS_COMMAND_CANCEL = 2,
	MCS_COMMAND_TRANSFER = 3,
	MCS_COMMAND_MOVE = 4
}enMCS_COMMAND;
#define MCS_COMMAND
#endif



