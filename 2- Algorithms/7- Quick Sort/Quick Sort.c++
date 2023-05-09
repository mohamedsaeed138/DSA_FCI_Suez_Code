#include "Quick Sort Partitions.c++"
using namespace std;

template <class T>
void Quick_Sort(T arr[], int low, int high)
{

    if (low < high)
    {
        int pivot = Partition(arr, low, high);
        Quick_Sort(arr, low, pivot - 1);
        Quick_Sort(arr, pivot + 1, high);
    }
}