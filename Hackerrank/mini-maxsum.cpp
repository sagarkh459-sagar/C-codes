#include <bits/stdc++.h>
using namespace std;

int main()
{

    int64_t arr[5];
    int64_t maxi = -19999;
    int64_t mini = 19999;
    int64_t sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        maxi=max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    cout << sum - mini << " " << sum - maxi << endl;

    return 0;
}