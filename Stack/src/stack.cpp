#ifndef  stack
#define stack
#include "./stack.h"
#endif

/******************************************void C_Stack::C_Stack(void)*/
C_Stack::C_Stack(void)
{
  P_HeadPtr=NULL;
  P_TailPtr=NULL;
  V_Length=0;
}

/******************************************void C_Stack::Push(int v_val)*/
void C_Stack::Push(int v_val)
{
  C_Node *p_newC_Node=new C_Node(v_val,NULL,NULL);
  C_Node *p_temp=P_HeadPtr;

  if(p_temp !=  NULL)
  {
    while(p_temp->getNextPtr() != NULL)
    {
      p_temp=p_temp->getNextPtr();
    }
    p_temp->setNextPtr(p_newC_Node);
    P_TailPtr=p_newC_Node;
  }
  else
  {
    P_HeadPtr=p_newC_Node;
    P_TailPtr=p_newC_Node;
  }
  V_Length++;
}

/****************************************void C_Stack::Pop(int position)*/
int C_Stack::Pop(void)
{
  int v_ret=-1;
  if(V_Length == 0 )
  {
    std::cout<<"\nERROR :Nothing to POP";
  }
  else
  {
    int v_index=1;
    C_Node *p_temp=P_HeadPtr;
    while(v_index < V_Length-1)
    {
      v_index++;
      p_temp=p_temp->getNextPtr();
    }
    C_Node *p_popC_Node=P_TailPtr;
    v_ret=p_popC_Node->getValue();
    P_TailPtr=p_temp;
    P_TailPtr->setNextPtr(NULL);
    delete[] p_popC_Node;
    V_Length--;
  }
  return v_ret;
}

/****************************************void C_Stack::PrintStack(void)*/
void C_Stack::PrintStack(void)
{
  C_Node *p_temp=P_HeadPtr;
  std::cout<<"\n";
  int v_count=0;
  std::cout<<"\n P_HeadPtr:"<<P_HeadPtr<<"\nP_TailPtr :"<<P_TailPtr<<"\n";
  while(p_temp !=NULL)
  {
    std::cout<<v_count<<"\t"<<p_temp->getValue()<<"\t"<<p_temp<<"\n";
    p_temp=p_temp->getNextPtr();
    v_count++;
  }
}

/***************************************int C_Stack::getLength(void)*/
int C_Stack::getLength(void)
{
  return V_Length;
}

/**************************************int C_Stack::find(int v_val)*/
int C_Stack::find(int v_val)
{
  C_Node *p_temp=P_HeadPtr;
  int v_count=0;
  int v_ret=-1;
  while(p_temp !=NULL)
  {
    if(p_temp->getValue() == v_val)
    {
      v_ret=v_count;
    }
    p_temp=p_temp->getNextPtr();
    v_count++;
  }
  return v_ret;
}

/***********************************bool C_Stack::isEmpty(void)*/
bool C_Stack::isEmpty(void)
{
  bool v_ret=false;
  if(V_Length == 0)
  {
    v_ret=true;
  }
  return v_ret;
}

