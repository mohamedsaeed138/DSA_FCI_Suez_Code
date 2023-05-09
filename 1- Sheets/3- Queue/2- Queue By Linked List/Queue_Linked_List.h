#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue_Linked_List
{
private:
    struct Node
    {
        T data;
        Node *next;
    };
    int size;
    Node *front, *rear;

public:
    Queue_Linked_List();

    bool Is_Empty();

    int Size();

    void EnQueue(T);

    void DeQueue(T &);

    T Peek();

    void Display();
};