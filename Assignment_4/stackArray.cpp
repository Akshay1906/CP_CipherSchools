#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class Stack
{
    public:
        int top;
        int arr[MAX];

        Stack()
        {
            top=-1;
        }

        bool isEmpty()
        {
            if(top == -1)
            {
                return true;
            }
            return false;    
        }
        void push(int data)
        {
            if(top == MAX)
            {
                cout<<"\nSTACK OVERFLOW !!!!"<<endl;
            }
            else
            {
                top++;
                arr[top] = data;
                cout<<data<<" PUSHED INTO STACK"<<endl; 
            }
        }
        void pop()
        {
            if(isEmpty())
                cout<<"\nSTACK UNDERFLOW !!"<<endl;
            else
            {
                cout<<arr[top]<<" POPPED SUCCESSFULLY "<<endl;
                top--;
            }
        }

        void printStack()
        {
            for(int i=0;i<=top;i++)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
};


int main()
{
    Stack obj;
    for(int i=1;i<=10;i++)
        obj.push(i);

    obj.printStack();
    obj.push(11);
    obj.printStack();
    obj.push(12);
    return 0;
}