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
  Queue *queuePtr=new Queue();
  char input=0;
  int VAL=0;
  while(input != 'x')
  {
    input=0;
    std::cout<<"u : Push\no: Pop\np :Print\nf: find\nx: exit :";
    std::cin>>input;
    switch(input)
    {
      case 'u':
        std::cout<<"enter value:";
        std::cin>>VAL;
        queuePtr->Push(VAL);
        std::cout<<"list length:"<<queuePtr->getLength()<<"\n";
        break;
      case 'o':
        std::cout<<queuePtr->Pop();
        std::cout<<"\nlist length:"<<queuePtr->getLength()<<"\n";
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>VAL;
        std::cout<<"\nposition :"<<queuePtr->find(VAL);
        break;
      case 'p':
        queuePtr->PrintQueue();
        std::cout<<"list length:"<<queuePtr->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
  }
}

