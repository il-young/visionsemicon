#include <deque.h>
/**
 * Define of AGV Status
 */
#define MSG_COMMAND_RESET 0x00

//---------------------------------------------------------------------------
/**
 * Define of AGV Control Command
 */
//CM -> COMMAND
//--------------------------------------------------------------------------
#define MSG_CM_INITIAL_LOCATION 0x01
#define MSG_CM_MOVE_TO_TARGET 0x02
#define MSG_CM_MOVE_TO_LOAD 0x03
#define MSG_CM_MOVE_TO_UNLOAD 0x04
#define MSG_CM_ONLY_LOAD 0x05
#define MSG_CM_ONLY_UNLOAD 0x06
#define MSG_CM_ONLY_BATTERY_CHARGE 0x07
#define MSG_CM_ONLY_BATTERY_EXCHANGE 0x08
#define MSG_CM_MOVE_TO_BATTERY_CHARGE 0x09
#define MSG_CM_MOVE_TO_BATTERY_EXCHANGE 0x0A
#define MSG_CM_CANCEL 0x0B
#define MSG_CM_ABORT 0x0C
#define MSG_CM_TRAFFIC_STOP 0x0D
#define MSG_CM_TRAFFIC_RESTART 0x0E
#define MSG_CM_MOVE_ERROR_RESTART 0x0F
#define MSG_CM_ROBOT_ERROR_RESTART 0x10
#define MSG_CM_NODE_LIST 0x11
#define MSG_CM_CLIENT_SEND_STATUS 0x12
#define MSG_CM_CLIENT_SEND_ACK 0x13
#define MSG_CM_BATTERY_CHANGE_COMP 0x14
#define MSG_CM_BATTERY_CHARGE_COMP 0x15


//---------------------------------------------------------------------------
/**
 * Define of AGV Status
 */
//ST -> STATUS
//COMP -> COMPLETE
//---------------------------------------------------------------------------
#define MSG_ST_NOT_ACCEPTABLE 0x01
#define MSG_ST_COMP_INITIAL_LOCATION 0x02
#define MSG_ST_COMP_MOVE_TO_TARGET 0x03
#define MSG_ST_COMP_MOVE_TO_LOAD 0x04
#define MSG_ST_COMP_MOVE_TO_UNLOAD 0x05
#define MSG_ST_COMP_ONLY_LOAD 0x06
#define MSG_ST_COMP_ONLY_UNLOAD 0x07
#define MSG_ST_COMP_ONLY_BATTERY_CHARGE 0x08
#define MSG_ST_COMP_ONLY_BATTERY_EXCHANGE 0x09
#define MSG_ST_COMP_MOVE_TO_BATTERY_CHARGE 0x0A
#define MSG_ST_COMP_MOVE_TO_BATTERY_EXCHANGE 0x0B
#define MSG_ST_COMP_CANCEL 0x0C
#define MSG_ST_COMP_ABORT 0x0D

#define MSG_ST_MOVE_MOVE 0x0E
#define MSG_ST_MOVE_ERROR_STOP 0x0F
#define MSG_ST_RFPIO_MACHINE_ERROR 0x10
#define MSG_ST_RFPIO_MACHINE_RUN 0x11
#define MSG_ST_ARRIVAL_TARGET_NODE 0x12
#define MSG_ST_WORK_STANDBY 0x13
#define MSG_ST_WORK_STANDBY_ERROR 0x14
#define MSG_ST_BATTERY_LOW 0x15
#define MSG_ST_BATTERY_FULL 0x16
#define MSG_ST_TRAFFIC_MOVING_STOP 0x17
#define MSG_ST_PACKAGE_MISMATCH 0x18
#define MSG_ST_NODE_LIST_ERROR 0x19
#define MSG_ST_SEMI_MOVE_MOVE 0x1A
#define MSG_ST_SEMI_MOVE_ERROR_STOP 0x1B

#define MSG_ST_BATTERY_CHARGE_START 0x1C
#define MSG_ST_BATTERY_CHARGE_CANCEL 0x1D
#define MSG_ST_BATTERY_CHARGE_COMP 0x1E

#define MSG_ST_BATTERY_CHANGE_START 0x1F
#define MSG_ST_BATTERY_CHANGE_CANCEL 0x20
#define MSG_ST_BATTERY_CHANGE_COMP 0x21

#define MSG_ST_MISMATCH_AGV_NUMBER 0x22

//--------------------------------------------------------------------------
//Receive or Send Msg
//--------------------------------------------------------------------------
#ifndef MessageInfoStruct
typedef struct MessageInfoStruct
{
	//Msg Recevice Sucess;
	bool CheckMsgStatusFlag;

	//Msg Start Byte
	unsigned char msg_Start;

	//Msg Total Length
	unsigned short msg_Length;

	//Device ID
	unsigned char msg_DeviceID;

	//Receive or Send Command From Server
	unsigned char msg_Command;

	//Send LGV Status To Server
	unsigned char msg_Status;

	//Receive Load Port To Server
	stLoadPort msg_stLoadPort;

	stCarrier msg_stCarrier;

	//Send LGV Safety Status To Server;
	unsigned long msg_Safety;

	stagvSafety msg_Safety_info;

	//Send LGV Current Node
	unsigned short msg_CurrentNode;

	//Send LGV Next Node
	unsigned short msg_NextNode;

	//Receive LGV Goal Node
	unsigned short msg_GoalNode;

	deque<unsigned short> NodeList;

	unsigned char msg_agvDirection;

	//Msg End Byte
	unsigned char msg_CR;
	unsigned char msg_END;

}stMsgInfo;
#define MessageInfoStruct
#endif

//-----------------------------------------------------------------------------
//Send Msg To AGV NodeList
//-----------------------------------------------------------------------------
#ifndef MessageNodeListStruct
typedef struct MessageNodeListStruct
{
	//Message Start 0x02
	unsigned char msg_Start;

	//Node List Message Length
	unsigned short msg_Length;

	//Device ID
	unsigned char msg_DeviceID;

	//Send Command Msg From LGV Client to Potenit
	unsigned char msg_Command;

	//AGV Direction
	unsigned char msg_agvDirection;

	deque<unsigned short> NodeList;

	//Message CR 0x0D
	unsigned char msg_CR;

	//Message END 0x03
	unsigned char msg_END;

}stMsgNL;
#define MessageNodeListStruct
#endif
//-----------------------------------------------------------------------------
#define SEND_NODE_LIST 0x01
#define SEND_OTHER 0x02
