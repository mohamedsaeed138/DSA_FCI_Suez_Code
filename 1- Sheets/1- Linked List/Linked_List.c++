#include "Linked_List.h"
template <class T>
Linked_List<T>::Linked_List() : head(NULL) {}

template <class T>
bool Linked_List<T>::Is_Empty()
{
    return head == NULL;
}

template <class T>
int Linked_List<T>::Count()
{
    int count = 0;
    Node *Tmp = head;

    while (Tmp != NULL)
    {
        count++;
        Tmp = Tmp->next;
    }
    return count;
}

template <class T>
void Linked_List<T>::Insert_First(T New_Item)
{
    Node *New_Node = new Node;

    New_Node->data = New_Item;
    New_Node->next = head;
    head = New_Node;
}

template <class T>
void Linked_List<T>::Insert_Last(T New_Item)
{
    Node *New_Node = new Node;
    New_Node->data = New_Item;
    New_Node->next = NULL;

    if (head == NULL)
    {
        head = New_Node;
        return;
    }

    Node *Tmp = head;
    while (Tmp->next != NULL)
    {
        Tmp = Tmp->next;
    }
    Tmp->next = New_Node;
}

template <class T>
void Linked_List<T>::Insert_At(T New_Item, int position)
{
    if (position < 0 || position > Count())
        throw exception(); // error: out of range exception
    else if (position == 0)
    {
        Insert_First(New_Item);
    }
    else
    {
        Node *New_Node = new Node;
        New_Node->data = New_Item;

        Node *Tmp = head;
        int counter = 0;
        while (counter < position - 1)
        {
            Tmp = Tmp->next;
            counter++;
        }
        New_Node->next = Tmp->next;
        Tmp->next = New_Node;
    }
}

template <class T>
void Linked_List<T>::Delete_First()
{
    if (head == NULL)
        throw exception(); // error : linked list is empty
    Node *Tmp = head;
    head = head->next;
    delete Tmp;
}
template <class T>
void Linked_List<T>::Delete_Last()
{
    if (head == NULL)
        throw exception(); // error : linked list is empty
    else if (head->next == NULL)
        Delete_First();
    else
    {
        Node *Tmp = head;
        while (Tmp->next->next != NULL)
        {
            Tmp = Tmp->next;
        }

        delete Tmp->next;
        Tmp->next = NULL;
    }
}

template <class T>
void Linked_List<T>::Delete_At(int position)
{
    if (position < 0 || position > Count() - 1)
        throw exception(); // error : out of range exception
    else if (position == 0)
    {
        Delete_First();
    }
    else
    {

        int counter = 0;
        Node *Tmp = head;
        while (counter < position - 1)
        {
            counter++;
            Tmp = Tmp->next;
        }
        Node *Deleted_Node = Tmp->next;
        Tmp->next = Deleted_Node->next;
        delete Deleted_Node;
    }
}

template <class T>
void Linked_List<T>::Display()
{
    Node *Tmp = head;
    cout << "[ ";
    while (Tmp != NULL)
    {
        cout << Tmp->data << (Tmp->next == NULL ? "" : " , ");

        Tmp = Tmp->next;
    }
    cout << " ]" << endl;
}

template <class T>
void Linked_List<T>::Reverse()
{
    if (head == NULL || head->next == NULL)
        return;

    Node *Current = head->next;
    Node *Next;
    head->next = NULL;
    while (Current != NULL) // starting from the second element
    {
        Next = Current->next;

        Current->next = head;

        head = Current;

        Current = Next;
    }
}

template <class T>
void Linked_List<T>::Merge(Linked_List List_2)
{
    if (head == NULL)
        head = List_2.head;

    Node *Tmp = head;
    while (Tmp->next != NULL)
    {
        Tmp = Tmp->next;
    }
    Tmp->next = List_2.head;
}

template <class T>
Linked_List<T> Linked_List<T>::Split()
{
    Linked_List<T> Tmp_List;

    if (head == NULL || head->next == NULL)

        Tmp_List.head = NULL;
    else
    {
        Node *Tmp = head;
        int size = Count();

        for (int counter = 0; counter < (size / 2) - 1; counter++)
            Tmp = Tmp->next;

        Tmp_List.head = Tmp->next;
        Tmp->next = NULL;
    }
    return Tmp_List;
}

template <class T>
T Linked_List<T>::Max()
{
    if (head == NULL)
        throw exception(); // error: linked list is empty

    T max = head->data;

    Node *Tmp = head->next;

    while (Tmp != NULL)
    {
        if (Tmp->data > max)
            max = Tmp->data;

        Tmp = Tmp->next;
    }

    return max;
}
