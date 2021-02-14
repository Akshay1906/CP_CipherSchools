#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
//--> Time Complexity-O(n)
int findPeak(int arr[], int n)
{
    if(n==1)
        return arr[0];
    if(arr[0]>arr[1])
        return arr[0];
    if(arr[n-1] > arr[n-2])
        return arr[n-1];
    
    for(int i=1;i<n-1;i++)
    {
    
        
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
            return arr[i];
        
    }
    return -1;
}

//OPTIMIZED METHOD
//--> Time Complexity-O(logn)
int findPeak(int arr[], int n)    
{
     int start=0,end=n-1;
        
        while(start<=end)
        {
            int mid = (start+end)/2;
            if( (mid==0 || arr[mid] >  arr[mid-1]) && (mid==n-1 || arr[mid]> arr[mid+1]) )
                return arr[mid];
            else if( mid> 0 && arr[mid-1] > arr[mid] )
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
         
    
}
//Driver Program
int main()
{
    int n;
    cout<<"Enter n::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int k = findPeak(arr,n);
    if(k==-1)
        cout<<"NO peak found";
    else    
        cout<<"Peak Element is ::"<<k;
    return 0; 
}