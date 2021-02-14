#include<bits/stdc++.h>
using namespace std;

void sort(vector <int> &arr)
{
    int ptr1 = 0, ptr2 = 0, ptr3 = arr.size() - 1;
    while (ptr2 <= ptr3)
    {
        switch (arr[ptr2])
        {
        case 0:
            swap(arr[ptr1], arr[ptr2]);
            ptr1++;
            ptr2++;
            break;
        case 1:
            ptr2++;
            break;
        case 2:
            swap(arr[ptr3], arr[ptr2]);
            ptr3--;
            break;
    
        }
    }
}


int main()
{
   vector <int> arr = {1,1,1,0,2,0,1,1,0,2};
   sort(arr);
   for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}