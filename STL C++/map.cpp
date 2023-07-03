#include <bits/stdc++.h>
using namespace std;

//! map presents key
//? ek ki ek hi value
//? 2 ki same value ho sktii hai

int main()
{
    map<int, string> s;

    s[1] = "sagar";
    s[45] = "Trading";
    s[2] = "Khandelwal";
    s.insert({4, "Trading is love"});

    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << s.count(23) << endl; // show if 23 is present or not

    // to erase
    cout << "after erasing the data" << endl;
    s.erase(45);
    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = s.find(2);
    for (auto i = it; i != s.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}