#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],front,rear;
void emptyQueue()
{
	front=rear=-1;
}
void traversal()
{
	if(front==-1 && rear==-1 || front>rear)
	{
		cout<<"\nQueue is empty........";
		emptyQueue();
	}

	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<"\t";
		}

	}
}
void enqueue(int item)
{
	rear++;
	if(front==-1)
	{
		front++;
		queue[front]=item;
	}
	else if(front==0 && rear==MAX)
	{
		cout<<"\nOverflow........";
		rear=MAX-1;
	}
	else if(front!=0 && rear==MAX)
	{
		int i=0;
		while(front<rear)
		{
			queue[i]=queue[front];
			front++;i++;
		}
		queue[i]=item;
		front=0;
		rear=i;
	}
	else
	{
		queue[rear]=item;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1 || front>rear)
	{
		cout<<"\nQueue underflow......";
		emptyQueue();
	}
      /*	else if(front>rear)
	{
		cout<<"\nQueue Underflow !!!!!!";
		emptyQueue();
	}*/
	else
	{
		front++;
		cout<<"\nDequeued.....";

	}
}

void main()
{
	int ch,element;
	clrscr();
	emptyQueue();
	while(1)
	{
		cout<<"\nPress 1 for Enqueue";
		cout<<"\nPress 2 for Dequeue";
		cout<<"\nPress 3 for Traversal";
		cout<<"\nPress 4 for exit";
		cout<<"\n----------------------------";
		cout<<"\nPlease Enter your choice::";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter the element::";
				cin>>element;
				enqueue(element);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				traversal();
				break;
			}
			case 4:
			{
				exit(0);
			}
		}

	}
}