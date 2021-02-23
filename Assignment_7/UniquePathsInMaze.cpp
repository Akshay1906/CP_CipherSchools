#include<bits/stdc++.h>
using namespace std;
#define N 4
 
bool isValidCell(int x, int y)
{
    if (x < 0 || y < 0 || x >= N || y >= N) {
        return false;
    }
 
    return true;
}
 
void countPaths(int maze[N][N], int x, int y, int visited[N][N], int& count)
{
    if (x == N - 1 && y == N - 1)
    {
        count++;
        return;
    }
 
    visited[x][y] = 1;
 
    if (isValidCell(x, y) && maze[x][y])
    {
        if (x + 1 < N && !visited[x + 1][y]) {
        }
 
        if (x - 1 >= 0 && !visited[x - 1][y]) {
            countPaths(maze, x - 1, y, visited, count);
        }
 
        if (y + 1 < N && !visited[x][y + 1]) {
            countPaths(maze, x, y + 1, visited, count);
        }
 
        if (y - 1 >= 0 && !visited[x][y - 1]) {
            countPaths(maze, x, y - 1, visited, count);
        }
    }
 
    visited[x][y] = 0;
}
 
int main()
{
    int maze[N][N] =
    {
        { 1, 1, 1, 1 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 1 },
        { 1, 1, 1, 1 }
    };
 
    int count = 0;
 
    int visited[N][N];
    memset(visited, 0, sizeof visited);
 
    countPaths(maze, 0, 0, visited, count);
 
    cout << "The total number of unique paths are " << count;
 
    return 0;
}
