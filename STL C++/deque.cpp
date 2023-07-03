//! Means in this we apply Push and Pop operation from both beginning and ending side.
//! Dynamic memory allocation
//! Random access possible

#include <iostream>
#include <deque> //? Deque library
using namespace std;

int main()
{

    deque<int> d;
    cout << "We are inserting elements" << endl;
    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "We are Removing elements" << endl;
    d.pop_back();
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // Now other operations (add more elements)
    d.push_back(4);
    d.push_back(3);
    d.push_front(9);
    d.push_front(7);

    cout << "Element at index of 2 -> " << d.at(2) << endl;
    cout << "Front element -> " << d.front() << endl;
    cout << "Back element -> " << d.back() << endl;
    cout << "array is Empty or not -> " << d.empty() << endl;
    cout << "Size of array -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size of array after erase-> " << d.size() << endl;
    return 0;
}

//? W can also apply for loop like this
// for (int i : d)
// {
//    cout<<i<<" ";
// }
//? Add #include<deque> for doubly ended library
//? To declare the array: deque<dataType> array_name;
//? To Push element in this we can use array_name.push_front(n) or array_name.push_back(n);
//? To Pop element in this we can use array_name.pop_front() or array_name.pop_back();
//? array_name.at(n) -> finds element at nth position of array;
//? To find first and last element -> .front() and .back();
//? To find array is empty or not?? -> .empty();
//? TO erase -> .erase(starting_point , ending point) { eg. d.erase(d.begin() , d.begin() + 1); }
//? Size of array : .size();
