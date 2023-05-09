#include <iostream>
using namespace std;
template <class T>
class Linked_List
{
private:
    struct Node
    {
        T data;
        Node *next;
    };
    Node *head;

public:
    Linked_List();

    bool Is_Empty();

    int Count();

    void Insert_First(T);
    void Insert_Last(T);
    void Insert_At(T, int);

    void Delete_First();
    void Delete_Last();
    void Delete_At(int);

    void Display();

    void Reverse();

    void Merge(Linked_List);

    Linked_List<T> Split();

    T Max();
};