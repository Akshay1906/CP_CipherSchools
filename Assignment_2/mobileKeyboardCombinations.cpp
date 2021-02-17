#include <bits/stdc++.h>
using namespace std;

char *pattern[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
char *input;
char *patt;
int size;

void print(char *str, int k, char *patt, int i)
{
    if (str[k] != '\0')
    {
        int x = str[k] - '0';
        x = x - 2;
        for (int l = 0; l < 3; l++)
        {
            patt[i] = pattern[k][l];
            print(str, k + 1, patt, i + 1);
        }
        cout << endl;
    }
    else if (i == k)
    {
        printf("%s\n", patt);
        return;
    }
}

int main()
{
    input = new char[25];
    cout << "Enter the input string\n";
    cin >> input;
    size = sizeof(input);
    patt = new char[size];
    print(input, 0, patt, 0);
    return 0;
}