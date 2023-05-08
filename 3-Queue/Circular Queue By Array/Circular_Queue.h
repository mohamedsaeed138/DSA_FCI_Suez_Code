#include <iostream>
#include <string>

using namespace std;
const int Max_Size = 100;

template <class T>
class Circular_Queue
{
    int front;

    int rear;

    int size;

    T array[Max_Size];

public:
    Circular_Queue();

    bool Is_Empty();

    int Size();

    bool Is_Full();

    void EnQueue(T);

    void DeQueue(T &);

    T Peek();

    void Display();
};
