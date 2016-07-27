#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

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
    int find(int VAL);
};
