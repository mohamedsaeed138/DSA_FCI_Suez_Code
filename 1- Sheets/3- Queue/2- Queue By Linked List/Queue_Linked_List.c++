#include "Queue_Linked_List.h"
template <class T>
Queue_Linked_List<T>::Queue_Linked_List() : front(NULL), rear(NULL), size(0) {}

template <class T>
bool Queue_Linked_List<T>::Is_Empty() { return size == 0; }

template <class T>
int Queue_Linked_List<T>::Size() { return size; }

template <class T>
void Queue_Linked_List<T>::EnQueue(T value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    if (front == NULL)
        rear = front = new_node;
    else
    {
        rear->next = new_node;
        rear = new_node;
    }

    size++;
}

template <class T>
void Queue_Linked_List<T>::DeQueue(T &variable)
{
    if (front == NULL)
        throw "error : Queue is emtpy exception !\n"; // throw exception

    Node *tmp = front;
    variable = front->data;

    front = front->next;
    delete tmp;

    if (front == NULL)
        rear = NULL;

    size--;
}

template <class T>
T Queue_Linked_List<T>::Peek()
{
    if (front == NULL)
        throw "error : Queue is emtpy exception !\n"; // throw exception

    return front->data;
}

template <class T>
void Queue_Linked_List<T>::Display()
{
    Node *tmp = front;
    cout << "[ ";
    while (tmp != NULL)
    {
        cout << tmp->data;
        cout << (tmp->next == NULL ? "" : " , ");
        tmp = tmp->next;
    }
    cout << " ]\n";
}
