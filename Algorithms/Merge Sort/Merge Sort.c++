#include "Merge Sort Merge.c++"

template <class T>
void Merge_Sort(T arr[], int left, int right)
{
    if (left >= right)
        return;
    int middle = left + (right - left) / 2;

    Merge_Sort(arr, left, middle);
    Merge_Sort(arr, middle + 1, right);

    Merge(arr, left, middle, right);
}
