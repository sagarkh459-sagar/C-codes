#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int a[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a[arr[i] - 1] += 1;
    }

    int mx = a[0];
    int ans = 0;
    for (int i = 1; i < 5; i++)
    {
        int prevmx = mx;
        mx = (mx, a[i]);

        if (mx > prevmx)
        {
            ans = i;
        }
        else if (mx == prevmx)
        {
            ans = ans;
        }
    }
    cout << ans + 1 << endl;

    return 0;
}