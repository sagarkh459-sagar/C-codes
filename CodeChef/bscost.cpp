#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> n >> x >> y;
        string str;
        cin >> str;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count1++;//0
            }
            else
            {
                count2++;//1
            }
        }
        if(count1==n||count2==n)
        {
            cout<<0<<endl;
            continue;
        }
        int ans = x > y ? y : x;
        cout << ans << endl;
    }
    return 0;
}