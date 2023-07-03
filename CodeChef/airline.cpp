#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c;
        int d, e;

        cin >> a >> b >> c >> d >> e;

        if (a + b <= d && c <= e)
        {
            cout << "YES" << endl;
        }
        else if (a + c <= d && b <= e)
        {
            cout << "YES" << endl;
        }
        else if (b + c <= d && a <= e)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}