#ifndef  _commonHeaders_
#define _commonHeaders_
#include "./commonHeaders.h"
#endif

#ifndef  _doublyLinkedList_
#define  _doublyLinkedList_
#include "./doublyLinkedList.h"
#endif

class C_DirGraphNode
{
  private:
    C_DoublyLinkedList *P_InLinksList;
    C_DoublyLinkedList *P_OutLinksList;
    int V_NumOutLinks;
    int V_NumInLinks;

  public:
    C_DirGraphNode(void);
    void AddInLink(int v_endNode,int v_weight,int v_linkNumber);
    void AddOutLink(int v_startNode,int v_weight,int v_linkNumber);
    int GetNumInLinks(void);
    int GetNumOutLinks(void);
    int GetInLinkEnd(int v_index);
    int GetOutLinkStart(int v_index);
    int GetInLinkWeight(int v_index);
    int GetOutLinkWeight(int v_index);
    int GetInLinkNumber(int v_index);
    int GetOutLinkNumber(int v_index);
    void PrintNode(void);
    int FindInLink(int v_inLink);
    int FindOutLink(int v_inLink);
};
