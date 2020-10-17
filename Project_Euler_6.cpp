#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        cin >> n;
        cout << (n * (n + 1) * (3 * n * n - n - 2) / 12) << endl;
    }
    return 0;
}
