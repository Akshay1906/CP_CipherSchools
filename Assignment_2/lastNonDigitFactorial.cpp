 
#include<bits/stdc++.h> 
using namespace std; 
  

int digits[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8}; 
  
int lastNonZeroDigit(int n) 
{ 
     if (n < 10) 
        return digits[n]; 
  
    
    if (((n/10)%10)%2 == 0) 
        return (6*lastNonZeroDigit(n/5)*digits[n%10]) % 10; 
    else
        return (4*lastNonZeroDigit(n/5)*digits[n%10]) % 10; 
} 
  

int main() 
{ 
    int n = 14; 
    cout << lastNonZeroDigit(n); 
    return 0; 
} 