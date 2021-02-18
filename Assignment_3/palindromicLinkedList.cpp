#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *link;
};
class LL
{
public:
    Node *head;

    LL()
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
            cout << "\n";
        }
    }

    void InsertAtEnd(char data)
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
    bool isPalindromic()
    {
        if (head == NULL)
        {
            cout << "LIST IS EMPTY !!!" << endl;
           
        }
        else if (head->link == NULL)
            return true;
        else
        {
            stack<char> st;
            Node *ptr = head;
            while (ptr != NULL) //pushing elements to stack
            {
                st.push(ptr->data);
                ptr = ptr->link;
            }

            Node *temp = head;
            char ch;
            while (temp != NULL)
            {
                ch = st.top();
                st.pop();
                if (ch == temp->data)
                {
                    temp = temp->link;
                }
                else
                    return false;
            }
            return true;
        }
    }
};

int main()
{
    LL obj;
    obj.InsertAtEnd('A');
    obj.InsertAtEnd('B');
    obj.InsertAtEnd('A');
    obj.InsertAtEnd('B');
    obj.InsertAtEnd('A');
    obj.InsertAtEnd('B');
    obj.InsertAtEnd('B');
    cout<<"OUTPUT::"<<obj.isPalindromic()<<endl;

    return 0;
}