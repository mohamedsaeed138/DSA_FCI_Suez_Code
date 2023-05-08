#include "Insertion Sort.c++"
#include "Print.c++"

int main()
{
    int arr[] = {51, -2, 1, 443, 1432, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    Print(arr, length);

    Insertion_Sort(arr, length);

    Print(arr, length);
}
