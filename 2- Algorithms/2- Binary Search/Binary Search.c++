#include <iostream>
using namespace std;

template <class T>
int Binary_Search(T arr[], int low, int high, T key)
{
	while (low <= high)
	{

		int middle = low + (high - low) / 2; // or=>middle = (low + high) / 2 or=> middle = (2 low + high -low)/2

		if (arr[middle] == key)

			return middle;

		if (arr[middle] > key)

			high = middle - 1;

		else

			low = middle + 1;
	}

	return -1;
}

template <class T>
int Binary_Search_Rec(T arr[], int low, int high, T key)
{
	if (low > high)
		return -1;

	int middle = low + (high - low) / 2;

	if (arr[middle] == key)
		return middle;

	if (arr[middle] > key)
		return Binary_Search_Rec(arr, low, middle - 1, key);

	return Binary_Search_Rec(arr, middle + 1, high, key);
}