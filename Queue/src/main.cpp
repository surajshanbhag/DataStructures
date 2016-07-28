#ifndef _main_
#define _main_
#include "./../hdr/main.h"
#endif

void queueFunc(void);
int main(int argc,char *argv[])
{
  queueFunc();
  return 0;
}
void queueFunc(void)
{
  C_Queue *p_queuePtr=new C_Queue();
  char v_input=0;
  int v_val=0;
  while(v_input != 'x')
  {
    v_input=0;
    std::cout<<"u : Push\no: Pop\np :Print\nf: find\nx: exit :";
    std::cin>>v_input;
    switch(v_input)
    {
      case 'u':
        std::cout<<"enter value:";
        std::cin>>v_val;
        p_queuePtr->Push(v_val);
        std::cout<<"list length:"<<p_queuePtr->getLength()<<"\n";
        break;
      case 'o':
        std::cout<<p_queuePtr->Pop();
        std::cout<<"\nlist length:"<<p_queuePtr->getLength()<<"\n";
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>v_val;
        std::cout<<"\nposition :"<<p_queuePtr->find(v_val);
        break;
      case 'p':
        p_queuePtr->PrintQueue();
        std::cout<<"list length:"<<p_queuePtr->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
  }
}

