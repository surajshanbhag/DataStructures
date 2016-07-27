#ifndef  stack
#define stack
#include "./stack.h"
#endif

/******************************************void Stack::Stack(void)*/
Stack::Stack(void)
{
  head=NULL;
  tail=NULL;
  length=0;
}

/******************************************void Stack::Push(int VAL)*/
void Stack::Push(int VAL)
{
  Node *newNode=new Node(VAL,NULL);
  Node *temp=head;

  if(temp !=  NULL)
  {
    while(temp->getPtr() != NULL)
    {
      temp=temp->getPtr();
    }
    temp->setPtr(newNode);
    tail=newNode;
  }
  else
  {
    head=newNode;
    tail=newNode;
  }
  length++;
}

/****************************************void Stack::Pop(int position)*/
int Stack::Pop(void)
{
  int ret=-1;
  if(length == 0 )
  {
    std::cout<<"\nERROR :Nothing to POP";
  }
  else
  {
    int index=1;
    Node *temp=head;
    while(index < length-1)
    {
      index++;
      temp=temp->getPtr();
    }
    std::cout<<"\ntail -1"<<temp<<"\n";
    Node *popNode=tail;
    ret=popNode->getValue();
    tail=temp;
    tail->setPtr(NULL);
    delete[] popNode;
    length--;
  }
  return ret;
}

/****************************************void Stack::PrintStack(void)*/
void Stack::PrintStack(void)
{
  Node *temp=head;
  std::cout<<"\n";
  int count=0;
  std::cout<<"\n Head:"<<head<<"\ntail :"<<tail<<"\n";
  while(temp !=NULL)
  {
    std::cout<<count<<"\t"<<temp->getValue()<<"\t"<<temp<<"\n";
    temp=temp->getPtr();
    count++;
  }
}

/***************************************int Stack::getLength(void)*/
int Stack::getLength(void)
{
  return length;
}

/**************************************int Stack::find(int VAL)*/
int Stack::find(int VAL)
{
  Node *temp=head;
  int count=0;
  int ret=-1;
  while(temp !=NULL)
  {
    if(temp->getValue() == VAL)
    {
      ret=count;
    }
    temp=temp->getPtr();
    count++;
  }
  return ret;
}

/***********************************bool Stack::isEmpty(void)*/
bool Stack::isEmpty(void)
{
  bool ret=false;
  if(length == 0)
  {
    ret=true;
  }
  return ret;
}

