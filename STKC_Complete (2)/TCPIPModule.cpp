//---------------------------------------------------------------------------

#pragma hdrstop

#include "TCPIPModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
/**
 * Message Parsing form Client
 * In : TCustomWinSocket
 * Out : stMsgInfo Struct
 */
stMsgInfo TCPIPManager::ParserClientMsg(TCustomWinSocket *Socket)
{
	int ClientSocketCnt = 0x0;
	unsigned long unSafety = 0x0;

	stMsgInfo msg;

	ClientSocketCnt = Socket->ReceiveLength();
	Socket->ReceiveBuf(MsgBuffer,ClientSocketCnt);

	if((MsgBuffer[0] == 0x02) && (MsgBuffer[24]== 0x0D) && (MsgBuffer[25] == 0x03))
	{
		msg.CheckMsgStatusFlag = true;

		msg.msg_Start = MsgBuffer[0];
		msg.msg_CR = MsgBuffer[24];
		msg.msg_END = MsgBuffer[25];

		// 1 Byte Length High Buffer, 2Byte Length Low Buffer
		msg.msg_Length = (((MsgBuffer[1]<<8)|MsgBuffer[2])&0xFFFF);
		// 3 Byte Device ID
		msg.msg_DeviceID =  MsgBuffer[3];
		// 4 Byte Command
		msg.msg_Command =  MsgBuffer[4];
		// 5 Byte Status
		msg.msg_Status = MsgBuffer[5];

		// 6 LoadPort
		msg.msg_stLoadPort.msg_LoadPort_Type = MsgBuffer[6];
		// 7 LoadPort
		msg.msg_stLoadPort.msg_LoadPort_ID = MsgBuffer[7];
		// 8 LoadPort
		msg.msg_stLoadPort.msg_LoadPort_Status = MsgBuffer[8];
		// 9 LoadPort
		msg.msg_stLoadPort.msg_LoadPort_Carrier_Quantity = MsgBuffer[9];

		//10 Carrier
		msg.msg_stCarrier.msg_Carrier_LP_Type = MsgBuffer[10];
		//11 Carrier
		msg.msg_stCarrier.msg_Carrier_LP_ID = MsgBuffer[11];
		//12 Carrier
		msg.msg_stCarrier.msg_Carrier_Status = MsgBuffer[12];
		//13 Carrier
		msg.msg_stCarrier.msg_Carrier_ID = MsgBuffer[13];

    	//14 Safety First Buffer, 15 Safety Seconds Buffer, 16 Safety Third Buffer, 17 Safety Last Buffer
		unSafety = ((MsgBuffer[14]<<24)&0xFF000000);
		unSafety = ((unSafety|(MsgBuffer[15]<<16))&0xFFFF0000);
		unSafety = ((unSafety|(MsgBuffer[16]<<8))&0xFFFFFF00);
		unSafety = ((unSafety|MsgBuffer[17])&0xFFFFFFFF);
		msg.msg_Safety = unSafety;

		//18 Current Node High Buffer, 19 Current Node Low Buffer
		msg.msg_CurrentNode = (((MsgBuffer[18]<<8)|MsgBuffer[19])&0xFFFF);
		//20 Next Node High Buffer, 21 Next Node Low Buffer
		msg.msg_NextNode = (((MsgBuffer[20]<<8)|MsgBuffer[21])&0xFFFF);
		//22 Goal(target) Node High Buffer, 23 Goal (target) Node Lowe Buffer
		msg.msg_GoalNode = (((MsgBuffer[22]<<8)|MsgBuffer[23])&0xFFFF);

		msg.msg_agvDirection = 0x0;

		return msg;
	}
	else
	{
		msg.CheckMsgStatusFlag = false;
		return msg;
	}
}

//----------------------------------------------------------------------------
/**
 * Make Safety Value
 * In : unsigned long (safety Value)
 * Out : stagvSafety
 */
stagvSafety TCPIPManager::ChangeSafetyValueToInfo(long data)
{
	stagvSafety _SafetyInfo;

	if(0x00000002 == (data & 0x00000002)) _SafetyInfo.KeySwitch = SAFETY_SENSOR_ON;
	else _SafetyInfo.KeySwitch = SAFETY_SENSOR_OFF;

	if(0x00000004 == (data & 0x00000004)) _SafetyInfo.EMOSwitch = SAFETY_SENSOR_ON;
	else _SafetyInfo.EMOSwitch = SAFETY_SENSOR_OFF;

	if(0x00000008 == (data & 0x00000008)) _SafetyInfo.StartSwitch = SAFETY_SENSOR_ON;
	else _SafetyInfo.StartSwitch = SAFETY_SENSOR_OFF;

	if(0x00000010 == (data & 0x00000010)) _SafetyInfo.ResetSwitch = SAFETY_SENSOR_ON;
	else _SafetyInfo.ResetSwitch = SAFETY_SENSOR_OFF;

	if(0x00000020 == (data & 0x00000020)) _SafetyInfo.Bumper = SAFETY_SENSOR_ON;
	else _SafetyInfo.Bumper = SAFETY_SENSOR_OFF;

	if(0x00000040 == (data & 0x00000040)) _SafetyInfo.VoltageMetaHigh = SAFETY_SENSOR_ON;
	else _SafetyInfo.VoltageMetaHigh = SAFETY_SENSOR_OFF;

	if(0x00000080 == (data & 0x00000080)) _SafetyInfo.VoltageMetaLow = SAFETY_SENSOR_ON;
	else _SafetyInfo.VoltageMetaLow = SAFETY_SENSOR_OFF;

	if(0x00000100 == (data & 0x00000100)) _SafetyInfo.MotorError0 = SAFETY_SENSOR_ON;
	else _SafetyInfo.MotorError0 = SAFETY_SENSOR_OFF;

	if(0x00000200 == (data & 0x00000200)) _SafetyInfo.MotorError1 = SAFETY_SENSOR_ON;
	else _SafetyInfo.MotorError1 = SAFETY_SENSOR_OFF;

	if(0x00000400 == (data & 0x00000400)) _SafetyInfo.RearPBS_A = SAFETY_SENSOR_ON;
	else _SafetyInfo.RearPBS_A = SAFETY_SENSOR_OFF;

	if(0x00000800 == (data & 0x00000800)) _SafetyInfo.RearPBS_B = SAFETY_SENSOR_ON;
	else _SafetyInfo.RearPBS_B = SAFETY_SENSOR_OFF;

	if(0x00001000 == (data & 0x00001000)) _SafetyInfo.RearPBS_C = SAFETY_SENSOR_ON;
	else _SafetyInfo.RearPBS_C = SAFETY_SENSOR_OFF;

	if(0x00002000 == (data & 0x00002000)) _SafetyInfo.FrontPBS_A = SAFETY_SENSOR_ON;
	else _SafetyInfo.FrontPBS_A = SAFETY_SENSOR_OFF;

	if(0x00004000 == (data & 0x00004000)) _SafetyInfo.FrontPBS_B = SAFETY_SENSOR_ON;
	else _SafetyInfo.FrontPBS_B = SAFETY_SENSOR_OFF;

	if(0x00008000 == (data & 0x00008000)) _SafetyInfo.FrontPBS_C = SAFETY_SENSOR_ON;
	else _SafetyInfo.FrontPBS_C = SAFETY_SENSOR_OFF;

	if(0x00010000 == (data & 0x00010000)) _SafetyInfo.BatteryAbsence = SAFETY_SENSOR_ON;
	else _SafetyInfo.BatteryAbsence = SAFETY_SENSOR_OFF;

//	if(0x00020000 == (data & 0x00020000)) _SafetyInfo.stagv_LoadAbsence.FoupRight = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.FoupRight = SAFETY_SENSOR_OFF;
//
//	if(0x00040000 == (data & 0x00040000)) _SafetyInfo.stagv_LoadAbsence.FoupLeft = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.FoupLeft = SAFETY_SENSOR_OFF;
//
//	if(0x00080000 == (data & 0x00080000)) _SafetyInfo.stagv_LoadAbsence.FoupFront = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.FoupFront = SAFETY_SENSOR_OFF;
//
//	if(0x00100000 == (data & 0x00100000)) _SafetyInfo.stagv_LoadAbsence.FoupRear = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.FoupRear = SAFETY_SENSOR_OFF;
//
//	if(0x00200000 == (data & 0x00200000)) _SafetyInfo.stagv_LoadAbsence.CassetteFront = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.CassetteFront = SAFETY_SENSOR_OFF;
//
//	if(0x00400000 == (data & 0x00400000)) _SafetyInfo.stagv_LoadAbsence.CassetteRear = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_LoadAbsence.CassetteRear = SAFETY_SENSOR_OFF;
//
//	if(0x00800000 == (data & 0x00800000)) _SafetyInfo.stagv_MagPos.DerailMent = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_MagPos.DerailMent = SAFETY_SENSOR_OFF;
//
//	if(0x01000000 == (data & 0x01000000)) _SafetyInfo.stagv_MagPos.DerailMent = SAFETY_SENSOR_ON;
//	else _SafetyInfo.stagv_MagPos.DerailMent = SAFETY_SENSOR_OFF;

	return _SafetyInfo;
}

//----------------------------------------------------------------------------
/**
 * Make Safety Long Value
 * In : stlgvSafety
 * Out : unsigned long (safety Value)
 */
unsigned long TCPIPManager::ChangeSafeyInfoToValue(stagvInform agvInformStruct)
{
	unsigned long ReturnSafety = 0x80000001;

	if(agvInformStruct.stSafetyInfo.KeySwitch == SAFETY_SENSOR_ON)			//1
	{
		ReturnSafety = (ReturnSafety | 0x00000002);
	}

	if(agvInformStruct.stSafetyInfo.EMOSwitch == SAFETY_SENSOR_ON)			//2
	{
		ReturnSafety = (ReturnSafety | 0x00000004);
	}

	if(agvInformStruct.stSafetyInfo.StartSwitch == SAFETY_SENSOR_ON)		//3
	{
		ReturnSafety = (ReturnSafety | 0x00000008);
	}

	if(agvInformStruct.stSafetyInfo.ResetSwitch == SAFETY_SENSOR_ON)		//4
	{
		ReturnSafety = (ReturnSafety | 0x00000010);
	}

	if(agvInformStruct.stSafetyInfo.Bumper == SAFETY_SENSOR_ON)				//5
	{
		ReturnSafety = (ReturnSafety | 0x00000020);
	}

	if(agvInformStruct.stSafetyInfo.VoltageMetaHigh == SAFETY_SENSOR_ON)	//6
	{
		ReturnSafety = (ReturnSafety | 0x00000040);
	}

	if(agvInformStruct.stSafetyInfo.VoltageMetaLow == SAFETY_SENSOR_ON)		//7
	{
		ReturnSafety = (ReturnSafety | 0x00000080);
	}

	if(agvInformStruct.stSafetyInfo.MotorError0 == SAFETY_SENSOR_ON)		//8
	{
		ReturnSafety = (ReturnSafety | 0x00000100);
	}

	if(agvInformStruct.stSafetyInfo.MotorError1 == SAFETY_SENSOR_ON)		//9
	{
		ReturnSafety = (ReturnSafety | 0x00000200);
	}


	if(agvInformStruct.stSafetyInfo.RearPBS_A == SAFETY_SENSOR_ON)			//10
	{
		ReturnSafety = (ReturnSafety | 0x00000400);
	}

	if(agvInformStruct.stSafetyInfo.RearPBS_B == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00000800);
	}


	if(agvInformStruct.stSafetyInfo.RearPBS_C == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00001000);
	}


	if(agvInformStruct.stSafetyInfo.FrontPBS_A == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00002000);
	}


	if(agvInformStruct.stSafetyInfo.FrontPBS_B == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00004000);
    }

	if(agvInformStruct.stSafetyInfo.FrontPBS_C == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00008000);
    }


	if(agvInformStruct.stSafetyInfo.BatteryAbsence == SAFETY_SENSOR_ON)
	{
		ReturnSafety = (ReturnSafety | 0x00010000);
	}


//	if(agvInformStruct.stagv_LoadAbsence.FoupRight == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00020000);
//	}
//
//
//	if(agvInformStruct.stagv_LoadAbsence.FoupLeft == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00040000);
//	}
//
//	if(agvInformStruct.stagv_LoadAbsence.FoupFront == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00080000);
//	}
//
//	if(agvInformStruct.stagv_LoadAbsence.FoupRear == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00100000);
//	}
//
//	if(agvInformStruct.stagv_LoadAbsence.CassetteFront == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00200000);
//	}
//
//	if(agvInformStruct.stagv_LoadAbsence.CassetteRear == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00400000);
//	}
//
//	if(agvInformStruct.stagv_MagPos.DerailMent == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x00800000);
//	}
//
//	if(agvInformStruct.stagv_MagPos.DerailMent == SAFETY_SENSOR_ON)
//	{
//		ReturnSafety = (ReturnSafety | 0x01000000);
//	}

	return ReturnSafety;
}

unsigned char TCPIPManager::SendMsgParsingAndClientSend(unsigned char MsgType, void *msgST, TCustomWinSocket *ClientSocket)
{
	if(MsgType == SEND_NODE_LIST)
	{
		unsigned char SendMsgBuffer[5012];
		int NodeListCnt = (((stMsgNL*)msgST)->NodeList.size())*2;
		int TotalSendBuffCnt = NodeListCnt + 7;
		int SavePos = 6;

		SendMsgBuffer[0] = ((stMsgNL*)msgST)->msg_Start;
		SendMsgBuffer[1] = (TotalSendBuffCnt>>8)&0xFF;
		SendMsgBuffer[2] = (TotalSendBuffCnt&0xFF);
		SendMsgBuffer[3] = ((stMsgNL*)msgST)->msg_DeviceID;
		SendMsgBuffer[4] = ((stMsgNL*)msgST)->msg_Command;
		SendMsgBuffer[5] = ((stMsgNL*)msgST)->msg_agvDirection;

		for(int i=0; i < ((stMsgNL*)msgST)->NodeList.size(); i++)
		{
			SendMsgBuffer[SavePos] = ((((stMsgNL*)msgST)->NodeList[i]>>8)&0xFF);
			SavePos++;
			SendMsgBuffer[SavePos] = ((((stMsgNL*)msgST)->NodeList[i])&0xFF);
			SavePos++;
		}

		SendMsgBuffer[SavePos] = ((stMsgNL*)msgST)->msg_CR;
		SavePos++;
		SendMsgBuffer[SavePos] = ((stMsgNL*)msgST)->msg_END;

		int res = ClientSocket->SendBuf(&SendMsgBuffer,TotalSendBuffCnt);

		if(res == -1){
		}else{

        }

//		SendMsgToClient(SendMsgBuffer,TotalSendBuffCnt,ClientSock);
	}
	else if(MsgType == SEND_OTHER)
	{
		const int TotalSendBuffcnt =  26; //fix
		unsigned char SendMsgBuffer[TotalSendBuffcnt];
		unsigned long ChangeLongBuffer = 0x0;
		unsigned short ChangeShortBuffer  = 0x0;

		SendMsgBuffer[0] = ((stMsgInfo*)msgST)->msg_Start;
		SendMsgBuffer[1] = ((TotalSendBuffcnt>>8)&0xFF);
		SendMsgBuffer[2] = (TotalSendBuffcnt&0xFF);
		SendMsgBuffer[3] = ((stMsgInfo*)msgST)->msg_DeviceID;
		SendMsgBuffer[4] = ((stMsgInfo*)msgST)->msg_Command;
		SendMsgBuffer[5] = ((stMsgInfo*)msgST)->msg_Status;

		SendMsgBuffer[6] = ((stMsgInfo*)msgST)->msg_stLoadPort.msg_LoadPort_Type;
		SendMsgBuffer[7] = ((stMsgInfo*)msgST)->msg_stLoadPort.msg_LoadPort_ID;
		SendMsgBuffer[8] = ((stMsgInfo*)msgST)->msg_stLoadPort.msg_LoadPort_Status;
		SendMsgBuffer[9] = ((stMsgInfo*)msgST)->msg_stLoadPort.msg_LoadPort_Carrier_Quantity;

		SendMsgBuffer[10] = ((stMsgInfo*)msgST)->msg_stCarrier.msg_Carrier_LP_Type;
		SendMsgBuffer[11] = ((stMsgInfo*)msgST)->msg_stCarrier.msg_Carrier_LP_ID;
		SendMsgBuffer[12] = ((stMsgInfo*)msgST)->msg_stCarrier.msg_Carrier_Status;
		SendMsgBuffer[13] = ((stMsgInfo*)msgST)->msg_stCarrier.msg_Carrier_ID;

		SendMsgBuffer[14] = (((((stMsgInfo*)msgST)->msg_Safety)>>24)&0xFF);
		SendMsgBuffer[15] = (((((stMsgInfo*)msgST)->msg_Safety)>>16)&0xFF);
		SendMsgBuffer[16] = (((((stMsgInfo*)msgST)->msg_Safety)>>8)&0xFF);
		SendMsgBuffer[17] = ((((stMsgInfo*)msgST)->msg_Safety)&0xFF);

		SendMsgBuffer[18] = (((((stMsgInfo*)msgST)->msg_CurrentNode)>>8)&0xFF);
		SendMsgBuffer[19] = ((((stMsgInfo*)msgST)->msg_CurrentNode)&0xFF);

		SendMsgBuffer[20] = (((((stMsgInfo*)msgST)->msg_NextNode)>>8)&0xFF);
		SendMsgBuffer[21] = ((((stMsgInfo*)msgST)->msg_NextNode)&0xFF);

		SendMsgBuffer[22] = (((((stMsgInfo*)msgST)->msg_GoalNode)>>8)&0xFF);
		SendMsgBuffer[23] = ((((stMsgInfo*)msgST)->msg_GoalNode)&0xFF);

		SendMsgBuffer[24] = ((stMsgInfo*)msgST)->msg_CR;
		SendMsgBuffer[25] = ((stMsgInfo*)msgST)->msg_END;

 		int res = ClientSocket->SendBuf(SendMsgBuffer,TotalSendBuffcnt);

		if(res == -1){
		}else{

        }
//		SendMsgToClient(SendMsgBuffer,TotalSendBuffcnt,ServerSocket);
	}
	else
	{
        return 0x0;
	}
	return 0x01;
}

stMsgInfo TCPIPManager::MakeSendMessage(stagvInform &AgvInfo, unsigned char SendCommand)
{
	stMsgInfo MsgInfo;

	MsgInfo.msg_Start = 0x02;
	MsgInfo.msg_CR = 0x0D;
	MsgInfo.msg_END = 0x03;

	MsgInfo.msg_Length = 26;

	MsgInfo.msg_DeviceID = AgvInfo.agvDeviceID;
	MsgInfo.msg_Command = SendCommand;
	MsgInfo.msg_Status = AgvInfo.agvStatus;

	//LoadPort Information
	MsgInfo.msg_stLoadPort.msg_LoadPort_Type = AgvInfo.stLoadPortInfo.msg_LoadPort_Type;
	MsgInfo.msg_stLoadPort.msg_LoadPort_ID = AgvInfo.stLoadPortInfo.msg_LoadPort_ID;
	MsgInfo.msg_stLoadPort.msg_LoadPort_Status = AgvInfo.stLoadPortInfo.msg_LoadPort_Status;
	MsgInfo.msg_stLoadPort.msg_LoadPort_Carrier_Quantity = AgvInfo.stLoadPortInfo.msg_LoadPort_Carrier_Quantity;

	//Carrier Information
	MsgInfo.msg_stCarrier.msg_Carrier_LP_Type = AgvInfo.stCarrierInfo.msg_Carrier_LP_Type;
	MsgInfo.msg_stCarrier.msg_Carrier_LP_ID = AgvInfo.stCarrierInfo.msg_Carrier_LP_ID;
	MsgInfo.msg_stCarrier.msg_Carrier_Status = AgvInfo.stCarrierInfo.msg_Carrier_Status;
	MsgInfo.msg_stCarrier.msg_Carrier_ID = AgvInfo.stCarrierInfo.msg_Carrier_LP_ID;

	MsgInfo.msg_Safety = ChangeSafeyInfoToValue(AgvInfo);

	MsgInfo.msg_CurrentNode = AgvInfo.CurrentNode;
	MsgInfo.msg_NextNode = AgvInfo.NextNode;
	MsgInfo.msg_GoalNode = AgvInfo.TargetNode;

	MsgInfo.msg_agvDirection = 0x0;

	return MsgInfo;
}

stMsgNL TCPIPManager::MakeSendNodeListMessage(stagvInform &AgvInfo, unsigned char SendCommand)
{
	stMsgNL MsgInfo;

	MsgInfo.msg_Start = 0x02;
	MsgInfo.msg_CR = 0x0D;
	MsgInfo.msg_END = 0x03;

	MsgInfo.msg_DeviceID = AgvInfo.agvDeviceID;

	MsgInfo.msg_Command = SendCommand;

	MsgInfo.msg_agvDirection = AgvInfo.Direction;

	MsgInfo.NodeList = AgvInfo.NodeList;

	int NodeListCnt = (AgvInfo.NodeList.size())*2;
	int TotalSendBuffCnt = NodeListCnt + 7;

	MsgInfo.msg_Length = TotalSendBuffCnt;

	return MsgInfo;
}
