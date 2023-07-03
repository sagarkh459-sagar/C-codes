#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k1, k2;
    int j1, j2;
    cin >> k1 >> j1 >> k2 >> j2;

    if (k1 < k2 && j1 < j2)
    {
        cout << "NO" << endl;
        return 0;
    }
    // int s1 = k1;
    // int s2 = k2;

    while (k1 < k2)
    {
        k1 = k1 + j1;
        k2 = k2 + j2;
        if (k1 == k2)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}