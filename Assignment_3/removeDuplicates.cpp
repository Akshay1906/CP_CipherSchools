#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
};

class SingleLinkedList
{
public:
    Node *head;

    SingleLinkedList()
    {
        head = NULL;
    }

    void traversal()
    {
        if (head == NULL)
            cout << "List is Empty !!";
        else
        {
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->link;
            }
            cout<<"\n";
        }
    }

    void InsertAtEnd(int data)
    {
        Node *ptr = new Node();
        ptr->data = data;
        if (head == NULL)
        {
            head = ptr;
            ptr->link = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = ptr;
            ptr->link = NULL;
        }
    }
    void removeDupliactes()
    {
        if(head == NULL )
        {
            cout<<"\n List IS EMPTY !!!";
        }
        else if( head-> link == NULL)
            cout<<"\nNo Duplicate Present";
        else
        {
            Node *p1,*p2;
            p1=head; p2= head->link;
            while(p2 != NULL)
            {
               if(p1->data == p2->data)
               {
                    p1->link = p2->link;
                    delete p2;
                    p2 = p1->link;
               }
               else
               {
                    p1 = p2;
                    p2 = p1 ->link;
               }
               
            }
            traversal();
        }
                
    }
   

};

int main()
{
    SingleLinkedList obj;
    obj.InsertAtEnd(1);
    obj.InsertAtEnd(1);
    obj.InsertAtEnd(2);
    obj.InsertAtEnd(2);
    obj.InsertAtEnd(2);
    obj.InsertAtEnd(2);
    obj.InsertAtEnd(3);
    obj.InsertAtEnd(3);
    obj.InsertAtEnd(3);
    obj.InsertAtEnd(4);
    obj.InsertAtEnd(4);
    obj.InsertAtEnd(5);

    obj.traversal();
    obj.removeDupliactes();
    return 0;
}