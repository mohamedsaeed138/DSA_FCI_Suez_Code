#include "Stack_Linked_List.h"

template <class T>
Stack_Linked_List<T>::Stack_Linked_List() : top(NULL) {}

template <class T>
bool Stack_Linked_List<T>::Is_Empty() { return top == NULL; }

template <class T>
int Stack_Linked_List<T>::Count()
{
    int count = 0;
    Node *tmp = top;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

template <class T>
void Stack_Linked_List<T>::Push(T value)
{
    Node *new_node = new Node;

    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

template <class T>
T Stack_Linked_List<T>::Pop()
{
    if (top == NULL)
        throw "error : Stack is empty exception !\n"; // throw exception

    Node *tmp = top;
    T value = top->data;
    top = top->next;
    delete tmp;
    return value;
}

template <class T>
T Stack_Linked_List<T>::Peek()
{
    if (top == NULL)
        throw "error : Stack is empty exception !\n"; // throw exception
    else
        return top->data;
}

template <class T>
void Stack_Linked_List<T>::Display()
{
    Node *tmp = top;
    cout << "[ ";
    while (tmp != NULL)
    {
        cout << tmp->data << (tmp->next == NULL ? "" : " , ");

        tmp = tmp->next;
    }
    cout << " ]" << endl;
}