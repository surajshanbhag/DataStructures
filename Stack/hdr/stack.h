#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

class Stack
{
  private:
    Node *head;
    Node *tail;
    int length;

  public:
    Stack(void);
    void Push(int VAL);
    int Pop(void);
    void PrintStack(void);
    int getLength(void);
    int find(int VAL);
    bool isEmpty(void);
};
