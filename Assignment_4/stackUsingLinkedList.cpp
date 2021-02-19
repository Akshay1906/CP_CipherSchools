#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
     int data;
     Node *link;
};
class LinkedList
{
    public:
    Node *head, *top;
    LinkedList()
    {
        head = NULL;
    }

    void push(int data)
    {
        Node *ptr = new Node();
       
        ptr->data = data;
        if (head == NULL)
        {
            head = ptr;
            ptr->link = NULL;
            top = ptr;
        }
        else
        {
            top->link = ptr;
            ptr->link = NULL;
            top = ptr;
        }
        cout<<data<<" PUSHED INTO STACK."<<endl;
    }

    bool isEmpty()
    {
        if(head == NULL )
            return true;
        return false;
    }
    void pop()
    {
        if(isEmpty())
            cout<<"\nSTACK UNDERFLOW !!!!";
        else
        {
            Node *ptr = head;
            if(ptr -> link == NULL)
            {
                head = NULL;
                delete ptr;
            }
            else
            {
                while(ptr->link != top)
                    ptr= ptr->link;
                delete top;
                ptr->link = NULL;
                top = ptr;
            }
            cout<<"POPPED SUCCESSFULLY ....."<<endl;
        }
    }

    void printStack()
    {
        if(isEmpty())
            cout<<"\nSTACk EMPTY !!!";
        else
        {
                Node *ptr = head;
                while(ptr != NULL)
                {
                    cout<<ptr->data<<" ";
                    ptr = ptr->link;
                }
        }
    }

};


int main()
{
    LinkedList obj;
    for(int i=1;i<=5;i++)
        obj.push(i);
    obj.printStack(); 
    obj.pop();
    obj.printStack(); 
    obj.pop();
    obj.printStack(); 
    obj.pop();
    obj.printStack(); 
    obj.pop();
    obj.printStack(); 
    obj.pop();
    obj.printStack();

    return 0;
}