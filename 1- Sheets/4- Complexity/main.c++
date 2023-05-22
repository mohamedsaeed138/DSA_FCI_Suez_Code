#include "Selection Sort.c++"
#include "Bubble Sort.c++"
#include "Insertion Sort.c++"
#include <time.h>

const int length = 10000; // array's length
int main()
{
     int arr_1[length]; // will be sorted by selection sort
     int arr_2[length]; // will be sorted by bubble sort
     int arr_3[length]; // will be sorted by Insertion sort

     clock_t start, end; // to record time

     srand(time(0)); // initialize seed

     for (int i = 0; i < length; i++)
          arr_1[i] = arr_2[i] = arr_3[i] = rand(); // to assign arr values with random numbers

     start = clock();
     Selection_Sort<int>(arr_1, length);
     end = clock();

     cout << "Selection Sort with arr contains "
          << length << " element took : " << double(end - start) << " millisecond\n";

     start = clock();
     Bubble_Sort(arr_2, length);
     end = clock();

     cout << "Bubble Sort with arr contains "
          << length << " element took : " << double(end - start) << " millisecond\n";

     start = clock();
     Insertion_Sort(arr_3, length);
     end = clock();

     cout << "Insertion Sort with arr contains "
          << length << " element took : " << double(end - start) << " millisecond\n";
}
