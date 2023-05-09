#include <iostream>
using namespace std;

const int Max_Size = 100;

template <class T>
class Stack_Array
{
private:
    int top;
    T items[Max_Size];

public:
    Stack_Array();

    bool Is_Empty();

    bool Stack_Full();

    int Count();

    void Push(T);

    T Pop();

    T Peek();

    void Display();
};
