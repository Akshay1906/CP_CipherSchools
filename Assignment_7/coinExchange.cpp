

#include<bits/stc++.h> 
using namespace std;  

int count( int S[], int m, int n ) 
{ 
    
    if (n == 0) 
        return 1; 
      
   
    if (n < 0) 
        return 0; 
  
    if (m <=0 && n >= 1) 
        return 0; 
  return count( S, m - 1, n ) + count( S, m, n-S[m-1] ); 
} 
  

int main() 
{ 
    int i, j; 
    int arr[5] = {1,2,3,4,5};
    count(arr , 5 , 3);
    return 0; 
} 
