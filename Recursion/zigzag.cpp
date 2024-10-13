#include <bits/stdc++.h>
using namespace std;

void zigzag(int n)
{
    if (n == 0)
    {
        return;
    }
    // pre
    cout << n;
    // call
    zigzag(n - 1);
    // in
    cout << n;
    // call
    zigzag(n - 1);
    // post
    cout << n;
}

int main()
{
    int n;
    cin >> n;
    zigzag(n);
}