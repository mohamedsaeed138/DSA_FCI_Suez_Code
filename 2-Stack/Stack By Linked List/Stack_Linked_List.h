#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack_Linked_List
{
private:
    struct Node
    {
        T data;
        Node *next;
    };
    Node *top;

public:
    Stack_Linked_List();

    bool Is_Empty();

    int Count();

    void Push(T);

    T Pop();

    T Peek();

    void Display();
};
