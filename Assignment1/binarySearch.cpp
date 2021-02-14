#include<iostream>
using namespace std;
int binarySearch(int arr[],int n)
{
    int X;
    cout<<"\nEnter the element to search:::";
    cin>>X;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==X)
            return mid;
        else if(arr[mid]<X)
            start=mid+1;
        else if(arr[mid]>X)
            end=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<"\nEnter the elements::";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k = binarySearch(arr,n);
    if(k>=0)
        cout<<"\nElement present at "<<k<<" index";
    else
        cout<<"\nNot PRESENT";
    return 0;
}
