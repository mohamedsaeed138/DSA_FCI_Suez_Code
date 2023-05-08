#include <iostream>
using namespace std;

/// @brief Print array in the form [x,y,z]
/// @tparam T
/// @param array
/// @param length array's length
template <class T>
void Print(T array[], int length)
{
    cout << "[ ";

    for (int i = 0; i < length; i++)
    {
        cout << array[i];
        cout << (i == length - 1 ? "" : " , ");
    }
    cout << " ]\n";
}
