#include "Insertion Sort.c++"
#include "Print.c++"

int main()
{
    int arr[] = {1432, 51, -2, 1, 443};
    int length = sizeof(arr) / sizeof(arr[0]);

    Print(arr, length); // [ 1432 , 51 , -2 , 1 , 443 ]

    Insertion_Sort(arr, length);

    Print(arr, length); // [ -2 , 1 , 51 , 443 , 1432 ]
}
