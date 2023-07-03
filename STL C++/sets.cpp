//! All elements are unique
//! no modification in element -> delete or save as at is
//! we get elements in sorted order
//! set is slower than unordered set
//! in unordered we didnt get element in sorted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(45); // time complexity = O(log n)
    s.insert(45);
    s.insert(65);
    s.insert(54);
    s.insert(34);

    for (auto i : s)
    {
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << "Erased begin" << endl;
    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << s.count(3); // checks whether 3 is available or not

    set<int>::iterator itr = s.find(5);
    cout << *itr << endl;

    return 0;
}