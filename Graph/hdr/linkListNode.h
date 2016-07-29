#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

class C_LinkListNode
{
  private:
    int V_LinkNum;
    int V_LinkStart;
    int V_LinkEnd;
    int V_LinkWeight;
    C_LinkListNode *P_NextPtr;
    C_LinkListNode *P_PrevPtr;
  public:
    C_LinkListNode(void);
    C_LinkListNode(C_LinkListNode *p_nextPtr);
    C_LinkListNode(C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr);
    C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr);
    C_LinkListNode(int v_linkNum,int v_linkStart,int v_linkEnd,int v_linkWeight,C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr);
    int get_LinkNum(void);
    int get_LinkStart(void);
    int get_LinkEnd(void);
    int get_LinkWeigth(void);
    C_LinkListNode* get_NextPtr(void);
    C_LinkListNode* get_PrevPtr(void);
    int set_LinkNum(int v_linkNum);
    int set_LinkStart(int v_linkStart);
    int set_LinkEnd(int v_linkEnd);
    int set_LinkWeigth(int v_linkWeight);
    void set_NextPtr(C_LinkListNode *p_nextPtr);
    void set_PrevPtr(C_LinkListNode *p_prevPtr);
    void set_BothPtr(C_LinkListNode *p_nextPtr,C_LinkListNode *p_prevPtr);
};
