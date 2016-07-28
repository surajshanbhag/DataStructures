#ifndef _main_
#define _main_
#include "./../hdr/main.h"
#endif

void StackFunc(void);
int main(int argc,char *argv[])
{
  StackFunc();
  return 0;
}
void StackFunc(void)
{
  C_Stack *P_StackPtr=new C_Stack();
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
        P_StackPtr->Push(v_val);
        std::cout<<"list length:"<<P_StackPtr->getLength()<<"\n";
        break;
      case 'o':
        std::cout<<P_StackPtr->Pop();
        std::cout<<"\nlist length:"<<P_StackPtr->getLength()<<"\n";
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>v_val;
        std::cout<<"\nposition :"<<P_StackPtr->find(v_val);
        break;
      case 'p':
        P_StackPtr->PrintStack();
        std::cout<<"list length:"<<P_StackPtr->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
  }
}
