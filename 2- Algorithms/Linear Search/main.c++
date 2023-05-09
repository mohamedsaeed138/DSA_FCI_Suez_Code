#include "Linear Search.c++"

int main()
{
    int arr[] = {90, 10, 40, 70, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout << "Enter an Integer : ";
    cin >> num;

    int result = Linear_Search<int>(arr, length, num);

    (result == -1) ? cout << "The value " << num << " is not found .\n"
                   : cout << "The value " << num << " is found at the index " << result << " .\n";
}
