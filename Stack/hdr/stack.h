#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

class C_Stack
{
  private:
    C_Node *P_HeadPtr;
    C_Node *P_TailPtr;
    int V_Length;

  public:
    C_Stack(void);
    void Push(int v_val);
    int Pop(void);
    void PrintStack(void);
    int getLength(void);
    int find(int v_val);
    bool isEmpty(void);
};
