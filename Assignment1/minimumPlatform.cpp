#include<bits/stdc++.h>

using namespace std;
 
// Returns minimum number of platforms reqquired
int minimumPlatform(int arr[], int dep[], int n)
{
   
    sort(arr, arr + n);
    sort(dep, dep + n);
    int minimum_need = 1, result = 1;
    int i = 1, j = 0;
 
    
    while (i < n && j < n) {
       
        
        if (arr[i] <= dep[j]) {
            minimum_need++;
            i++;
        }
 
       
        else if (arr[i] > dep[j]) {
            minimum_need--;
            j++;
        }
 
        
        if (minimum_need > result)
            result = minimum_need;
    }
 
    return result;
}
 

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << minimumPlatform(arr, dep, n);
    return 0;
}