#ifndef _main_
#define _main_
#include "./../hdr/main.h"
#endif

void LinkedListFunc(void);
int main(int argc,char *argv[])
{
  LinkedListFunc();
  return 0;
}
void LinkedListFunc(void)
{
  LinkedList *List=new LinkedList();
  char input=0;
  int VAL=0;
  int pos=0;
  while(input != 'x')
  {
    input=0;
    std::cout<<"a : Append\nd: Delete\ni:Insert\np :Print\nf: find\nx: exit :";
    std::cin>>input;
    switch(input)
    {
      case 'a':
        std::cout<<"enter value:";
        std::cin>>VAL;
        List->Append(VAL);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'd':
        std::cout<<"enter position:";
        std::cin>>pos;
        List->Delete(pos);
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'i':
        {
          std::cout<<"enter position:";
          std::cin>>pos;
          std::cout<<"enter value:";
          std::cin>>VAL;
          List->Insert(VAL,pos);
        }
        break;
      case 'f':
        std::cout<<"enter value:";
        std::cin>>VAL;
        std::cout<<"\nposition :"<<List->find(VAL);
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
