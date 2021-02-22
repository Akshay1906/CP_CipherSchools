#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
typedef struct priorityQueue
{
    int info;
    int prty;
    struct priorityQueue *link;
}node;

node *head;
void emptyQueue()
{
    head=NULL;
}
void traversal()
{
    node *ptr;
    ptr=head;
    if(ptr==NULL)
	cout<<"\nQueue is empty::";
    else
    {
	while(ptr != NULL)
	{
	    cout<<"Item ::"<<ptr->info<<"\tPriority ::"<<ptr->prty<<endl;
	    ptr=ptr->link;
	}
    }
}
node * search(int P)
{
    node *ptr,*temp;
    ptr=temp=head;
    while(ptr!=NULL)
    {
	if(P >= ptr->prty)
	{
	    temp=ptr;
	    ptr=ptr->link;
	}
	else
	    break;
    }
return temp;
}
void Enqueue(int item,int p)
{
    node *ptr,*temp,*loc ;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    ptr->prty=p;
    if(head==NULL)
    {
	head=ptr;
	ptr->link=NULL;
    }
    else
    {
	loc=search(ptr->prty);
	if(loc==head)
	{
		if(loc->prty > ptr->prty)
		{
			ptr->link=loc;
			head=ptr;
		}
		else
		{
			temp=loc->link;
			loc->link=ptr;
			ptr->link=temp;
		}
	}
	else
	{
		temp=loc->link;
		loc->link=ptr;
		ptr->link=temp;
	}
    }
}

void Dequeue()
{
	node *ptr,*loc;
	ptr=head;
	if(ptr==NULL)
		cout<<"\nQueue is Empty !!!!";
	else
	{
		head=ptr->link;
		free(ptr);
		cout<<"\nDequeued.........";
	}
}
void main()
{
    int ch;
    int elemnt,priority;
    clrscr();
    emptyQueue();
    while(1)
    {

	cout<<"\nPress 1 for enqueue";
	cout<<"\nPress 2 for Dequeue";
	cout<<"\nPress 3 for traversal";
	cout<<"\nPress 4 for exit";
	cout<<"\n-------------------------";
	cout<<"\nPlease enter your choice::";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			while(1)
			{
				cout<<"\nEnter the element and its priority::";
				cin>>elemnt>>priority;
				if(priority>0)
					break;
				else
					cout<<"\nPriority is always greater than 0 !!!!!";
			}
			Enqueue(elemnt,priority);
			break;
		}
		case 2:
		{
			Dequeue();
			break;
		}
		case 3:
		{
			traversal();
			break;
		}
		case 4:
			exit(0);
	}
    }

}

