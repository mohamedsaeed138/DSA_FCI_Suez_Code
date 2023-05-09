#include <iostream>
using namespace std;

template <class T>
int Linear_Search(T arr[], int length, T key)
{
	for (int i = 0; i < length; i++)

		if (arr[i] == key)
			return i;

	return -1;
}