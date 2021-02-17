#include<iostream>
using namespace std;
int countZeroes(int x)
{
    int count=0;
    for(int i=5;i<=x;i=i*5)
        count=count+x/i;
    return count;
}
int main()
{
    int n;
    cout<<"\nEnter the number::";
    cin>>n;
    cout<<"\nTrailing zeroes::"<<countZeroes(n);
    return 0;
}
