#include <bits/stdc++.h>
using namespace std;

int stairPath(int n)
{
    // Base Case
    /*
        No of ways for 1 stair :
        i)  1
    */
    if (n == 1)
    {
        return 1;
    }
    /*
        No of ways for 2 stair :
        i)  1 1
        ii) 2
    */
    if (n == 2)
    {
        return 2;
    }

    /*
        Formula :
            stair(n) = stair(n-1) + stair(n-2)
    */
    return stairPath(n - 1) + stairPath(n - 2);
}

int main()
{
    int n;
    cout << "Enter the Stair Numbers : ";
    cin >> n;
    cout << stairPath(n) << endl;
}