#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //no of pages
    int p; //page number
    cin >> n >> p;

    // from front
    int turnF = p / 2;

    // from back
    int turnB = 0;

    if (n % 2 != 0)
    {

        while (n != 0)
        {
            if (p == n || p == n - 1)
            {
                break;
            }
            n = n - 2;
            turnB++;
        }

        int ans = turnF >= turnB ? turnB : turnF;

        cout << ans << endl;

        return 0;
    }
    else
    {
        if (n == p)
        {
            cout << 0 << endl;
            return 0;
        }

        n = n - 1;

        while (n != 0)
        {
            if (p == n || p == n - 1)
            {
                turnB++;
                break;
            }
            n = n - 2;
            turnB++;
        }

        int ans = turnF >= turnB ? turnB : turnF;

        cout << ans << endl;

        return 0;
    }
}