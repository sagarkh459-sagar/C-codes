#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    int noteat = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != k)
        {
            noteat += arr[i];
        }
    }
    int bcharged;
    cin >> bcharged;
    int bactual = noteat/2;

    if (bcharged == bactual)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << bcharged - bactual << endl;
    }

    return 0;
}