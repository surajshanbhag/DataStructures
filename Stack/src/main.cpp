#ifndef _main_
#define _main_
#include "./../hdr/main.h"
#endif

int main(int argc,char *argv[])
{
  LinkedList *List=new LinkedList();
  char input=0;
  char input2=0;
  while(input != 'x')
  {
    input=0;
    input2=0;
    std::cout<<"a : Append\nd: Delete\ni:Insert\np :Print\nx: exit :";
    std::cin>>input;
    switch(input)
    {
      case 'a':
        std::cout<<"enter value:";
        std::cin>>input;
        List->Append(atoi(&input));
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'd':
        std::cout<<"enter position:";
        std::cin>>input;
        List->Delete(atoi(&input));
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'i':
        {
          std::cout<<"enter position:";
          std::cin>>input2;
          std::cin.clear();
          std::cin.ignore();
          //fflush(stdin);
          std::cout<<"enter value:";
          std::cin>>input;
          int VAL=0;VAL=atoi(&input);
          int pos=0;pos=atoi(&input2);
          std::cout<<"&&&"<<VAL<<"___"<<pos<<"\n";
          List->Insert(VAL,pos);
          std::cout<<"list length:"<<List->getLength()<<"\n";
        }
      case 'p':
        List->PrintList();
        std::cout<<"list length:"<<List->getLength()<<"\n";
        break;
      case 'x':
      default:
        break;
    }
    std::cout<<"&&&"<<input<<"___"<<input2<<"\n";
  }
  return 0;
}
