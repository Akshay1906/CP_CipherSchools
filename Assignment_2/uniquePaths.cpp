#include <bits/stdc++.h>
using namespace std;

long long fact(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    else
    {
        long long res = 1;
        for (int i = 2; i <= N; i++)
        {
            res = res * i;
        }
        return res;
    }
}
long long UniquePaths(int R, int C)
{
    return fact(R + C - 2) / (fact(R - 1) * fact(C - 1));
}
int main()
{
    cout << UniquePaths(7, 3) << endl;
    return 0;
}