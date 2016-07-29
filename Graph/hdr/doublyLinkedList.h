#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _node_
#define _node_
#include "./node.h"
#endif

class C_DoublyLinkedList
{
  private:
    C_Node *P_HeadPtr;
    C_Node *P_TailPtr;
    int V_Length;

  public:
    C_DoublyLinkedList(void);
    void Append(int v_val);
    void Delete(int v_position);
    void Insert(int v_val,int v_position);
    void PrintList(void);
    int get_Length(void);
    int findEndNode(int v_val);
    int findLinkWeight(int v_val);
    int findLinkNum(int v_val);
};
