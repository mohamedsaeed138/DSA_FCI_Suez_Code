#include <iostream>
using namespace std;

template <class T>
void Selection_Sort(T array[], int length)
{
    int min_value_index;

    for (int i = 0; i < length - 1; i++) // i < length - 1 /*to not iterate on the last index*/
    {
        min_value_index = i;

        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[min_value_index])
                min_value_index = j;
        }
        swap(array[min_value_index], array[i]);
    }
}
