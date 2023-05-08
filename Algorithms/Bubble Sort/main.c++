#include "Bubble Sort.c++"
#include "Print.c++"

int main()
{
    int arr[] = {51, -2, 1, 443, 1432};
    int length = sizeof(arr) / sizeof(arr[0]);

    Print(arr, length);

    Bubble_Sort(arr, length);

    Print(arr, length);
}
