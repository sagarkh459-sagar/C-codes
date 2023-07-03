#include <bits/stdc++.h>
using namespace std;

int pairs(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i < j && (arr[i] + arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << pairs(arr, n, k) << endl;
    return 0;
}