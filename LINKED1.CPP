
#include<iostream.h>
#include<conio.h>
#include<process.h>
struct Node
{ int inf;
  Node* next;
}*start,*newptr,*save,*ptr,*rear;
Node* createnode(int);
void insertnode(Node*);
void displaynode(Node*);
void insertend(Node*);

void main()
{ clrscr();
  start=NULL;
  int inf,n;
  char ch='Y';
  cout<<"\nMENU";
  cout<<"\n1.Insert at the beginning";
  cout<<"\n2.Insert at the End";
  cout<<"\nEnter your choice";
  cin>>n;
  switch(n)
  { case 1:while(ch=='y'||ch=='Y')
	   {cout<<"Enter info for new node ";
	    cin>>inf;
	    cout<<"Creating new node";
	    getch();
	    newptr=createnode(inf);
	    if(newptr!=NULL)
	    { cout<<"Node created successfully";
	      getch();
	    }
	    else
	    { cout<<"Node not created";
	      getch();
	      exit(1);
	    }
	    cout<<"\nInserting node to beginning";
	    insertnode(newptr);
	    cout<<"\nDisplaying node";
	    displaynode(start);
	   cout<<"\nDo you want to add more?(y/Y)";
	   cin>>ch;
	   }
	   break;
    case 2:while(ch=='y'||ch=='Y')
	   {cout<<"Enter info for new node ";
	    cin>>inf;
	    cout<<"Creating new node";
	    getch();
	    newptr=createnode(inf);
	    if(newptr!=NULL)
	    { cout<<"Node created successfully";
	      getch();
	    }
	    else
	    { cout<<"Node not created";
	      getch();
	      exit(1);
	    }
	    cout<<"\nInserting node to beginning";
	    insertend(newptr);
	    cout<<"\nDisplaying node";
	    displaynode(start);
	   cout<<"\nDo you want to add more?(y/Y)";
	   cin>>ch;
	   }
	   break;
  }
  getch();
}
void insertnode(Node*np)
{ if(start==NULL)
    start=np;
  else
  { save=start;
    start=np;
    np->next=save;
  }
}
void displaynode(Node*np)
{ while(np!=NULL)
  { cout<<np->inf<<"->";
    np=np->next;
  }
  cout<<"!!!";
}
Node*createnode(int n)
{ ptr=new Node;
  ptr->inf=n;
  ptr->next=NULL;
  return(ptr);
}
void insertend(Node* np)
{ if((start==NULL)&&(rear==NULL))
    start=rear=np;
  else
   { rear->next=np;
    rear=np;
   }
}