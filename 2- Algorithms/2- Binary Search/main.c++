#include "Binary Search.c++"
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int length = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout << "Enter an Integer : ";
    cin >> num;

    int result = Binary_Search(arr, 0, length, num);

    (result == -1) ? cout << "The value " << num << " is not found .\n"
                   : cout << "The value " << num
                          << " is found at the index " << result << " .\n";
}
