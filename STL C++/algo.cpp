#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(10);

    cout << "Binary search: " << binary_search(v.begin(), v.end(), 6) << endl;
    
    
    return 0;
}