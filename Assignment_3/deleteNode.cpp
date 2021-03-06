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

   

    void deleteFromBEginning()
    {
        if (head == NULL)
            cout << "\nList is already empty !!";

        else
        {
            Node *ptr = head;
            head = head->link;
            delete ptr;
            cout << "DELETED........\n";
        }
    }

    void deleteFromEnd()
    {
        if (head == NULL)
            cout << "\nList is already empty !!" << endl;

        else
        {

            if (head->link == NULL) //Single Node
            {
                head = NULL;
                return;
            }
            Node *ptr = head->link;
            Node *temp = head;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
                temp = temp->link;
            }
            temp->link = NULL;
            delete ptr;
            cout << "\nDELETION SUCCESSFULL......" << endl;
        }
    }

    void deleteAtPosition(int pos)
    {
        if (head == NULL)
        {
            cout << "LIST IS EMPTY !!!" << endl;
            return;
        }

        if (pos == 1)
        {
            deleteFromBEginning();
            return;
        }
        else
        {
            Node *p1, *p2;
            p1 = head;
            int position = 1;

            while (position < pos)
            {
                position++;
                p2 = p1;
                p1 = p1->link;
            }

            if (p1 == NULL)
            {
                cout << "\nINVALID POSITION ENTERED !!!" << endl;
                return;
            }
            else
            {
                p2->link = p1->link;
                delete p1;
                cout << "\nDELETED........" << endl;
            }
        }
    }
};

int main()
{
    SingleLinkedList obj;
    for (int i = 1; i <= 5; i++)
        obj.InsertAtEnd(i);

    cout << "\nOUTPUT LIST ::";
    obj.traversal();

   

    obj.deleteFromBEginning();
    obj.traversal();
    obj.deleteFromEnd();
    obj.traversal();
    obj.deleteAtPosition(3);
    obj.traversal();

    return 0;
}