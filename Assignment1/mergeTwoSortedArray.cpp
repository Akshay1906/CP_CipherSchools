#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int merge_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
    int i,j;
    for(i = 0; i < m; i++)
        arr3[i] = arr1[i];
    
    for(i = m, j = 0 ; i < m + n; i++, j++)
        rr3[i] = arr2[j];
    

}
int main()
{
    int n,m;
    cout << "\nEnter the size of Array 1 : ";
    cin >> m;
    cout << "\nEnter the size of Array 2 : ";
    cin >> n;
    int arr1[m], arr2[n];
    int arr3[m + n];
    int i;
    cout << "\nInput the Array 1 elements : ";
    for (i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "\nInput the Array 2 elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    merge_arrays(arr1, arr2, arr3, m, n);
    cout << "\nThe Merged Sorted Array : ";
    sort(arr3, arr3 + (m + n));
    for (i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}