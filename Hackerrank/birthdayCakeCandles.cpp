// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int mx = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mx = max(mx, arr[i]);
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == mx)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int c, n, max = 0;
    cin.ignore();
    while (cin >> n)
    {
        max < n ? c = !!(max = n) : c += max == n;
    }
    cout << c;
    return 0;
}
