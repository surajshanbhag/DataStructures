#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

class Queue
{
  private:
    Node *head;
    Node *tail;
    int length;

  public:
    Queue(void);
    void Push(int VAL);
    int Pop(void);
    void PrintQueue(void);
    int getLength(void);
    int find(int VAL);
    bool isEmpty(void);
};
