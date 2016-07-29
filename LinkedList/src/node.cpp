#ifndef  node
#define node
#include "./node.h"
#endif

/*******************************************C_Node(void)*/
C_Node::C_Node(void)
{
  P_NextPtr=NULL;
  P_PrevPtr=NULL;
}

/*******************************************C_Node(int v_val,C_Node *p_nextPtr)*/
C_Node::C_Node(int v_val,C_Node *p_nextPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=NULL;
  V_Data=v_val;
}

/*******************************************C_Node(int v_val,C_Node *p_nextPtr,C_Node *p_prevPtr)*/
C_Node::C_Node(int v_val,C_Node *p_nextPtr,C_Node *p_prevPtr)
{
  P_NextPtr=p_nextPtr;
  P_PrevPtr=p_prevPtr;
  V_Data=v_val;
}
/*******************************************int C_Node::getValue(void)*/
int C_Node::getValue(void)
{
  return V_Data;
}

/*******************************************C_Node::getNextPtr(void)*/
C_Node* C_Node::getNextPtr(void)
{
  return P_NextPtr;
}
/*******************************************C_Node::getPrevPtr(void)*/
C_Node* C_Node::getPrevPtr(void)
{
  return P_PrevPtr;
}
/*******************************************C_Node::setValue(int v_val)*/
void C_Node::setData(int v_val)
{
  V_Data=v_val;
}
/*******************************************C_Node::setNextPtr(C_Node *p_nextPtr)*/
void C_Node::setNextPtr(C_Node *p_nextPtr)
{
  P_NextPtr=p_nextPtr;
}
/*******************************************C_Node::setPrevPtr(C_Node *p_prevPtr)*/
void C_Node::setPrevPtr(C_Node *p_prevPtr)
{
  P_PrevPtr=p_prevPtr;
}
