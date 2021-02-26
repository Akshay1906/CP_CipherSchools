#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int info;	
		Node *link;
};

class singleLinkedList
{
	public:
	Node *head;
	singleLinkedList()
	{
		head = NULL;
	}
	void InsertAtEnd(int data)
	{
		Node *ptr = new Node(); //creating node 
		if(head  == NULL)       //check whether head is NOT NULL
		{
			head = ptr;
			head -> info = data;
			head -> link = NULL;
		}
		else
		{
			ptr -> info  = data;
			Node *temp = head;
			while(temp -> link != NULL)
				temp = temp -> link;
				
			temp -> link = ptr;
			ptr -> link = NULL;
		}
		
	}
	
	void traversal()
	{
		if(head == NULL)
		{	
			cout<<"\nLIST IS EMPTY !!";
			return ;
		}
		else
		{
			Node *ptr  = head;
			while (ptr != NULL)
			{
				cout<<ptr ->info<<" ";
				ptr = ptr -> link;
			}
			
		}
	}
	
	bool isPalindrome(int data)
	{
			int original =  data ,rem,rev = 0;
			while( data!= 0)
			{
				rem = data % 10; 
				rev = rev * 10 + rem;
				data = data / 10;
			}
			
			if(original == rev)
				return true;
			else
				return false;
	}
	
	Node * deleteNode(Node *ptr)
	{
		if(head == NULL)
		{
			cout<<"List IS Empty !!";
			return NULL ;
		}
		else if (ptr == head)
		{
			head  = ptr -> link;
			delete ptr;
			return head;
		}
		else
		{
			Node *temp  = head;
			while(temp -> link != ptr)
				temp = temp -> link;
				
			temp -> link = ptr ->link;
			delete ptr;
			return temp ->link;
		}
			
	}
	
	void generatePalindromeList()
	{
		
		if(head == NULL)
		{
			cout<<"\nLIST IS EMPTY !!!!!!";
			return ;
		}
		else
		{
			Node *ptr = head , *prev ;
			while(ptr != NULL)
			{
				bool k = isPalindrome(ptr -> info);   //checking whether the given node is palindrome
			
				if(k==0)     //if NO then delete the node
				{
					prev = deleteNode(ptr);  
					ptr = prev;
				}
				else				//move to next node
					ptr = ptr->link;
			}
			traversal();   //traversal
		}
	
	}

};


int main()
{
	singleLinkedList obj;

	obj.InsertAtEnd(121);
	obj.InsertAtEnd(134);
	obj.InsertAtEnd(131);
	obj.InsertAtEnd(129);
	cout<<"\nInput NODES::";
	obj.traversal();
	cout<<"\nGenerating Palindromic List::";
	obj.generatePalindromeList();
	
	return 0;
}
