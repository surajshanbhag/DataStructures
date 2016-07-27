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

