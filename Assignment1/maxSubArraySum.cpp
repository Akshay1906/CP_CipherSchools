#include<iostream>
using namespace std;
int maxSubArray(int arr[],int n)
{
    int sum=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            sum=max(curr,sum);
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<maxSubArray(arr,n);

    return 0;
}
