#define BAGV_IP "59.26.201.148"
#define BAGV_ID 0x01
#define SAGV_IP "59.26.201.3"
#define SAGV_ID 0x02

#include "DefineInfo.h"
#include "DefineMsg.h"

//System Function List
//1. System Information			//정보 Display
//2. AGV Monitor            	//모든 진행중인 AGV 정보 Display

//3. Transport Command State 	//모든 진행중인 운반명령 검색
//4. Carrier State           	//모든 진행중인 Carrier 상태 검색
//5. Port Information State  	//모든 진행중인 Port 상태 검색
//6. Remote Command    			//수동 운반명령
//7. Route Down Config          //Rail ON/OFF

//8. Exercise Script Config     //??작업 Test 설정
//9. Retry Management           //??작업 Retry 설정
//10. Altermative Config        //??
//11. User Config               //사용자 설정
//12. User Group Config         //사용자 그룹 설정
//13. Battery Config            //베터리 상태 설정

//14. Transport Command         //
//15. Port Management           //
//16. Mode Switch               //
//17. Vehicle Status Change     //

//18. Transport Log             //운반 기록 검색
//19. Alarm Log                 //이상 기록 검색
//20. Communication Log         //AGB-MCS 통신 기록 검색
//21. Operation Log             //작업자 작업 기록 검색
//22. Performance Chart         //차트 검색

//23. SECS Config               //SECS 통신 설정

//24. Alarm SMS Config          //알람시 SMS 설정

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

//AjinextekHeader↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
//---------------------------------------------------------------------------
// Analaog Pin Input Arrange
//---------------------------------------------------------------------------
#ifndef AnalogInPin
typedef enum AnalogInPin
{
	PIN_IN_AI_1 = 0,
	PIN_IN_AI_2 = 1,
	PIN_IN_AI_3 = 2,
	PIN_IN_AI_4 = 3,
	PIN_IN_AI_5 = 4,
	PIN_IN_AI_6 = 5,
	PIN_IN_AI_7 = 6,
    PIN_IN_AI_8 = 7

}enAiPin;
#define AnalogInPin
#endif

//---------------------------------------------------------------------------
//  Digital Pin Input Arrange
//---------------------------------------------------------------------------
#ifndef DigitalOutPin
typedef enum DigitalOutPin
{
	PIN_IN_KEY = 0,
	PIN_IN_EMO = 1,
	PIN_IN_START = 2,
	PIN_IN_RESET = 3,
	PIN_IN_BUMPER = 4,
	PIN_IN_VMETER_HIGH = 5,
	PIN_IN_VMETER_LOW = 6,
	PIN_IN_MOTOR_ERROR_0 = 7,
	PIN_IN_MOTOR_ERROR_1 = 8,
	PIN_IN_RFPIO_A_RECEIVE_COMMAND_1 = 9,
	PIN_IN_RFPIO_A_RECEIVE_COMMAND_2 = 10,
	PIN_IN_RFPIO_A_RECEIVE_COMMAND_3 = 11,
	PIN_IN_RFPIO_A_RECEIVE_COMMAND_4 = 12,
	PIN_IN_RFPIO_A_GO = 13,
	PIN_IN_RFPIO_B_RECEIVE_COMMAND_1 = 14,
	PIN_IN_RFPIO_B_RECEIVE_COMMAND_2 = 15,
	PIN_IN_RFPIO_B_RECEIVE_COMMAND_3 = 16,
	PIN_IN_RFPIO_B_RECEIVE_COMMAND_4 = 17,
	PIN_IN_RFPIO_B_GO = 18,
	PIN_IN_REAR_PBS_1 = 19,
	PIN_IN_REAR_PBS_2 = 20,
	PIN_IN_REAR_PBS_3 = 21,
	PIN_IN_FRONT_PBS_1 = 22,
	PIN_IN_FRONT_PBS_2 = 23,
	PIN_IN_FRONT_PBS_3 = 24,
	PIN_IN_FOUP_ABSENCE_RIGHT = 25,
	PIN_IN_FOUP_ABSENCE_LEFT = 26,
	PIN_IN_CAMERA_RECEIVE_1 = 29,
	PIN_IN_CAMERA_RECEIVE_2 = 30,
	PIN_IN_CAMERA_RECEIVE_3 = 31,
	PIN_IN_RMARK_S_POLE = 32,
	PIN_IN_RMARK_N_POLE = 33,
	PIN_IN_RONT_MAGNETIC_POS_1 = 34,
	PIN_IN_FRONT_MAGNETIC_POS_2 = 35,
	PIN_IN_FRONT_MAGNETIC_POS_3 = 36,
	PIN_IN_FRONT_MAGNETIC_POS_4 = 37,
	PIN_IN_FRONT_MAGNETIC_POS_5 = 38,
	PIN_IN_FRONT_MAGNETIC_POS_6 = 39,
	PIN_IN_FRONT_MAGNETIC_POS_7 = 40,
	PIN_IN_FRONT_MAGNETIC_POS_8 = 41,
	PIN_IN_REAR_MAGNETIC_POS_1 = 42,
	PIN_IN_REAR_MAGNETIC_POS_2 = 43,
	PIN_IN_REAR_MAGNETIC_POS_3 = 44,
	PIN_IN_REAR_MAGNETIC_POS_4 = 45,
	PIN_IN_REAR_MAGNEITC_POS_5 = 46,
	PIN_IN_REAR_MAGNETIC_POS_6 = 47,
	PIN_IN_REAR_MAGNETIC_POS_7 = 48,
	PIN_IN_REAR_MAGNETIC_POS_8 = 49,
	PIN_IN_BATTERY_ABSENCE = 50,
	PIN_IN_CASSETTE_ABBSENCE_FRONT = 51,
	PIN_IN_CASSETTE_ABSSENCE_REAR = 52,
	PIN_IN_FOUP_ABSENCE_FRONT = 53,
	PIN_IN_FOUP_ABSENCE_REAR = 54,
	PIN_IN_LMARK_N_POLE = 55,
	PIN_IN_LMARK_S_POLE = 56,
	PIN_IN_MAGNETIC_DERAILMENT = 57

}enDoPin;
#define DigitalOutPin
#endif

//---------------------------------------------------------------------------
//  Digital Pin Output Arrange
//---------------------------------------------------------------------------
#ifndef DigitalInPin
typedef enum DigitalInPin
{
	PIN_OUT_LAMP_RED = 0,
	PIN_OUT_LAMP_GREEN = 1,
	PIN_OUT_LAMP_YELLOW = 2,
	PIN_OUT_START_LAMP = 3,
	PIN_OUT_RESET_LAMP = 4,
	PIN_OUT_BUZZER_A = 5,
	PIN_OUT_BUZZER_B = 6,
	PIN_OUT_BUZZER_C = 7,
	PIN_OUT_BUZZER_D = 8,
	PIN_OUT_BUZZER_E = 9,
	PIN_OUT_MOTOR_SERVER_ON = 10,
	PIN_OUT_MOTOR_START = 11,
	PIN_OUT_MOTOR_COMMAND = 12,
	PIN_OUT_CAMERA_IN_A = 13,
	PIN_OUT_MOTOR_BREAK = 14,
	PIN_OUT_MOTOR_RESET = 15,
	PIN_OUT_CAMERA_IN_B = 16,
  	PIN_OUT_RFPIO_A_SEND_COMMAND_1 = 17,
	PIN_OUT_RFPIO_A_SEND_COMMAND_2 = 18,
	PIN_OUT_RFPIO_A_SEND_COMMAND_3 = 19,
	PIN_OUT_RFPIO_A_SEND_COMMAND_4 = 20,
	PIN_OUT_RFPIO_A_SELECT_POWER = 21,
	PIN_OUT_RFPIO_B_SEND_COMMAND_1 = 22,
	PIN_OUT_RFPIO_B_SEND_COMMAND_2 = 23,
	PIN_OUT_RFPIO_B_SEND_COMMAND_3 = 24,
	PIN_OUT_RFPIO_B_SEND_COMMAND_4 = 25,
	PIN_OUT_RFPIO_B_SELECT_POWER = 26,
	PIN_OUT_MOTOR_SPEED_COMMAND_LOW = 27,
	PIN_OUT_MOTOR_SPEED_COMMAND_MIDDLE = 28,
	PIN_OUT_MOTOR_SPEED_COMMAND_HIGH = 29,
	PIN_OUT_MAGNETIC_BRANCH_BL = 30,
    PIN_OUT_MAGNETIC_BRANCH_BR = 31

}enDiPin;
#define DigitalInPin
#endif

//----------------------------------------------------------------------------
//Select Buzzer Type
//----------------------------------------------------------------------------
#define SELECT_BUZZER_PIN_A 1
#define SELECT_BUZZER_PIN_B 2
#define SELECT_BUZZER_PIN_C 3
#define SELECT_BUZZER_PIN_D 4
#define SELECT_BUZZER_PIN_E 5
#define SELECT_BUZZER_PIN_ALL_OFF 6
//----------------------------------------------------------------------------
//Select Tower Lamp Type
//----------------------------------------------------------------------------
#define SELECT_TOWER_LAMP_PIN_RED 1
#define SELECT_TOWER_LAMP_PIN_GREEN 2
#define SELECT_TOWER_LAMP_PIN_YELLOW 3
#define SELECT_TOWER_LAMP_PIN_ALL_OFF 4
//----------------------------------------------------------------------------
//Select Magnetic Position Sensor
//----------------------------------------------------------------------------
#define SELECT_MAGNETIC_SENSOR_FRONT 0x01
#define SELECT_MAGNETIC_SENSOR_REAR 0x02

//---------------------------------------------------------------------------
#define DERAILMENT_MAGNETIC_YES 0x01
#define DERAILMENT_MAGNETIC_NO 0x02
