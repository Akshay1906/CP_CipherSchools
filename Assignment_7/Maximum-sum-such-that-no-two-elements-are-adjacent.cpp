#include<stdio.h> 
  
int MaxSum(int arr[], int n) 
{ 
  int incl = arr[0]; 
  int excl = 0; 
  int excl_new; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     excl_new = (incl > excl)? incl: excl; 
  
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
  
   return ((incl > excl)? incl : excl); 
} 
  
int main() 
{ 
  int arr[] = {5, 5, 10, 100, 10, 5}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  cout<<MaxSum(arr, n); 
  return 0; 
} 
