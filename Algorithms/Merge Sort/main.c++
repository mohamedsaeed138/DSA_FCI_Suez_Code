#include "Merge Sort.c++"
#include "Print.c++"

int main()
{
    int s[] = {51, -2, 1, 443,-10, 1432};
    int length = sizeof(s) / sizeof(s[0]);

    Print(s, length);

    Merge_Sort(s,0, length-1);

    Print(s, length);
}
