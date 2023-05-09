#include "Quick Sort.c++"
#include "Print.c++"

int main()
{
    int arr[] = {51, -2, 1, 443, 1432};
    int length = sizeof(arr) / sizeof(arr[0]);

    Print(arr, length);

    Quick_Sort(arr,0, length-1);

    Print(arr, length);
}
