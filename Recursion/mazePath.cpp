#include <bits/stdc++.h>
using namespace std;

int mazeWays(int sr, int sc, int er, int ec)
{
    // Escaped the matrix
    if (sr > er || sc > ec)
    {
        return 0;
    }
    // Reached the Destination
    if (sr == er && sc == ec)
    {
        return 1;
    }
    int rightWays = mazeWays(sr, sc + 1, er, ec);
    int downWays = mazeWays(sr + 1, sc, er, ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int mazeWay2(int row, int col)
{
    if (row < 1 || col < 1)
    {
        return 0;
    }
    if (row == 1 && col == 1)
    {
        return 1;
    }
    // Right direction
    int rightway = mazeWay2(row, col - 1);
    // Down direction
    int downway = mazeWay2(row - 1, col);
    int totalway = rightway + downway;
    return totalway;
}

void mazePath(int sr, int sc, int er, int ec, string path)
{
    if (sr > er || sc > ec)
    {
        return;
    }
    if (sr == er && sc == ec)
    {
        cout << path << endl;
        return;
    }
    // RightWays
    mazePath(sr, sc + 1, er, ec, path + "R");
    // DownWays
    mazePath(sr + 1, sc, er, ec, path + "D");
}

void mazePath2(int row, int col, string path)
{
    if (row < 1 || col < 1)
    {
        return;
    }
    if (row == 1 && col == 1)
    {
        cout << path << endl;
        return;
    }
    // Right Direction
    mazePath2(row, col - 1, path + "R");
    // Left Direction
    mazePath2(row - 1, col, path + "D");
}
int main()
{
    cout << mazeWays(0, 0, 2, 2) << endl;
    cout << mazeWay2(3, 4) << endl;
    mazePath(0, 0, 2, 2, "");
    cout << endl;
    mazePath2(3, 3, "");
}