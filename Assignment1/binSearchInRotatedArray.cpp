#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>arr[low])		//Left half sorted 
		{
			if(x >= arr[low] && x < arr[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		else						//Right half sorted
		{
			if(x > arr[mid] && x <= arr[high])
				low=mid+1;	
			else 
				high=mid-1;	
		}
	}	
	return -1;
}



int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	cout<<"\nEnter the elements::";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"\nEnter the value to search::";
	cin>>x;
	cout<<"\nOUTPUT:: "<<search(arr,n,x);
	return 0;
}
