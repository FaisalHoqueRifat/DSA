#include <bits/stdc++.h>
using namespace std;

// Parameterized Recursion Function
void sumFrom1toNP(int sum, int n)
{
    if (n == 1)
    {
        cout << sum << endl;
        return;
    }
    sumFrom1toNP(sum + n, n - 1);
}
// Return Type Recursive Function
int sumFrom1toNR(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumFrom1toNR(n - 1);
}

int main()
{
    int n;
    cin >> n;
    // Parameterized
    cout << "Parameterized Recursive Function" << endl;
    sumFrom1toNP(1, n);
    // Return Type
    cout << "Return Type Recursive Function" << endl;
    cout << sumFrom1toNR(n);
}