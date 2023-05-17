#include <iostream>
using namespace std;

// This Binary Search Tree doesn't allow duplicates
template <class T>
class BST
{
    struct Node
    {
        T data;
        Node *left;
        Node *right;
        Node(T value);
    };

    Node *root;

    Node *Insert_Rec_Aux(Node *node, T value);

    Node *Delete_Rec_Aux(Node *node, T value);

    bool Search_Rec_Aux(Node *node, T value);

    void InOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T));

    Node *Max_Value_Node(Node *node);

public:
    BST();

    void Insert(T value);

    bool Search(T value);

    void Delete(T value);

    void InOrder_Traverse(void (*Action)(T));

    void Display(); // by in order traverse
};
