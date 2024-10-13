#include <bits/stdc++.h>
using namespace std;

// Return Type Recursive Function
// T.C = O(b) & S.C = O(b) stack frame
// if we go for iterative sol than T.C = O(b) but S.C = O(1)
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    cout << "Enter the Value of (a & b) to Calculate a^b : ";
    cin >> a >> b;
    cout << power(a, b);
}