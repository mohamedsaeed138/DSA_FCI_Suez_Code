#include <iostream>
#include "Stack_Array.c++"

int main()
{
    Stack_Array<int> stack;

    cout << "is Stack empty? -"
         << (stack.Is_Empty() ? "True" : "False") << endl; // -True

    stack.Push(10);
    stack.Push(15);
    stack.Push(19);

    cout << "Count : " << stack.Count() << endl; // 3
    stack.Display();                             //[ 19 , 15 , 10]

    int c = stack.Peek();
    cout << "c = " << c << endl; // 19

    int f = stack.Pop();
    cout << "f = " << f << endl; // 19

    stack.Display();                             //[ 15 , 10 ]
    cout << "Count : " << stack.Count() << endl; // 2

    while (!stack.Stack_Full())
    {
        stack.Push(1);
    }

    cout << "Count : " << stack.Count() << endl;                                   // 100
    cout << "is stack full? -" << (stack.Stack_Full() ? "True" : "False") << endl; // -False

    try
    {
        stack.Push(1); // error stack_array is full
    }
    catch (exception)
    {
        cout << "The Stack is Full !\n";
    }

    stack.Pop();
    cout << "Count : " << stack.Count() << endl; // 99
}
