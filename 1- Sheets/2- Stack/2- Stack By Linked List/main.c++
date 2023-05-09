#include <iostream>
#include "Stack_Linked_List.c++"
using namespace std;

int main()
{
    Stack_Linked_List<int> s;
    cout << s.Is_Empty() << endl; // 1

    s.Push(10);
    s.Push(15);
    s.Push(19);

    cout << s.Count() << endl; // 3
    s.Display();               //[ 19 , 15 , 10]

    int c = s.Peek();
    cout << c << endl; // 19

    int f = s.Pop();
    cout << f << endl;         // 19
    s.Display();               //[ 15 , 10 ]
    cout << s.Count() << endl; // 2
}
