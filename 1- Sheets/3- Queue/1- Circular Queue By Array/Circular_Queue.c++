
#include "Circular_Queue.h"

template <class T>
Circular_Queue<T>::Circular_Queue() : front(0), rear(-1), size(0) {}

template <class T>
bool Circular_Queue<T>::Is_Empty()
{
    return size == 0;
}

template <class T>
bool Circular_Queue<T>::Is_Full()
{
    return size == Max_Size;
}

template <class T>
int Circular_Queue<T>::Size()
{
    return size;
}

template <class T>
void Circular_Queue<T>::EnQueue(T Element)
{
    if (Is_Full())
        throw "error : Queue is Full exception !\n"; // throw exception

    rear = (rear + 1) % Max_Size;
    array[rear] = Element;
    size++;
}

template <class T>
void Circular_Queue<T>::DeQueue(T &item)
{
    if (Is_Empty())

        throw "error : Queue is emtpy exception !\n"; // throw exception

    item = array[front];
    front = (front + 1) % Max_Size;
    size--;
}

template <class T>
T Circular_Queue<T>::Peek()
{
    if (Is_Empty())
        throw "error : Queue is emtpy exception !\n"; // throw exception

    return array[front];
}

template <class T>
void Circular_Queue<T>::Display()
{
    cout << "[ ";

    for (int i = front, j = 0; j < size; i = (i + 1) % Max_Size, j++)
    {
        cout << array[i];
        cout << (j + 1 == size ? "" : " , ");
    }

    cout << " ]\n";
}
