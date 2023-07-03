#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    int a, b;
    int m, n;

    cin >> s >> t; //start and end point
    cin >> a >> b; // a= apple b= orange
    cin >> m >> n;
    int arrApple[m];
    int arrOrange[n];
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arrApple[i];
        arrApple[i] = a + arrApple[i];
        // cout << "apple" << i << "= " << arrApple[i] << endl;
        if (s <= arrApple[i] && arrApple[i] <= t)
        {
            count1++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrOrange[i];
        arrOrange[i] = b + arrOrange[i];
        // cout << "orange" << i << "= " << arrOrange[i] << endl;
        if (s <= arrOrange[i] && arrOrange[i] <= t)
        {
            count2++;
        }
    }

    cout << count1 << endl;
    cout << count2 << endl;

    return 0;
}