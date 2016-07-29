#ifndef _main_
#define _main_
#include "./../hdr/main.h"
#endif

void SimpleLinkedListFunc(void);
void DoublyLinkedListFunc(void);
int main(int argc,char *argv[])
{
  SimpleLinkedListFunc();
  //DoublyLinkedListFunc();
  return 0;
}
void DoublyLinkedListFunc(void)
{
  C_DoublyLinkedList *List=new C_DoublyLinkedList();
  char v_input=0;
  int v_val=0;
  int pos=0;
  while(v_input != 'x')
  {
    v_input=0;
    std::cout<<"a : Append\nd: Delete\ni:Insert\np :Print\nf: find\nx: exit :";
    std::cin>>v_input;
    switch(v_input)
    {
      case 'a':
        std::cout<<"enter value:";
        std::cin>>v_val;
        List->Append(v_val);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'd':
        std::cout<<"enter v_position:";
        std::cin>>pos;
        List->Delete(pos);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'i':
        {
          std::cout<<"enter v_position:";
          std::cin>>pos;
          std::cout<<"enter value:";
          std::cin>>v_val;
          List->Insert(v_val,pos);
        }
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>v_val;
        std::cout<<"\nv_position :"<<List->find(v_val);
        break;
      case 'p':
        List->PrintList();
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
  }
}
void SimpleLinkedListFunc(void)
{
  C_SimpleLinkedList *List=new C_SimpleLinkedList();
  char v_input=0;
  int v_val=0;
  int pos=0;
  while(v_input != 'x')
  {
    v_input=0;
    std::cout<<"a : Append\nd: Delete\ni:Insert\np :Print\nf: find\nx: exit :";
    std::cin>>v_input;
    switch(v_input)
    {
      case 'a':
        std::cout<<"enter value:";
        std::cin>>v_val;
        List->Append(v_val);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'd':
        std::cout<<"enter v_position:";
        std::cin>>pos;
        List->Delete(pos);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'i':
        {
          std::cout<<"enter v_position:";
          std::cin>>pos;
          std::cout<<"enter value:";
          std::cin>>v_val;
          List->Insert(v_val,pos);
        }
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>v_val;
        std::cout<<"\nv_position :"<<List->find(v_val);
        break;
      case 'p':
        List->PrintList();
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
  }
}
