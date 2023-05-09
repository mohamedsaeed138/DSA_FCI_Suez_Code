#include <iostream>
using namespace std;

template <class T>
void Merge(T arr[], int left, int middle, int right) // middle = left + (right - left) / 2;
{
    int i = 0, j = 0, k = left;

    int left_length = middle - left + 1; // First sub array is arr[left..middle]
    int right_length = right - middle;   // Second sub array is arr[middle+1..right]
    T *left_sub_array = new T[left_length];
    T *right_sub_array = new T[right_length];

    for (int c = 0; c < left_length; c++)
        left_sub_array[c] = arr[left + c];

    for (int c = 0; c < right_length; c++)
        right_sub_array[c] = arr[middle + 1 + c];

    while (i < left_length && j < right_length)
    {
        if (left_sub_array[i] <= right_sub_array[j])

            arr[k++] = left_sub_array[i++];

        else

            arr[k++] = right_sub_array[j++];
    }

    while (i < left_length)

        arr[k++] = left_sub_array[i++];

    while (j < right_length)

        arr[k++] = right_sub_array[j++];

    delete[] left_sub_array;
    delete[] right_sub_array;
}