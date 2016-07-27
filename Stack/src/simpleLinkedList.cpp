#ifndef  simpleLinkedList
#define simpleLinkedList
#include "./simpleLinkedList.h"
#endif

int LinkedList::length=0;
/*******************************************Node(void)*/
Node::Node(void)
{
  ptrNext=NULL;
}

/*******************************************Node(int VAL,Node *ptr)*/
Node::Node(int VAL,Node *ptr)
{
  ptrNext=ptr;
  data=VAL;
}


/*******************************************Node::getValue(void)*/
int Node::getValue(void)
{
  return data;
}

/*******************************************Node::getPtr(void)*/
Node* Node::getPtr(void)
{
  return ptrNext;
}
/*******************************************Node::setValue(int VAL)*/
void Node::setData(int VAL)
{
  data=VAL;
}

/*******************************************Node::setPtr(Node *ptr)*/
void Node::setPtr(Node *ptr)
{
  ptrNext=ptr;
}

/******************************************void LinkedList::LinkedList(void)*/
LinkedList::LinkedList(void)
{
  head=NULL;
  LinkedList::length=0;
}

/******************************************void LinkedList::Append(int VAL)*/
void LinkedList::Append(int VAL)
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
  }
  else
  {
    head=newNode;
  }
  LinkedList::length++;
}

/****************************************void LinkedList::Insert(int VAL,int position)*/
void LinkedList::Insert(int VAL,int position)
{
  if(position > LinkedList::length && head != NULL)
  {
    std::cout<<"Cannot insert beyond last element: length of list :"<<LinkedList::length;
  }
  else
  {
    int index=1;
    Node *temp=head;
    while(index < position)
    {
      index++;
      temp=temp->getPtr();
    }
    std::cout<<"\n$$$$"<<VAL<<"___"<<position<<"\n";
    Node *newNode= new Node(VAL,temp->getPtr());
    temp->setPtr(newNode); 
    LinkedList::length++;
  }
}

/****************************************void LinkedList::Delete(int position)*/
void LinkedList::Delete(int position)
{
  if(position > LinkedList::length)
  {
    std::cout<<"Cannot delete beyond last element: length of list :"<<LinkedList::length;
  }
  else
  {
    int index=0;
    Node *temp=head;
    while(index < position-1)
    {
      index++;
      temp=temp->getPtr();
    }
    Node *delNode=temp->getPtr(); 
    Node *nextNode=delNode->getPtr();
    temp->setPtr(nextNode);
    delete[] delNode;
    LinkedList::length--;
  }
}

/****************************************void LinkedList::PrintList(void)*/
void LinkedList::PrintList(void)
{
  Node *temp=head;
  std::cout<<"\n";
  int count=0;
  while(temp !=NULL)
  {
    std::cout<<count<<"\t"<<temp->getValue()<<"\n";
    temp=temp->getPtr();
    count++;
  }
}

/***************************************int LinkedList::getLength(void)*/
int LinkedList::getLength(void)
{
  return LinkedList::length;
}

/**************************************int LinkedList::find(int VAL)*/
int LinkedList::find(int VAL)
{
  Node *temp=head;
  int count=0;
  while(temp !=NULL)
  {
    if(temp->getValue() == VAL)
    {
      return count;
    }
    temp=temp->getPtr();
    count++;
  }
}
