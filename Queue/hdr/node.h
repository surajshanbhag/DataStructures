#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

class C_Node
{
  private:
    int V_Data;
    C_Node *P_NextPtr;
    C_Node *P_PrevPtr;
  public:
    C_Node(void);
    C_Node(int v_val,C_Node *p_nextPtr);
    C_Node(int v_val,C_Node *p_nextPtr,C_Node *p_prevPtr);
    int getValue(void);
    C_Node* getNextPtr(void);
    C_Node* getPrevPtr(void);
    void setData(int v_val);
    void setNextPtr(C_Node *p_nextPtr);
    void setPrevPtr(C_Node *p_prevPtr);
    void setBothPtr(C_Node *p_nextPtr,C_Node *p_prevPtr);
};
