#include<iostream>
using namespace std;
int minSubArray(int arr[],int n)
{
    int sum=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=min(curr+arr[i],arr[i]);
        sum=min(curr,sum);
    }
    return sum;
}
int maxSubArray(int arr[],int n)
{
    int res=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=max(curr+arr[i],arr[i]);
        res=max(res,curr);
    }
    return res;
}


int maxCircularSubArray(int arr[],int num)
{
  int total=0;
  for(int i=0;i<num;i++)
    total=total+arr[i];

  if(num==1)
    return total;

  int max_sub=maxSubArray(arr,num);
  int min_sub=minSubArray(arr,num);
  int maxCircular=total-min_sub;
  if(total==min_sub)
    return max_sub;

  return max(maxCircular,max_sub);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<maxCircularSubArray(arr,n);

    return 0;
}
