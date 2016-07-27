#ifndef  queue
#define queue
#include "./queue.h"
#endif

/******************************************void Queue::Queue(void)*/
Queue::Queue(void)
{
  head=NULL;
  tail=NULL;
  length=0;
}

/******************************************void Queue::Push(int VAL)*/
void Queue::Push(int VAL)
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

/****************************************void Queue::Pop(int position)*/
int Queue::Pop(void)
{
  int ret=-1;
  if(length == 0 )
  {
    std::cout<<"\nERROR :Nothing to POP";
  }
  else
  {
    Node *temp=head;
    ret=temp->getValue();
    head=temp->getPtr();
    length--;

  }
  return ret;
}

/****************************************void Queue::PrintQueue(void)*/
void Queue::PrintQueue(void)
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

/***************************************int Queue::getLength(void)*/
int Queue::getLength(void)
{
  return length;
}

/**************************************int Queue::find(int VAL)*/
int Queue::find(int VAL)
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

/***********************************bool Queue::isEmpty(void)*/
bool Queue::isEmpty(void)
{
  bool ret=false;
  if(length == 0)
  {
    ret=true;
  }
  return ret;
}

