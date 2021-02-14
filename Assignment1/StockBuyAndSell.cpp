#include<iostream>
using namespace std;
int maxProfit(int arr[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            profit+=arr[i]-arr[i-1];
    }
    return profit;
}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Max Profit::"<<maxProfit(arr,n);
    return 0;
}
