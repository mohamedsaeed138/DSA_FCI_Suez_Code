#include <iostream>
#include <string>
using namespace std;

// This Binary Search Tree doesn't allow duplicates
template <class T>
class BST
{
    struct Node
    {
        T data;
        Node *right;
        Node *left;
        Node(T value);
    };

    Node *root;

    int Size_Rec_Aux(Node *);

    int Height_Rec_Aux(Node *);

    Node *Insert_Rec_Aux(Node *node, Node *&new_node);

    Node *Delete_Rec_Aux(Node *node, T value);

    bool Search_Rec_Aux(Node *node, T value);

    void Clear_Rec_Aux(Node *&);

    void PreOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T));

    void InOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T));

    void PostOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T));

    void Display_Tree_View_Rec_Aux(Node *root, string indent, bool last);

    Node *Min_Node(Node *node);

    Node *Max_Node(Node *node);

public:
    BST();

    int Size();
    int Height();

    void Insert(T value);

    bool Search(T value);

    void Delete(T value);

    void Clear();

    void LevelOrder_Traverse(void (*Action)(T));
    void PreOrder_Traverse(void (*Action)(T));
    void InOrder_Traverse(void (*Action)(T));
    void PostOrder_Traverse(void (*Action)(T));

    void Display(); // by in order traverse

    void Display_Tree_View();

    T Min();
    T Max();
};
