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