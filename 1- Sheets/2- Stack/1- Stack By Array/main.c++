#include <iostream>
#include "Stack_Array.c++"

int main()
{
    Stack_Array<int> s;

    cout << s.Is_Empty() << endl; // 1
    s.Push(10);
    s.Push(15);
    s.Push(19);

    cout << s.Count() << endl; // 3
    s.Display();               //[ 19 , 15 , 10]

    int c = s.Peek();
    cout << c << endl; // 19

    int f = s.Pop();
    cout << f << endl; // 19

    s.Display();               //[ 15 , 10 ]
    cout << s.Count() << endl; // 2

    while (!s.Stack_Full())
    {
        s.Push(1);
    }

    cout << s.Count() << endl;      // 100
    cout << s.Stack_Full() << endl; // 1

    try
    {
        s.Push(1); // error stack_array is full
    }
    catch (exception)
    {
        cout << "The Stack is Full !\n";
    }
    s.Pop();
    cout << s.Count() << endl; // 99
}
