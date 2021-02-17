#include <iostream>
using namespace std;

int pathCount(int m, int n){
   if (m == 1 || n == 1)
      return 1;
   return pathCount(m - 1, n) + pathCount(m, n - 1);
}
int main(){
   cout << pathCount(4,5);
   return 0;
}