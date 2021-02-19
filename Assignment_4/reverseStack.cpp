#include<bits/stdc++.h>
using namespace std;

void insertIntoBottom(stack<int> &S, int temp)
{
    if (S.empty())
    {
        S.push(temp);
    }
    else
    {
        int temp1 = S.top();
        S.pop();
        insertIntoBottom(S, temp);
        S.push(temp1);
    }
}

void reverseStack(stack<int> &S)
{
    if (!S.empty())
    {
        int temp = S.top();
        S.pop();
        reverseStack(S);
        insertIntoBottom(S, temp);
    }
}
int main()
{
    stack<int> obj;
    for (int i = 1; i <= 10; i++)
        obj.push(i);
    reverseStack(obj);
    while (!obj.empty())
    {
        cout << obj.top() << " ";
        obj.pop();
    }
    return 0;
}