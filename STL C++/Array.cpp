#include <iostream>
#include <array> //? Used for array STL
using namespace std;

int main()
{
    // ! int arr[5]; nrmlly we declared array by this syntax
    //? In array STL we use
    //TODO: (   array<data_type , size > array_name = {}   )

    array<int, 4> a;

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a.at(3) << endl;
    cout << "array is empty: " << a.empty() << endl;
    cout << "First element of array: " << a.front() << endl;
    cout << "Last element of array: " << a.back() << endl;

    return 0;
}
//* array_name.size() -> Shows array size;
//* array_name.at(n) -> Shows element at position n;
//* array_name.front() -> Shows 1st element of array;
//* array_name.back() -> Shows last element of array;
//* array_name.empty() -> show boolean value; 
