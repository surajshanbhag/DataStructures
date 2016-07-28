#ifndef  queue
#define queue
#include "./queue.h"
#endif

/******************************************void C_Queue::C_Queue(void)*/
C_Queue::C_Queue(void)
{
  P_HeadPtr=NULL;
  P_TailPtr=NULL;
  V_Length=0;
}

/******************************************void C_Queue::Push(int v_val)*/
void C_Queue::Push(int v_val)
{
  C_Node *p_newNode=new C_Node(v_val,NULL);
  C_Node *p_temp=P_HeadPtr;

  if(p_temp !=  NULL)
  {
    while(p_temp->getNextPtr() != NULL)
    {
      p_temp=p_temp->getNextPtr();
    }
    p_temp->setNextPtr(p_newNode);
    P_TailPtr=p_newNode;
  }
  else
  {
    P_HeadPtr=p_newNode;
    P_TailPtr=p_newNode;
  }
  V_Length++;
}

/****************************************void C_Queue::Pop(int position)*/
int C_Queue::Pop(void)
{
  int v_ret=-1;
  if(V_Length == 0 )
  {
    std::cout<<"\nERROR :Nothing to POP";
  }
  else
  {
    C_Node *p_temp=P_HeadPtr;
    v_ret=p_temp->getValue();
    P_HeadPtr=p_temp->getNextPtr();
    V_Length--;

  }
  return v_ret;
}

/****************************************void C_Queue::PrintQueue(void)*/
void C_Queue::PrintQueue(void)
{
  C_Node *p_temp=P_HeadPtr;
  std::cout<<"\n";
  int v_count=0;
  std::cout<<"\n Head:"<<P_HeadPtr<<"\ntail :"<<P_TailPtr<<"\n";
  while(p_temp !=NULL)
  {
    std::cout<<v_count<<"\t"<<p_temp->getValue()<<"\t"<<p_temp<<"\n";
    p_temp=p_temp->getNextPtr();
    v_count++;
  }
}

/***************************************int C_Queue::getLength(void)*/
int C_Queue::getLength(void)
{
  return V_Length;
}

/**************************************int C_Queue::find(int v_val)*/
int C_Queue::find(int v_val)
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

/***********************************bool C_Queue::isEmpty(void)*/
bool C_Queue::isEmpty(void)
{
  bool v_ret=false;
  if(V_Length == 0)
  {
    v_ret=true;
  }
  return v_ret;
}

