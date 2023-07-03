#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num < 38)
        {
            cout << num << endl;
        }

        else
        {
            int mult = num / 5;
            int rem = num % 5;
            num = (5 - rem) > 2 ? num : (mult + 1) * 5;
            cout << num << endl;
        }
    }
    return 0;
}