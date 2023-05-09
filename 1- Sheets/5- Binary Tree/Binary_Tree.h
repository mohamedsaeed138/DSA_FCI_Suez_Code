#include <iostream>
#include <queue>
using namespace std;

template <class T>
class Binary_Tree
{
private:
    struct Node
    {
        T data;
        Node *left, *right;
    };

    Node *root;

    int Size_Rec_Aux(Node *);

    int Height_Rec_Aux(Node *);

    void Insert_Rec_Aux(queue<Node *> &nodes, Node *&new_node);

    void Preorder_Traverse_Rec_Aux(Node *, void (*)(T));
    void Inorder_Traverse_Rec_Aux(Node *, void (*)(T));
    void Postorder_Traverse_Rec_Aux(Node *, void (*)(T));

public:
    Binary_Tree();

    int Size();

    int Height();

    void Insert(T);

    void Level_order_Traverse(void (*Action)(T));
    void Preorder_Traverse(void (*Action)(T));
    void Inorder_Traverse(void (*Action)(T));
    void Postorder_Traverse(void (*Action)(T));

    void Display();
};
