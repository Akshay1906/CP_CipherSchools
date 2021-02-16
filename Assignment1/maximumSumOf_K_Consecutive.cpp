
#include<iostream>
#include <cmath>
#include <climits>
using namespace std;
int maxSumOf_K_consec(int arr[],int n,int k)
{
    int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;

		for(int j = 0; j < k; j++)
		{
			sum += arr[i + j];
		}

		max_sum = max(max_sum, sum);
	}

	return max_sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"\nEnter k::";
    cin>>k;
    cout<<"OUTPUT::"<<maxSumOf_K_consec(arr,n,k);
    return 0;
}
