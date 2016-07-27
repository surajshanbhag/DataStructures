#ifndef  simpleLinkedList
#define simpleLinkedList
#include "./node.h"
#endif

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
