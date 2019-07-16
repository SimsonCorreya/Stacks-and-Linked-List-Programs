#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{ int choice;
  int PUSH(int[],int&,int);
  cout<<"\n\t\t\tMENU";
  cout<<"\n1.Inserting element(PUSH)";
  cout<<"\n2.Deleting element(POP)";
  cout<<"\nEnter your choice";
  cin>>choice;
  switch(choice)
  { case 1: do
	    { int stack[size],item,rtn,top=-1;
	      rtn=PUSH(stack,top,item);
	      if(rtn==-1)
	      { cout<<"OVERFLOW";
		exit(1);
	      }
	      else
		DISPLAY(stack,top);
	      cout<<"\nDo you want to add more?(y/Y)";
	      cin>>ch;
	    }while(ch=='y'||ch=='Y');
	    break;
    case 2: ch='y';
	    while(ch=='y'||ch=='Y')
	    { rtn=POP(stack,top);
	      if(rtn==-1)
	      { cout<<"OVERFLOW";
		exit(1);
	      }
	      else
	      cout<<
getch();
}
int PUSH(int stack[],int&top,int item)
{ if(top==size-1)
    return(-1);
  else
  { top++;
    stack[top]=item;
  }
  return(0);
}
