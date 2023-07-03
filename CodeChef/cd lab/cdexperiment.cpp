#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cLines = 0, cSpace = 0, cTab = 0;
    char ch;
    FILE *fp;
    fp = fopen("cdLa.txt", "r");

    int counttab;
    for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    {
        if (ch == '.')
        {
            cLines++;
        }
        else if (ch == ' ')
        {
            cSpace++;
        }
        else if (ch = '\t')
        {
            cTab++;
        }
    }
    cTab = 2;

    cout << "Count Lines " << cLines << endl;
    cout << "Count Space " << cSpace << endl;
    cout << "Count Tab " << cTab << endl;

    return 0;
}
