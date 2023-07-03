#include <bits/stdc++.h>
using namespace std;
//? First element is greatest

//? in this after pushing all elements in queue, when we started pop back
//? 1. If we make max heap then greatest/maximum element comes out
//? 2. If we make heap then minimum element comes out

int main()
{
    // this initailisation is for max heap
    priority_queue<int> maxi;
    // this initialisation is for heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(43);
    maxi.push(56);
    maxi.push(23);
    maxi.push(27);
    cout << maxi.size() << endl;
    int n = maxi.size();
    // this initialisation is bcs the size is changes whenever we pop an element
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    return 0;
}