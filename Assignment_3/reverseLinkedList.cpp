#include<bits/stdc++.h>
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

   /* void reverse()     //iterative function for reverse//
    {
        if(head == NULL)
        {
            cout<<"List is EMPTY !!!"<<endl;
            return ;
        }
        if(head -> link == NULL)
            return ;
        else
        {
            Node *curr , *next , *prev;
            curr = head;
            next = prev =NULL;

            while( curr != NULL)
            {
                next = curr -> link;
                curr -> link = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
        }
    }*/

    void reverseUtility()
    {
        recursiveReverse(head);
    }

    Node* recursiveReverse(Node *node)
    {
        if( node == NULL)
            return NULL;
        if(node -> link == NULL)
        {
            head = node;
            return node;
        }
        Node *ptr = recursiveReverse(node->link);
        ptr ->link = node;
        node -> link = NULL;
        return node;
    }

};

int main()
{
    SingleLinkedList obj;

    for(int i =1; i <= 10; i++)
    {
        obj.InsertAtEnd(i);
    }
    obj.traversal();
    //obj.reverse();
    cout<<"\nAfter Reversal::";
    obj.reverseUtility();
    //checking reverse LL traversal

    
    cout<<"\nWORKING FINE....";
    obj.traversal();
    
    return 0;
}