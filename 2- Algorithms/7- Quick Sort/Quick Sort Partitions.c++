#include <iostream>
using namespace std;

template <class T>
int Partition(T arr[], int low, int high)
{
    T pivot = arr[high]; // pivot equals the last element of sub array

    int i = low - 1;

    for (int j = low, pass = 1; j < high; j++, pass++)
    {

        if (arr[j] <= pivot)
        {
            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}
// i: will be the last index that has has value less than the pivot
