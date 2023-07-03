#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        int arr[s.length()];
        for (int i = 0; i < s.length(); i++)
        {
            arr[i] = s[i] - '0';
        }

        cout << arr[0] + arr[s.length() - 1] << endl;
    }
    return 0;
}
