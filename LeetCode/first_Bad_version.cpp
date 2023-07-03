#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int bad;
        cin >> bad;
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            v.push_back(i);
        }
        int ans = -1;
        int s = 0;
        int e = n;
        while (s < e)
        {
            int mid = (s + e) / 2;

            if (isBadVersion(mid))
            {
                ans = mid;
                break;
            }

            if (bad > mid)
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        return ans;
    }
};
