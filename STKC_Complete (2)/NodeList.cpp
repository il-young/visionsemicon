//---------------------------------------------------------------------------
/**
 * 무인 운반차 Client 프로그램
 * 시작 일자 : 2016. 02. 12.
 * 최종 일자 : 2016. 02. 17.
 * 버전 : 0.001V
 * 만든이 : Lee Junha
 * Mail : jhlee@visionsemicon.co.kr
 */
//---------------------------------------------------------------------------
/**
 * 무인 운반차 Get Node List API
 * 버전 : 0.002V
 * 시작 일자 : 2016. 02. 29.
 * 최종 일자 : 2016. 02. 29.
 */
//---------------------------------------------------------------------------
#pragma hdrstop

#include "NodeList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//Initial Node
//--------------------------------------------------------------------------
char NodeList::InitialNode(void)
{
	dq_NodeList.clear();
	dqNodeActionList.clear();
	Loading_path_list("../../nodelist\\NodeList.txt");
	LoadNodeToNodeList("../../nodelist\\PathToPathPlan.txt");
	return 0x0;
}

//---------------------------------------------------------------------------
//Get Node Action List from List file
//---------------------------------------------------------------------------
/**
 * Load Action List Form Text File
 * In  : AnsiString (File Path)
 * Out : unsigned char (Reserved)
 */
unsigned char NodeList::LoadNodeToNodeList(AnsiString FilePath)
{

	int cnt = 0;
	char buff[256];
	AnsiString buffer = "";
	stNodeAction setSTNodeAction;
	FILE *fp;

	fp = fopen(FilePath.c_str(), "r");

	while(fscanf(fp,"%s", buff) != EOF)
	{
		buffer = buff;

		if(buffer == "Start")
		{
			continue;
		}
		else if(buffer == "End")
		{
			break;
		}
		else if(buffer == "C")
		{
			setSTNodeAction.CurrentNode = 0x0;
			setSTNodeAction.NextNode = 0x0;
			setSTNodeAction.ActionPoint = 0x0;
			cnt =1;
			continue;
		}
		else if(buffer == "N")
		{
			cnt = 2;
			continue;
		}
		else if(buffer == "T")
		{
			cnt = 3;
			continue;
		}
		else if(buffer == "E")
		{
			cnt = 0;
			dqNodeActionList.push_back(setSTNodeAction);
			continue;
		}

		if(cnt == 1)
		{
			setSTNodeAction.CurrentNode = StrToInt(buffer);
		}
		else if(cnt == 2)
		{
			setSTNodeAction.NextNode = StrToInt(buffer);
		}
		else if(cnt == 3)
		{
			setSTNodeAction.NextNode = StrToInt(buffer);
		}
	}//While End
	fclose(fp);

	return 0x0;
}


//---------------------------------------------------------------------------
//Get Node List from List file
//---------------------------------------------------------------------------
/**
 * Load Node List from Text
 * In : AnsiString (File Path)
 * Out : char (Reserved)
 */
char NodeList::Loading_path_list(AnsiString FilePath)
{
	int cnt =0;
	char buff[256];
	AnsiString buffer;
	stNODEIF getstNodeInf;
	FILE *fp;

	fp = fopen(FilePath.c_str(), "r");

	while(fscanf(fp,"%s", buff) != EOF)
	{
		buffer = buff;

		if(buffer == "Start") //Node List Start
		{
			continue;
		}
		else if(buffer == "End")//Node List End
		{
			break;
		}
		else if(buffer == "C") //Node
		{
			getstNodeInf.NUMBER = 0x0;
			getstNodeInf.INFORM = 0x0;
			getstNodeInf.TARGET = 0x0;
			getstNodeInf.PRE_NODE = 0x0;
			getstNodeInf.NEXT_NODE = 0x0;
			getstNodeInf.CR_PRE_NODE = 0x0;
			getstNodeInf.CR_NEXT_NODE = 0x0;

			cnt = 1;
			continue;
		}
		else if(buffer == "I") //Information (Normal, Curve, Crossing point)
		{
			cnt = 2;
			continue;
		}
		else if(buffer == "T") //Target Node
		{
			cnt = 3;
			continue;
		}
		else if(buffer == "P") // Normal Pre Node
		{
			cnt = 4;
			continue;
		}
		else if(buffer == "N") // Normal Next node
		{
			cnt = 5;
			continue;
		}
		else if(buffer == "SP") // Crossing Point Pre Node
		{
			cnt = 6;
			continue;
		}
		else if(buffer == "SN") // Crossing Point Next Node
		{
			cnt =7;
			continue;
		}
		else if(buffer == "E") // Node End
		{
			cnt =0;
			dq_NodeList.push_back(getstNodeInf);
			continue;
		}

		if(cnt == 1) // Set Node
		{
			getstNodeInf.NUMBER = StrToInt(buffer);
		}
		else if(cnt == 2) // Set Node Inf.
		{
			getstNodeInf.INFORM = StrToInt(buffer);
		}
		else if(cnt == 3) // Working node
		{
			getstNodeInf.TARGET = StrToInt(buffer);
		}
		else if(cnt == 4) // Normal Previous Node
		{
			getstNodeInf.PRE_NODE = StrToInt(buffer);
		}
		else if(cnt == 5) //Normaal next node
		{
			getstNodeInf.NEXT_NODE = StrToInt(buffer);
		}
		else if(cnt == 6) //Crossing Previous Node
		{
         	getstNodeInf.CR_PRE_NODE = StrToInt(buffer);
		}
		else if(cnt == 7) //Crossing Next Node
		{
			getstNodeInf.CR_NEXT_NODE = StrToInt(buffer);
		}
	} //While End
	fclose(fp);

	return 0x0;
}

//----------------------------------------------------------------------------
/**
 * Check Exist Target Node In Node List
 * In : unsigned short (TargetNode Number)
 * out : bool (True :  Exist,  False : no)
 */

bool NodeList::CheckExistTargetNode(unsigned short TargetNode)
{
	bool Exist = false;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
	   if(TargetNode == dq_NodeList[i].NUMBER)
	   {
			Exist = true;
			break;
	   }
	}

	return Exist;
}




//----------------------------------------------------------------------------
/**
 * get Current Node List
 * Max 2 Depth Crossing Point Search
 * In : unsigned short (current Node), unsigned short(Target Node)
 * Out : Deque<short> (Find Target Node List)
 */
 stagvPos NodeList::FindNodeList(unsigned short CurrNode, unsigned short TargetNode, deque<unsigned short> TrraficNodeList)
 {
	deque<unsigned short> dqGetNodeList;
	deque<stFSaveList> SaveGetList;
	stFSaveList SaveSTWithDirect;
	bool FrontSearchOn = false;
	bool RearSearchOn = false;
	unsigned short CurrPos = 0x0;
	unsigned short NextPos = 0x0;
	int CurveCount = 0;
	int SearchNodeListCnt = 0;
	unsigned short FindOptimalNodeList;
	stagvPos setAGVPos;
	unsigned short LastCrossingPoint = 0x0;


	if((CurrNode == TargetNode) || (!CheckExistTargetNode(TargetNode)))
	{
		setAGVPos.CurrentNode = CurrNode;
		setAGVPos.NextNode = TargetNode;
		setAGVPos.TargetNode = TargetNode;
		setAGVPos.NodeList.push_back(TargetNode);
		setAGVPos.FrontFlag = true;
		return setAGVPos;
	}

	SaveGetList.clear();
	//Front Node List Search

	dqGetNodeList.clear();
	FrontSearchOn = true;
	CurrPos = CurrNode;
	FrontSearchCross.clear();
	dqGetNodeList.push_back(CurrPos);
	CurveCount = 0;

	while(FrontSearchOn)
	{
		if(GetCrossingNodeStatus(CurrPos))
		{
			//PreSave Remove
			RemovePreSaveCrossingPoint(dqGetNodeList,true);
			if(GetCurveInCrossPoint(CurrPos,true)) //Curve in CrossPoint
			{
				NextPos = GetCrossingNextNode(CurrPos);
//				RemovePreSaveCrossingPoint(dqGetNodeList);
				LastCrossingPoint = CurrPos;
				CurveCount++;
			}
			else  // Straight in CrossPoint
			{
				NextPos = GetNextNode(CurrPos);
			}
		}
		else
		{
			NextPos = GetNextNode(CurrPos);
		}

		if(GetIntegrity(dqGetNodeList,NextPos))
		{
			dqGetNodeList.clear();
            NextPos = 0x0;
			CurrPos = CurrNode;
			dqGetNodeList.push_back(CurrNode);

			if(CurveCount == 0) //End Point
			{
				FrontSearchOn = false;
				CurrPos = 0x0;
				NextPos = 0x0;
				dqGetNodeList.clear();
			}

			if(LastCrossingPoint!=0)
			{
				dqLastCrossingPoint.push_back(LastCrossingPoint);
				SaveNoSavedCrossLastPoint(LastCrossingPoint,true);
			}

            CurveCount=0;
		}
		else if(NextPos == TargetNode)
		{
			SearchNodeListCnt++;
			dqGetNodeList.push_back(NextPos);
			SaveSTWithDirect.SearchedNodeList = dqGetNodeList;
			SaveSTWithDirect.Front = true;

			bool isCheckTrraficNode = false;
			for(int i = 0; i < dqGetNodeList.size(); i++){
				for(int j = 0; j < TrraficNodeList.size(); j++)
				{
					if(dqGetNodeList[i] == TrraficNodeList[j])
					{
						isCheckTrraficNode = true;
                    }
				}
				if(isCheckTrraficNode == true) break;
			}
			if(isCheckTrraficNode == false) SaveGetList.push_back(SaveSTWithDirect);

			dqGetNodeList.clear();
			NextPos = 0x0;
			CurrPos = CurrNode;
			dqGetNodeList.push_back(CurrPos);


			if(CurveCount == 0) //End Point
			{
				FrontSearchOn = false;
				CurrPos = 0x0;
				NextPos = 0x0;
				dqGetNodeList.clear();
			}

			if(LastCrossingPoint!=0)
			{
				dqLastCrossingPoint.push_back(LastCrossingPoint);
				SaveNoSavedCrossLastPoint(LastCrossingPoint,true);
			}

			CurveCount=0;
		}
		else
		{
			dqGetNodeList.push_back(NextPos);
			CurrPos = NextPos;
		}
	}


	//Test Prevent

	//Rear Pos
	LastCrossingPoint=0;
	RearSearchCross.clear();
	dqGetNodeList.clear();
	CurrPos = CurrNode;
	dqGetNodeList.push_back(CurrPos);
	CurveCount = 0;
	RearSearchOn = true;
	dqLastCrossingPoint.clear();

	while(RearSearchOn)
	{
		if(GetCrossingNodeStatus(CurrPos))
		{
			//PreSave Remove
			RemovePreSaveCrossingPoint(dqGetNodeList,false);
			if(GetCurveInCrossPoint(CurrPos,false)) //Curve in CrossPoint
			{
				NextPos = GetCrossingPreviousNode(CurrPos);
				LastCrossingPoint = CurrPos;
				CurveCount++;
			}
			else  // Straight in CrossPoint
			{
				NextPos = GetPreviousNode(CurrPos);
			}
		}
		else
		{
			NextPos = GetPreviousNode(CurrPos);
		}

		if(GetIntegrity(dqGetNodeList,NextPos))
		{
			dqGetNodeList.clear();
			NextPos = 0x0;
			CurrPos = CurrNode;
			dqGetNodeList.push_back(CurrPos);
			if(CurveCount == 0) //End Point
			{
				RearSearchOn = false;
				CurrPos = 0x0;
				NextPos = 0x0;
				dqGetNodeList.clear();
			}

			if(LastCrossingPoint!=0)
			{
				dqLastCrossingPoint.push_back(LastCrossingPoint);
				SaveNoSavedCrossLastPoint(LastCrossingPoint,false);
			}

			CurveCount=0;

		}
		else if(NextPos == TargetNode)
		{
			SearchNodeListCnt++;
			dqGetNodeList.push_back(NextPos);
			SaveSTWithDirect.SearchedNodeList = dqGetNodeList;
            SaveSTWithDirect.Front = false;

			bool isCheckTrraficNode = false;
			for(int i = 0; i < dqGetNodeList.size(); i++){
				for(int j = 0; j < TrraficNodeList.size(); j++)
				{
					if(dqGetNodeList[i] == TrraficNodeList[j])
					{
						isCheckTrraficNode = true;
                    }
				}
				if(isCheckTrraficNode == true) break;
			}
			if(isCheckTrraficNode == false) SaveGetList.push_back(SaveSTWithDirect);

			dqGetNodeList.clear();
			NextPos = 0x0;
			CurrPos = CurrNode;
			dqGetNodeList.push_back(CurrPos);

            if(CurveCount == 0) //End Point
			{
				RearSearchOn = false;
				CurrPos = 0x0;
				NextPos = 0x0;
				dqGetNodeList.clear();
			}

			if(LastCrossingPoint!=0)
			{
				dqLastCrossingPoint.push_back(LastCrossingPoint);
				SaveNoSavedCrossLastPoint(LastCrossingPoint,false);
			}
			CurveCount=0;
		}
		else
		{
			dqGetNodeList.push_back(NextPos);
			CurrPos = NextPos;
		}
	}

//	ShowMessage("Find List Count : " + IntToStr(SearchNodeListCnt));

	FindOptimalNodeList = GetOptimalNode(SaveGetList);


	setAGVPos.CurrentNode = CurrNode;
	setAGVPos.TargetNode = TargetNode;
	setAGVPos.NodeList = SaveGetList[FindOptimalNodeList].SearchedNodeList;
	setAGVPos.FrontFlag = SaveGetList[FindOptimalNodeList].Front;
	if(!setAGVPos.NodeList.empty())
	{
		setAGVPos.NextNode = setAGVPos.NodeList[1];
	}

	String Test="";
	String ShowMsg = "";

	for(unsigned int i=0; i<setAGVPos.NodeList.size(); i++)
	{
		Test = IntToStr(setAGVPos.NodeList[i]);

		if(i==0)
		{
			ShowMsg+= Test;
		}
		else
		{
			ShowMsg+= " " + Test;
		}
	}

//	ShowMessage(ShowMsg) ;

	return setAGVPos;
 }


//----------------------------------------------------------------------------
/**
 * Remove Pre Curve Move In Crossing Point
 * In : deque<unsigned short> setNodeList
 * Out : void
 */
void NodeList::RemovePreSaveCrossingPoint(deque <unsigned short> SaveNodeList,bool Front)
{
	if((!FrontSearchCross.empty()) && (Front))
	{
		for(unsigned int i=0; i<SaveNodeList.size(); i++)
		{
			for(unsigned int j=0; j<FrontSearchCross.size(); j++)
			{
				if((SaveNodeList[i] == FrontSearchCross[j].NodeNumber) && (!CheckLastCrossingPoint(SaveNodeList[i])))
				{
					FrontSearchCross.erase(FrontSearchCross.begin()+j);
					break;
				}
			}
		}
	}
	else if((!RearSearchCross.empty()) && (!Front))
	{
	   for(unsigned int i=0; i<SaveNodeList.size(); i++)
	   {
			for(unsigned int j=0; j<RearSearchCross.size(); j++)
			{
				if((SaveNodeList[i] == RearSearchCross[j].NodeNumber) && (!CheckLastCrossingPoint(SaveNodeList[i])))
				{
					RearSearchCross.erase(RearSearchCross.begin()+j);
					break;
				}
            }
       }
	}
}
//----------------------------------------------------------------------------
/**
 * Check Last Crossing Point
 * In : unsigned short (Crossing Point)
 * out : bool (True : Last Crossing Point, False : No Last Crossing Point)
 */
 bool NodeList::CheckLastCrossingPoint(unsigned short CrossNode)
 {
	 if(dqLastCrossingPoint.empty())
	 {
		 return false;
	 }

	 for(unsigned int i=0; i<dqLastCrossingPoint.size(); i++)
	 {
		 if(dqLastCrossingPoint[i] ==  CrossNode)
		 {
			 return true;
		 }
	 }

	 return false;
 }


 //---------------------------------------------------------------------------
 /**
  * Get optimal Path
  * In : deque<stFSaveList> SaveGetList
  * Out : stResultPath
  */

unsigned short NodeList::GetOptimalNode(deque<stFSaveList> TlNodeList)
{
	deque<unsigned short> ListCount;
	unsigned short Count=0;
	unsigned short Temp=0;
	unsigned short FindPos=0;

	for(unsigned int i=0;  i<TlNodeList.size(); i++)
	{
		Count = TlNodeList[i].SearchedNodeList.size();
		ListCount.push_back(Count);
	}

	FindPos = 0;
	Temp = ListCount[0];
	for(unsigned int i=1; i<ListCount.size(); i++)
	{
		 if(Temp>ListCount[i])
		 {
			FindPos = i;
			Temp = ListCount[i];
		 }
	}

	return FindPos;
}

//----------------------------------------------------------------------------
/**
 * Get Curve In Cross Point Node
 * In : unsigned short (Current Node)
 * Out : bool (True : Curve, False : Straight)
 */
 bool NodeList::GetCurveInCrossPoint(unsigned short CurPos,bool Front)
 {
	bool Find = false;
	stSelectCrNode SetCrossPoint;

	if(Front)
	{
		if(FrontSearchCross.empty())
		{
			SetCrossPoint.NodeNumber = CurPos;
			SetCrossPoint.CurveSelect = SELECTED;
			SetCrossPoint.StraightSelect = 0x0;
			FrontSearchCross.push_back(SetCrossPoint);

			if(GetCrossingNextNode(CurPos) ==0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			for(unsigned int i=0; i<FrontSearchCross.size(); i++)
			{
				if(FrontSearchCross[i].NodeNumber == CurPos)
				{
					Find = true;
					break;
				}
			}

			if(Find)
			{
				return false;
			}
			else
			{
				SetCrossPoint.NodeNumber = CurPos;
				SetCrossPoint.CurveSelect = SELECTED;
				SetCrossPoint.StraightSelect = 0x0;
				FrontSearchCross.push_back(SetCrossPoint);

				if(GetCrossingNextNode(CurPos) ==0)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
	}
	else
	{
		if(RearSearchCross.empty())
		{
			SetCrossPoint.NodeNumber = CurPos;
			SetCrossPoint.CurveSelect = SELECTED;
			SetCrossPoint.StraightSelect = 0x0;
			RearSearchCross.push_back(SetCrossPoint);

			if(GetCrossingPreviousNode(CurPos) == 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			 for(unsigned int i=0; i<RearSearchCross.size(); i++)
			 {
				 if(RearSearchCross[i].NodeNumber == CurPos)
				 {
					 Find = true;
					 break;
				 }
			 }

			 if(Find)
			 {
				return false; // No curve
			 }
			 else
			 {
				SetCrossPoint.NodeNumber = CurPos;
				SetCrossPoint.CurveSelect = SELECTED;
				SetCrossPoint.StraightSelect = 0x0;
				RearSearchCross.push_back(SetCrossPoint);

				if(GetCrossingPreviousNode(CurPos) == 0)
				{
					return false;
				}
				else
				{
					return true;
				}
			 }
		}
    }
 }

//---------------------------------------------------------------------------
/**
 * If Last Crossing Point no Saved then Add Last Point Cross
 * In : Last Crossing Point Node Number
 * out : void
 */
 void NodeList::SaveNoSavedCrossLastPoint(unsigned short LastCrossPoint,bool FrontFlag)
 {
	bool Exist=false;
	stSelectCrNode SetCrossPoint;


	if((LastCrossPoint !=0)  && (!RearSearchCross.empty()) && (!FrontFlag))
	{
		for(unsigned int i=0; i<RearSearchCross.size(); i++)
		{
			if(RearSearchCross[i].NodeNumber == LastCrossPoint)
			{
				Exist = true;
				break;
			}
		}

		if(!Exist)
		{
			SetCrossPoint.NodeNumber = LastCrossPoint;
			SetCrossPoint.CurveSelect = SELECTED;
			SetCrossPoint.StraightSelect = 0x0;
			RearSearchCross.push_back(SetCrossPoint);
        }

	}
	else if((LastCrossPoint !=0)  && (!FrontSearchCross.empty()) && (FrontFlag))
	{

		for(unsigned int i=0; i<FrontSearchCross.size(); i++)
		{
			if(FrontSearchCross[i].NodeNumber == LastCrossPoint)
			{
				Exist = true;
				break;
			}
		}

		if(!Exist)
		{
			SetCrossPoint.NodeNumber = LastCrossPoint;
			SetCrossPoint.CurveSelect = SELECTED;
			SetCrossPoint.StraightSelect = 0x0;
			FrontSearchCross.push_back(SetCrossPoint);
		}
	}
 }




 //---------------------------------------------------------------------------
 /**
  * Check integrity
  * In : deque<unsigned short> SetList
  * out : bool (true : Searched Node, false)
  */
bool NodeList::GetIntegrity(deque<unsigned short> SaveList,unsigned short NextNode)
{
	bool CheckIntergrity = false;

	for(int unsigned i=0; i<SaveList.size(); i++)
	{
		if(SaveList[i] ==  NextNode)
		{
			CheckIntergrity = true;
			break;
        }
	}
	return CheckIntergrity;
}
//----------------------------------------------------------------------------
/**
 * Get Crossing Point Status
 * In : unsigned short (Current Node)
 * Out : bool (True : Crossing Point, False : no)
 */
 bool NodeList::GetCrossingNodeStatus(unsigned short Node)
 {
	 bool CrossingStatus = false;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
		if((dq_NodeList[i].NUMBER == Node) && (dq_NodeList[i].INFORM == CROSSING_NODE))
		{
		   CrossingStatus = true;
		   break;
		}
	}
	return CrossingStatus;
 }
//----------------------------------------------------------------------------
/**
 * Get Next Node Number
 * In : unsigned short (Current node)
 * Out : unsigned short (Next node)
 */
 unsigned short NodeList::GetNextNode(unsigned short Node)
 {
	unsigned short NextNode = 0x0;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
		if(dq_NodeList[i].NUMBER == Node)
		{
			NextNode = dq_NodeList[i].NEXT_NODE;
			break;
		}
	}

	return NextNode;
 }
//----------------------------------------------------------------------------
 /**
  * Get Previous Node Number
  * In : unsigned short (Current Node)
  * Out : unsigned short (Previous Node)
  */
 unsigned short NodeList::GetPreviousNode(unsigned short Node)
 {
	unsigned short PreviousNode = 0x0;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
		if(dq_NodeList[i].NUMBER == Node)
		{
			PreviousNode = dq_NodeList[i].PRE_NODE;
			break;
		}
	}
	return PreviousNode;
 }
//----------------------------------------------------------------------------
/**
 * Get Crossing Point NExt Node Number
 * In : unsigned short (Current Node)
 * Out : unsigned short(Crossing Point Next Node)
 */
 unsigned short NodeList::GetCrossingNextNode(unsigned short Node)
 {
	unsigned short CrossingNextNode = 0x0;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
		if(dq_NodeList[i].NUMBER == Node)
		{
			CrossingNextNode = dq_NodeList[i].CR_NEXT_NODE;
			break;
		}
	}

	return CrossingNextNode;
 }
//-----------------------------------------------------------------------------
/**
 * Get Crossing Point Previous Node Number
 * In : usigned short (Current Node)
 * Out : unsigned short (Crossing Point Previous Node)
 */
 unsigned short NodeList::GetCrossingPreviousNode(unsigned short Node)
 {
	unsigned short CrossingPreviousNode = 0x0;

	for(unsigned int i=0; i<dq_NodeList.size(); i++)
	{
		if(dq_NodeList[i].NUMBER == Node)
		{
			CrossingPreviousNode = dq_NodeList[i].CR_PRE_NODE;
			break;
		}
	}

	return CrossingPreviousNode;
 }
 //----------------------------------------------------------------------------
 /**
  *  Plan Node To Node
  *
  */

unsigned char NodeList::PlanNodeToNode(unsigned short CurrentNode, unsigned short NextNode)
{
	bool bFind = false;
	unsigned short GetActionPoint = NORMAL_NONE;

	if((CurrentNode != 0x0) && (NextNode !=0x0))
	{

		for(unsigned int i=0; i<dqNodeActionList.size(); i++)
		{
			if(dqNodeActionList[i].CurrentNode == CurrentNode && dqNodeActionList[i].NextNode == NextNode)
			{
				bFind = true;
				GetActionPoint =  dqNodeActionList[i].ActionPoint;
				break;
			}
		}

		if(bFind)
		{
			if(GetActionPoint == CROSS_LEFT)
			{
				return CROSS_LEFT;
			}
			else if(GetActionPoint == CROSS_RIGHT)
			{
				return CROSS_RIGHT;
			}
			else if(GetActionPoint == NORMAL_LEFT)
			{
				return NORMAL_LEFT;
			}
			else if(GetActionPoint == NORMAL_RIGHT)
			{
				return NORMAL_RIGHT;
            }
		}
		else
		{
			return NORMAL_NONE;
		}
	}
	else
	{
		return ACTION_ERROR;
    }
}






