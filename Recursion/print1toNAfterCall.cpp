#include <bits/stdc++.h>
using namespace std;

void print1toNAfterCall(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    print1toNAfterCall(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print1toNAfterCall(n);
}