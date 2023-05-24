#include <iostream>
using namespace std;

template <class T>
void Insertion_Sort(T arr[], int length)
{
    int i, j;
    T key;
    for (i = 1; i < length; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
