#ifndef  simpleLinkedList
#define simpleLinkedList
#include "./node.h"
#endif

/*******************************************C_LinkListNode(void)*/
C_LinkListNode::C_LinkListNode(void)
{
  P_NextPtr=NULL;
  P_PrevPtr=NULL;
  V_LinkNum=-1;
  V_LinkStart=-1;
  V_LinkEnd=-1;
  V_LinkWeight=-1;
}

/*******************************************C_LinkListNode(C_LinkListNode *p_nextPtr)*/
C_LinkListNode::C_LinkListNode(C_LinkListNode *p_nextPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=NULL;
  V_LinkNum=-1;
  V_LinkStart=-1;
  V_LinkEnd=-1;
  V_LinkWeight=-1;
}
/*******************************************C_LinkListNode(C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr)*/
C_LinkListNode(C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=p_prevPtr;
  V_LinkNum=-1;
  V_LinkStart=-1;
  V_LinkEnd=-1;
  V_LinkWeight=-1;
}
/*******************************************C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr)*/
C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=NULL;
  V_LinkNum=v_linkNum;
  V_LinkStart=v_linkStart;
  V_LinkEnd=v_linkEnd;
  V_LinkWeight=v_linkWeight;
}
/*******************************************C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr)*/
C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=p_prevPtr;
  V_LinkNum=v_linkNum;
  V_LinkStart=v_linkStart;
  V_LinkEnd=v_linkEnd;
  V_LinkWeight=v_linkWeight;
}

/*******************************************int C_LinkListNode::get_LinkNum(void)*/
int C_LinkListNode::get_LinkNum(void)
{
  return V_LinkNum;
}
/*******************************************int C_LinkListNode::get_LinkStart(void)*/
int C_LinkListNode::get_LinkStart(void)
{
  return V_LinkStart;
}
/*******************************************int C_LinkListNode::get_LinkEnd(void)*/
int C_LinkListNode::get_LinkEnd(void)
{
  return V_LinkEnd;
}
/*******************************************int C_LinkListNode::get_LinkWeight(void)*/
int C_LinkListNode::get_Linkweight(void)i
{
  return V_LinkWeight;
}

/*******************************************C_LinkListNode::get_NextPtr(void)*/
C_LinkListNode* C_LinkListNode::get_NextPtr(void)
{
  return P_NextPtr;
}
/*******************************************C_LinkListNode::get_PrevPtr(void)*/
C_LinkListNode* C_LinkListNode::get_PrevPtr(void)
{
  return P_PrevPtr;
}
/*******************************************C_LinkListNode::set_LinkNum(int v_val)*/
void C_LinkListNode::set_LinkNum(int v_val):V_LinkNum(v_val)
{
}
/*******************************************C_LinkListNode::set_LinkStart(int v_val)*/
void C_LinkListNode::set_LinkStart(int v_val):V_LinkStart(v_val)
{
}
/*******************************************C_LinkListNode::set_LinkEnd(int v_val)*/
void C_LinkListNode::set_LinkEnd(int v_val):V_LinkEnd(v_val)
{
}
/*******************************************C_LinkListNode::set_LinkiWeight(int v_val)*/
void C_LinkListNode::set_LinkWeight(int v_val):V_LinkNum(v_val)
{
}
/*******************************************C_LinkListNode::set_NextPtr(C_LinkListNode *p_nextPtr)*/
void C_LinkListNode::set_NextPtr(C_LinkListNode *p_nextPtr):P_NextPtr(p_nextPtr)
{
}
/*******************************************C_LinkListNode::set_PrevPtr(C_LinkListNode *p_prevPtr)*/
void C_LinkListNode::set_PrevPtr(C_LinkListNode *p_prevPtr):P_PrevPtr(p_prevPtr)
{
}
/*******************************************C_LinkListNode::set_BothPtr(C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr)*/
void C_LinkListNode::set_PrevPtr(C_LinkListNode *p_prevPtr):P_NextPtr(p_nextPtr),P_PrevPtr(p_prevPtr)
{
}
