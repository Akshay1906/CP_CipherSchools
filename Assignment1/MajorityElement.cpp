#include<iostream>
using namespace std;
int majority(int arr[],int n)
{
    int count;

        for(int i=0;i<n;i++)
        {
            count=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            if(count>n/2)
                return i;
        }
        return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k = majority(arr,n);
    if(k==-1)
        cout<<"No MAjority Exist !!";
    else
        cout<<"Majority Exist is :: "<<arr[k];
    return 0;
}
