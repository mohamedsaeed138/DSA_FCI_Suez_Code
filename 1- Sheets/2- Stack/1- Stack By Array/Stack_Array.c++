#include "Stack_Array.h"

template <class T>
Stack_Array<T>::Stack_Array() : top(-1) {}

template <class T>
bool Stack_Array<T>::Is_Empty()
{
    return top == -1;
}

template <class T>
bool Stack_Array<T>::Stack_Full()
{
    return top == Max_Size - 1;
}

template <class T>
int Stack_Array<T>::Count()
{
    return top + 1;
}

template <class T>
void Stack_Array<T>::Push(T New_Item)
{
    if (top == Max_Size - 1) // top :0->99
        throw exception();   // error : The Stack_Array is Full !
    else
        items[++top] = New_Item;
}

template <class T>
T Stack_Array<T>::Pop()
{
    if (top == -1)
        throw exception(); // error: The Stack_Array Is Empty.
    else
        return items[top--];
}

template <class T>
T Stack_Array<T>::Peek()
{
    if (top == -1)
        throw exception(); // error: The Stack_Array Is Empty.

    else
        return items[top];
}

template <class T>
void Stack_Array<T>::Display()
{

    cout << "[ ";

    for (int i = top; i > -1; i--)
    {
        cout << items[i] << (i == 0 ? "" : " , ");
    }

    cout << " ]" << endl;
}