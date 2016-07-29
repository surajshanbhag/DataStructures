#ifndef  simpleLinkedList
#define simpleLinkedList
#include "./simpleLinkedList.h"
#endif

/******************************************void C_SimpleLinkedList::C_SimpleLinkedList(void)*/
C_SimpleLinkedList::C_SimpleLinkedList(void)
{
  P_HeadPtr=NULL;
  V_Length=0;
}

/******************************************void C_SimpleLinkedList::Append(int v_val)*/
void C_SimpleLinkedList::Append(int v_val)
{
  C_Node *p_newNode=new C_Node(v_val,NULL,NULL);
  C_Node *p_temp=P_HeadPtr;

  if(p_temp !=  NULL)
  {
    while(p_temp->getNextPtr() != NULL)
    {
      p_temp=p_temp->getNextPtr();
    }
    p_temp->setNextPtr(p_newNode);
  }
  else
  {
    P_HeadPtr=p_newNode;
  }
  V_Length++;
}

/****************************************void C_SimpleLinkedList::Insert(int v_val,int v_position)*/
void C_SimpleLinkedList::Insert(int v_val,int v_position)
{
  if(v_position > V_Length && P_HeadPtr != NULL)
  {
    std::cout<<"Cannot insert beyond last element: length of list :"<<V_Length;
  }
  else
  {
    int v_index=1;
    C_Node *p_temp=P_HeadPtr;
    while(v_index < v_position)
    {
      v_index++;
      p_temp=p_temp->getNextPtr();
    }
    C_Node *p_newNode= new C_Node(v_val,p_temp->getNextPtr());
    p_temp->setNextPtr(p_newNode); 
    V_Length++;
  }
}

/****************************************void C_SimpleLinkedList::Delete(int v_position)*/
void C_SimpleLinkedList::Delete(int v_position)
{
  if(v_position > V_Length)
  {
    std::cout<<"Cannot delete beyond last element: length of list :"<<V_Length;
  }
  else
  {
    int v_index=0;
    C_Node *p_temp=P_HeadPtr;
    while(v_index < v_position-1)
    {
      v_index++;
      p_temp=p_temp->getNextPtr();
    }
    C_Node *p_delNode=p_temp->getNextPtr(); 
    C_Node *p_nextNode=p_delNode->getNextPtr();
    p_temp->setNextPtr(p_nextNode);
    delete[] p_delNode;
    V_Length--;
  }
}

/****************************************void C_SimpleLinkedList::PrintList(void)*/
void C_SimpleLinkedList::PrintList(void)
{
  C_Node *p_temp=P_HeadPtr;
  std::cout<<"\n";
  int v_count=0;
  while(p_temp !=NULL)
  {
    std::cout<<v_count<<"\t"<<p_temp->getValue()<<"\t"<<p_temp->getNextPtr()<<"\n";
    p_temp=p_temp->getNextPtr();
    v_count++;
  }
}

/***************************************int C_SimpleLinkedList::getLength(void)*/
int C_SimpleLinkedList::getLength(void)
{
  return V_Length;
}

/**************************************int C_SimpleLinkedList::find(int v_val)*/
int C_SimpleLinkedList::find(int v_val)
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
