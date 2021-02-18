#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        this->head = NULL;
    }

    

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = newNode;
        }
    }

    void printList()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->link;
        }
        cout << "\n";
    }

};

Node *addTwo(Node *a, Node *b)
{
    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;

    Node dummy;
    Node *result = &dummy, *ptr1 = a, *ptr2 = b;
    int carry = 0, sum = 0;
    while (ptr1 != NULL || ptr2 != NULL)
    {
        sum = carry + (ptr1 != NULL ? ptr1->data : 0) + (ptr2 != NULL ? ptr2->data : 0);
        carry = sum / 10;
        sum %= 10;
        result->link = new Node(sum);
        result = result->link;

        if (ptr1 != NULL)
        {
            ptr1 = ptr1->link;
        }

        if (ptr2 != NULL)
        {
            ptr2 = ptr2->link;
        }
    }

    if (carry > 0)
    {
        result->link = new Node(carry);
    }

    return dummy.link;
}

int main()
{
    SinglyLinkedList a, b;
    a.insertAtEnd(7);
    a.insertAtEnd(5);
    a.insertAtEnd(9);
    a.insertAtEnd(4);
    a.insertAtEnd(6);
    

    b.insertAtEnd(8);
    b.insertAtEnd(4);
    SinglyLinkedList c;
    c.head = addTwo(a.head, b.head);
    c.printList();
    return 0;
}