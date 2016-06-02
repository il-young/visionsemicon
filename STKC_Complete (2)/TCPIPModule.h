
#define SEND_NODE_LIST 0x01
#define SEND_OTHER 0x02

#define SEND_SERVER_MESSAGE_LENGTH 0x24
#define DEVICE_ID 0x0A

//---------------------------------------------------------------------------

#ifndef TCPIPModuleH
#define TCPIPModuleH
//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#include <deque.h>
#include <Web.Win.Sockets.hpp>
#include <System.Win.ScktComp.hpp>
#include "Define.h"

class TCPIPManager{
	private:
		unsigned long ChangeSafeyInfoToValue(stagvInform agvInformStruct);
		stagvSafety ChangeSafetyValueToInfo(long data);
	public:
		stMsgInfo ParserClientMsg(TCustomWinSocket *Socket);
		stMsgInfo MakeSendMessage(stagvInform &AgvInfo, unsigned char SendCommand);
		stMsgNL MakeSendNodeListMessage(stagvInform &AgvInfo, unsigned char SendCommand);
		unsigned char SendMsgParsingAndClientSend(unsigned char MsgType, void *msgST, TCustomWinSocket *ClientSocket);

	private:
	char MsgBuffer[256];
};
#endif
