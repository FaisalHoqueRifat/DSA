#include <bits/stdc++.h>
using namespace std;

// T.C = O(log n) & S.C = O(log n)
int powerLog(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = powerLog(x, n / 2);
    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return x * ans * ans;
    }
}

int main()
{
    int x, n;
    cout << "Enter the value of x & n to calculate (x^n) : ";
    cin >> x >> n;
    cout << powerLog(x, n) << endl;
}