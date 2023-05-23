#include "Linked_List.h"
template <class T>
Linked_List<T>::Linked_List() : head(NULL) {}

template <class T>
bool Linked_List<T>::Is_Empty() { return head == NULL; }

template <class T>
int Linked_List<T>::Count()
{
    int count = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

template <class T>
void Linked_List<T>::Insert_First(T value)
{
    Node *new_node = new Node;

    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

template <class T>
void Linked_List<T>::Insert_Last(T value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}

template <class T>
void Linked_List<T>::Insert_At(T value, int position)
{
    if (position < 0 || position > Count())

        throw "error : out of range exception !\n"; // throw exception

    else if (position == 0)
    {
        Insert_First(value);
    }
    else
    {
        Node *new_node = new Node;
        new_node->data = value;

        Node *tmp = head;
        int counter = 0;
        while (counter < position - 1)
        {
            tmp = tmp->next;
            counter++;
        }
        new_node->next = tmp->next;
        tmp->next = new_node;
    }
}

template <class T>
void Linked_List<T>::Delete_First()
{
    if (head == NULL)

        throw "error : Linked List is empty exception !\n"; // throw exception

    Node *tmp = head;
    head = head->next;
    delete tmp;
}
template <class T>
void Linked_List<T>::Delete_Last()
{
    if (head == NULL)

        throw "error : Linked List is empty exception !\n"; // throw exception

    else if (head->next == NULL)
        Delete_First();
    else
    {
        Node *tmp = head;
        while (tmp->next->next != NULL)
        {
            tmp = tmp->next;
        }

        delete tmp->next;
        tmp->next = NULL;
    }
}

template <class T>
void Linked_List<T>::Delete_At(int position)
{
    if (position < 0 || position > Count() - 1)
        throw "error : out of range exception !\n"; // throw exception
    else if (position == 0)
    {
        Delete_First();
    }
    else
    {

        int counter = 0;
        Node *tmp = head;
        while (counter < position - 1)
        {
            counter++;
            tmp = tmp->next;
        }
        Node *deleted_node = tmp->next;
        tmp->next = deleted_node->next;
        delete deleted_node;
    }
}

template <class T>
void Linked_List<T>::Delete(T value)
{
    if (head == NULL)
        return; // list is empty so value is not found
    else if (head->data == value)

        Delete_First();

    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->next->data == value)
            {
                Node *deleted_node = tmp->next;
                tmp->next = deleted_node->next;
                delete deleted_node;
                return;
            }
            tmp = tmp->next;
        }
    }
}

template <class T>
void Linked_List<T>::Display()
{
    Node *tmp = head;
    cout << "[ ";
    while (tmp != NULL)
    {
        cout << tmp->data << (tmp->next == NULL ? "" : " , ");

        tmp = tmp->next;
    }
    cout << " ]" << endl;
}

template <class T>
void Linked_List<T>::Reverse()
{
    if (head == NULL || head->next == NULL)
        return;

    Node *current = head->next;
    Node *next;
    head->next = NULL;
    while (current != NULL) // starting from the second element
    {
        next = current->next;

        current->next = head;

        head = current;

        current = next;
    }
}

template <class T>
void Linked_List<T>::Merge(Linked_List list_2)
{
    if (head == NULL)
        head = list_2.head;

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = list_2.head;
}

template <class T>
void Linked_List<T>::Split(Linked_List &list2)
{

    if (head == NULL || head->next == NULL)
        throw "error : Linked List can't be splitted exception !\n";
    else
    {
        Node *tmp = head;
        int size = Count();

        for (int counter = 0; counter < (size / 2) - 1; counter++)
            tmp = tmp->next;

        list2.head = tmp->next;
        tmp->next = NULL;
    }
}

template <class T>
T Linked_List<T>::Max()
{
    if (head == NULL)
        throw "error : Linked List is empty exception !\n"; // throw exception

    T max = head->data;

    Node *tmp = head->next;

    while (tmp != NULL)
    {
        if (tmp->data > max)
            max = tmp->data;

        tmp = tmp->next;
    }

    return max;
}

template <class T>
bool Linked_List<T>::Search(T value)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->data == value)
            return true;

        tmp = tmp->next;
    }

    return false;
}
