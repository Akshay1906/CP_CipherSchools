#include<iostream>
#include<math.h>
using namespace std;
int segregate(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    return j;
}
int smallestPositiveMissing(int arr[],int n)
{
    int start=segregate(arr,n);
    int temp[n],tempSize=0;
    for(int i=1,j=start;j<=n;i++)
    {
         temp[i]=arr[j];
         j++;
         tempSize++;
    }
    /*cout<<"TempSize::"<<tempSize<<endl;
    cout<<"After segregation::"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"Temp Array::";
    for(int i=1;i<tempSize;i++)
        cout<<temp[i]<<" ";*/

    for(int i=1;i<tempSize;i++)
    {
        if( (abs(temp[i])<tempSize) && (temp[abs(temp[i])] > 0) )
            temp[abs(temp[i])]=temp[abs(temp[i])]*-1;

    }
    //cout<<"Mul"<<endl;

   //for(int i=1;i<tempSize;i++)
    //cout<<temp[i]<<" ";
   for(int i=1;i<tempSize;i++)
       if(temp[i]>0)
            return i;

    return tempSize;
}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Missing::"<<smallestPositiveMissing(arr,n);
    return 0;
}
