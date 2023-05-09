#include <iostream>
#include "Stack_Linked_List.c++"
using namespace std;

int main()
{
    Stack_Linked_List<int> stack;
    cout << "is Stack empty? -" << (stack.Is_Empty() ? "True" : "False") << endl; // 1

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
}
