#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

class C_GraphLink
{
  private:
    int V_EndNode;
    int V_LinkWeigth;
    int V_LinkNum;
    C_GraphLink *P_NextPtr;
    C_GraphLink *P_PrevPtr;
  public:
    C_GraphLink(void);
    C_GraphLink(int v_endNode,int v_linkWeight,int v_linkNum,C_GraphLink *p_nextPtr);
    C_GraphLink(int v_endNode,int v_linkWeight,int v_linkNum,C_GraphLink *p_nextPtr,C_GraphLink *p_prevPtr);
    C_GraphLink(int v_val,C_GraphLink *p_nextPtr,C_GraphLink *p_prevPtr);
    int get_EndNode(void);
    int get_LinkWeight(void);
    int get_LinkNum(void);
    C_GraphLink* get_NextPtr(void);
    C_GraphLink* get_PrevPtr(void);
    void set_EndNode(int v_val);
    void set_LinkWeight(int v_val);
    void set_LinkNum(int v_val);
    void set_NextPtr(C_GraphLink *p_nextPtr);
    void set_PrevPtr(C_GraphLink *p_prevPtr);
    void set_BothPtr(C_GraphLink *p_nextPtr,C_GraphLink *p_prevPtr);
};
