#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

class C_SimpleLinkedList
{
  private:
    C_Node *P_HeadPtr;
    int V_Length;

  public:
    C_SimpleLinkedList(void);
    void Append(int v_val);
    void Delete(int v_position);
    void Insert(int v_val,int v_position);
    void PrintList(void);
    int getLength(void);
    int find(int v_val);
};
