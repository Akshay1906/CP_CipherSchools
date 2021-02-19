  
#include <bits/stdc++.h>
using namespace std;


int largestRectangleArea(vector<int> &heights)
{
    int area = 0, maxArea = 0, tp = 0, i = 0, N = heights.size();
    stack<int> S;
    while  (i < N)
    {
        if (S.empty() || heights[S.top()] <= heights[i])
            S.push(i++);
        else
        {
            tp = S.top(); S.pop();
            if (S.empty())
                area = heights[tp] * i;
            else
                area = heights[tp] * (i - S.top() - 1);

            maxArea = max(maxArea, area);
        }
    }
    while (!S.empty())
    {
        tp = heights[S.top()]; S.pop();
        if (S.empty())
            area = heights[tp] * i;
        else
            area = heights[tp] * (i - S.top() - 1);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    vector <int> arr = {2,3,5,6,7,8,9,9,8};

    cout<<"OUTPUT::"<<largestRectangleArea(arr);
    return 0;
}