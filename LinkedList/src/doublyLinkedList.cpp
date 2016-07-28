#ifndef  doublyLinkedList
#define doublyLinkedList
#include "./doublyLinkedList.h"
#endif

/******************************************void C_DoublyLinkedList::C_DoublyLinkedList(void)*/
C_DoublyLinkedList::C_DoublyLinkedList(void)
{
  P_HeadPtr=NULL;
  P_TailPtr=NULL;
  V_Length=0;
}

/******************************************void C_DoublyLinkedList::Append(int v_val)*/
void C_DoublyLinkedList::Append(int v_val)
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
    p_newNode->setPrevPtr(p_temp);
  }
  else
  {
    P_HeadPtr=p_newNode;
    P_TailPtr=p_newNode;
    p_newNode->setPrevPtr(P_HeadPtr);
  }
  V_Length++;
}

/****************************************void C_DoublyLinkedList::Insert(int v_val,int v_position)*/
void C_DoublyLinkedList::Insert(int v_val,int v_position)
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
    C_Node *p_newNode= new C_Node(v_val,NULL,NULL);
    p_newNode->setPrevPtr(p_temp);
    p_newNode->setNextPtr(p_temp->getNextPtr());
    p_temp->setNextPtr(p_newNode);
    V_Length++;
  }
}

/****************************************void C_DoublyLinkedList::Delete(int v_position)*/
void C_DoublyLinkedList::Delete(int v_position)
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
    C_Node *p_prevNode=p_temp;
    C_Node *p_delNode=p_temp->getNextPtr(); 
    C_Node *p_nextNode=p_delNode->getNextPtr();
    p_prevNode->setNextPtr(p_nextNode);
    p_nextNode->setPrevPtr(p_prevNode);
    delete[] p_delNode;
    V_Length--;
  }
}

/****************************************void C_DoublyLinkedList::PrintList(void)*/
void C_DoublyLinkedList::PrintList(void)
{
  C_Node *p_temp=P_HeadPtr;
  std::cout<<"\n";
  int v_count=1;
  while(p_temp !=NULL)
  {
    std::cout<<v_count<<"\t"<<p_temp->getValue()<<"\t"<<p_temp->getPrevPtr()
      <<"\t"<<p_temp<<"\t"<<p_temp->getNextPtr()<<"\n";
    p_temp=p_temp->getNextPtr();
    v_count++;
  }
}

/***************************************int C_DoublyLinkedList::getLength(void)*/
int C_DoublyLinkedList::getLength(void)
{
  return V_Length;
}

/**************************************int C_DoublyLinkedList::find(int v_val)*/
int C_DoublyLinkedList::find(int v_val)
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
