#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _linkListNode_
#define _linkListNode_
#include "./linkListNode.h"
#endif

class C_GraphLinkList
{
  private:
    C_LinkListNode *P_HeadPtr;
    int V_Length;

  public:
    C_GraphLinkList(void);
    void Append(int v_val);
    void Delete(int v_position);
    void Insert(int v_val,int v_position);
    void PrintList(void);
    int get_Length(void);
    int find(int v_val);
};
