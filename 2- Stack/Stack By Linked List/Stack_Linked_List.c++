#include "Stack_Linked_List.h"

template <class T>
Stack_Linked_List<T>::Stack_Linked_List() : top(NULL) {}

template <class T>
bool Stack_Linked_List<T>::Is_Empty()
{
    return top == NULL;
}

template <class T>
int Stack_Linked_List<T>::Count()
{
    int Count = 0;
    Node *Tmp = top;

    while (Tmp != NULL)
    {
        Count++;
        Tmp = Tmp->next;
    }
    return Count;
}

template <class T>
void Stack_Linked_List<T>::Push(T New_Item)
{
    Node *New_Node = new Node;

    New_Node->data = New_Item;
    New_Node->next = top;
    top = New_Node;
}

template <class T>
T Stack_Linked_List<T>::Pop()
{
    if (top == NULL)
        return NULL;

    Node *Tmp = top;
    T value = top->data;
    top = top->next;
    delete Tmp;
    return value;
}

template <class T>
T Stack_Linked_List<T>::Peek()
{
    if (top == NULL)
        return NULL;
    else
        return top->data;
}

template <class T>
void Stack_Linked_List<T>::Display()
{
    Node *Tmp = top;
    cout << "[ ";
    while (Tmp != NULL)
    {
        cout << Tmp->data << (Tmp->next == NULL ? "" : " , ");

        Tmp = Tmp->next;
    }
    cout << " ]" << endl;
}