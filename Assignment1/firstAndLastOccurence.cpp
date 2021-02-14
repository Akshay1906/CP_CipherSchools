#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n ,int tosearch)
{
    int start=0 , end=n-1 ,index=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(arr[mid] >= tosearch)
            end = mid-1;
        else
            start = mid+1;
        if(arr[mid]==tosearch)
            index = mid;
    }
    return index;
}
int last(int arr[],int n ,int tosearch)
{
    int start=0 , end=n-1 ,index=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(arr[mid] <= tosearch)
            start = mid+1;
        else
            end = end-1;
        if(arr[mid]==tosearch)
            index=mid;
    }
    return index;
}

int main()
{
    int n,tosearch;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"Enter the element to search :: ";
    cin>>tosearch;   
    cout<<"\nFirst Position::"<<first(arr,n,tosearch)<<endl;
    cout<<"Last Position::"<<last(arr,n,tosearch)<<endl;
    return 0;
}