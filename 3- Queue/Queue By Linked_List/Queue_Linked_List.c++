#include "Queue_Linked_List.h"
template <class T>
Queue_Linked_List<T>::Queue_Linked_List() : front(NULL), rear(NULL), size(0) {}

template <class T>
bool Queue_Linked_List<T>::Is_Empty()
{
    return size == 0;
}

template <class T>
int Queue_Linked_List<T>::Size()
{
    return size;
}

template <class T>
void Queue_Linked_List<T>::EnQueue(T New_Item)
{
    Node *New_Node = new Node;
    New_Node->data = New_Item;
    New_Node->next = NULL;
    +

        if (front == NULL)
            rear = front = New_Node;
    else
    {
        rear->next = New_Node;
        rear = New_Node;
    }

    size++;
}

template <class T>
void Queue_Linked_List<T>::DeQueue(T &item)
{
    if (front == NULL)
    {
        item = NULL;
        return;
    }

    Node *Tmp = front;
    item = front->data;

    front = front->next;
    delete Tmp;

    if (front == NULL)
        rear = NULL;
    size--;
}

template <class T>
T Queue_Linked_List<T>::Peek()
{
    if (front == NULL)
        return NULL;
    return front->data;
}

template <class T>
void Queue_Linked_List<T>::Display()
{
    Node *Tmp = front;
    cout << "[ ";
    while (Tmp != NULL)
    {
        cout << Tmp->data;
        cout << (Tmp->next == NULL ? "" : " , ");
        Tmp = Tmp->next;
    }
    cout << " ]\n";
}
