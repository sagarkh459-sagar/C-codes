#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count1 = 0;
    int high = a[0];
    int count2 = 0;
    int low = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > high && high != a[i])
        {
            count1++;
            high = a[i];
        }
        if (a[i] < low)
        {
            count2++;
            low = a[i];
        }
    }

    cout << count1 << " " << count2 << endl;
    return 0;
}