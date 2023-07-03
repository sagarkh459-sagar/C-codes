#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p[5];
    for (int i = 0; i < 5; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        p[i].first = n;
        p[i].second = s;
    }
    // cout << p.first << " " << p.second << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    swap(p[2], p[4]);

    for (int i = 0; i < 5; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    pair<int, string> p1[5] = p;

    for (int i = 0; i < 5; i++)
    {
        cout << p1[i].first << " " << p1[i].second << endl;
    }
    return 0;
}