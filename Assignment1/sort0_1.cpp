#include<bits/stdc++.h>
using namespace std;

void segragate(int arr[],int n)
{
    int ptr1 = 0, ptr2 = n-1;
    while(ptr1  <= ptr2)
    {
        while(arr[ptr1]==0)
            ptr1++;
        while(arr[ptr2]==1)
            ptr2--;
        
        if(ptr1 <= ptr2 )
        {
            swap(arr[ptr1],arr[ptr2]);
            ptr1++;
            ptr2--;
        }

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the 0 and 1 only::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    segragate(arr,n);
    return 0;
}