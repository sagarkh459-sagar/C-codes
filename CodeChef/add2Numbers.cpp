#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int a[T], b[T];
    for (int i = 0; i < T; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < T; i++)
    {
        cout << a[i] + b[i] << endl;
    }

    return 0;
}