#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

class Node
{
  private:
    int data;
    Node *ptrNext;
  public:
    Node(void);
    Node(int VAL,Node *ptr);
    int getValue(void);
    Node* getPtr(void);
    void setData(int VAL);
    void setPtr(Node *ptr);
};

class LinkedList
{
  private:
    Node *head;
    static int length;

  public:
    LinkedList(void);
    void Append(int VAL);
    void Delete(int position);
    void Insert(int VAL,int position);
    void PrintList(void);
    int getLength(void);
};
