//---------------------------------------------------------------------------

#ifndef NodeListH
#define NodeListH
//---------------------------------------------------------------------------
#include <vcl.h>
#include <stdio.h>
#include <deque.h>

#include "DefineInfo.h"
//---------------------------------------------------------------------------
//User Define
//---------------------------------------------------------------------------
#define NORMAL_NODE 0x01
#define CURVE_NODE 0x02
#define CROSSING_NODE 0x03

#define WORKING_NODE 0x01
#define NON_WORKING_NODE 0x02

#define SELECTED 0x01
#define NO_SELECTED 0x02

#define CROSS_LEFT 0x01
#define CROSS_RIGHT 0x02
#define NORMAL_LEFT 0x03
#define NORMAL_RIGHT 0x04
#define NORMAL_NONE 0x05
#define CROSS_STRAIGHT 0x06
#define ACTION_ERROR 0x07

using namespace std;

class NodeList
{

	private:
	typedef struct NODE_INFOStructure
	{
		unsigned short NUMBER;
		unsigned char INFORM;
		unsigned char TARGET;
		unsigned short PRE_NODE;
		unsigned short NEXT_NODE;
		unsigned short CR_PRE_NODE;
        unsigned short CR_NEXT_NODE;
	}stNODEIF;

	typedef struct CROSSING_NODESelectStructure
	{
		unsigned char NodeNumber;
		unsigned char CurveSelect;
		unsigned char StraightSelect;
	}stSelectCrNode;

	typedef struct FinalSave_GetList
	{
		deque<unsigned short> SearchedNodeList;
		bool Front;
	}stFSaveList;

	typedef struct ResultPathStructure
	{
		deque<unsigned short> NodeList;
        bool Front;
	}stResultPath;


	typedef struct NodeActionST
	{
		unsigned short CurrentNode;
		unsigned short NextNode;
        unsigned char ActionPoint;
	}stNodeAction;

	deque<stNodeAction> dqNodeActionList;


	deque<stSelectCrNode> FrontSearchCross;
	deque<stSelectCrNode> RearSearchCross;

	deque<unsigned short> dqLastCrossingPoint;


	private:
	char Loading_path_list(AnsiString FilePath);
	unsigned short GetNextNode(unsigned short Node);
	unsigned short GetPreviousNode(unsigned short Node);
	unsigned short GetCrossingNextNode(unsigned short Node);
	unsigned short GetCrossingPreviousNode(unsigned short Node);
	bool GetCrossingNodeStatus(unsigned short Node);
	bool GetIntegrity(deque<unsigned short> SaveList,unsigned short NextNode);
	bool GetCurveInCrossPoint(unsigned short CurPos,bool Front);
	unsigned short GetOptimalNode(deque<stFSaveList> TotalNodeList);
	void RemovePreSaveCrossingPoint(deque <unsigned short> SaveNodeList,bool Front);
	bool CheckLastCrossingPoint(unsigned short CrossNode);
	void SaveNoSavedCrossLastPoint(unsigned short LastCrossPoint,bool FrontFlag);
	unsigned char LoadNodeToNodeList(AnsiString FilePath);
	bool CheckExistTargetNode(unsigned short TargetNode);

	private:
	deque<stNODEIF> dq_NodeList;


	public:
	char InitialNode(void);
	stagvPos FindNodeList(unsigned short CurrNode, unsigned short TargetNode, deque<unsigned short> TrraficNodeList);
	unsigned char PlanNodeToNode(unsigned short CurrentNode, unsigned short NextNode);


};
#endif
