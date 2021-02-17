#include<bits/stdc++.h>
using namespace std;

int factorial(int n,int k)
{
    if(n==1)
        return k;
    return factorial(n-1, n*k);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n,1)<<endl;
    return 0;
}