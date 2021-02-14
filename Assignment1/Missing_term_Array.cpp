#include<iostream>
using namespace std;
int findMiss(int ar[],int N)
{
    int res=0;
    int temp1=0,temp2=1;
    for(int i=1;i<=N;i++)
    {

        temp1=temp1^ar[i];
        temp2=temp2^i+1;
    }
    res=temp1^temp2;
    return res;
}
int main()
{
    int arr[50],n;
    cout<<"How many elements you want to enter::";
    cin>>n;
    cout<<"\nEnter the elements::";
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    cout<<"Missing term::"<<findMiss(arr,n);
    return 0;
}
