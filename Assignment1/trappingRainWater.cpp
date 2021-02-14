#include<bits/stdc++.h>
using namespace std;

int trap(int arr[],int n)
{
    int trap=0;
    int lmax[n],rmax[n];
    lmax[0] = arr[0];
    rmax[n-1] = arr[n-1];

    for(int i=1;i<n;i++)
        lmax[i] = max(arr[i], lmax[i-1]);
    
    for(int i=n-1;i>=0;i--)
        rmax[i] = max(arr[i], rmax[i+1]);

    for(int i=1 ;i <n-1 ; i++)
        trap = trap + (min(lmax[i],rmax[i]) - arr[i]);

    return trap; 

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<" Total water trapped ::"<<trap(arr,n);
    return 0;
}