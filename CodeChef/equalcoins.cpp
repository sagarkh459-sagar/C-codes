#include <>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        if ((x + y*2) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}