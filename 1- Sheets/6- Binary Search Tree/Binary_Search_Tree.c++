#include "Binary_Search_Tree.h"
#include <queue>

template <class T>
BST<T>::Node::Node(T value) : data(value), left(NULL), right(NULL) {}

template <class T>
BST<T>::BST() : root(NULL) {}

template <class T>
int BST<T>::Size() { return Size_Rec_Aux(root); }

template <class T>
int BST<T>::Size_Rec_Aux(Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + Size_Rec_Aux(node->left) + Size_Rec_Aux(node->right);
}

template <class T>
int BST<T>::Height() { return Height_Rec_Aux(root); }

template <class T>
int BST<T>::Height_Rec_Aux(Node *node)
{
    if (node == NULL)
        return 0;
    int a = Height_Rec_Aux(node->left);
    int b = Height_Rec_Aux(node->right);
    return (1 + max(a, b));
}

template <class T>
void BST<T>::Insert(T value)
{
    Node *new_node = new Node(value);
    root = Insert_Rec_Aux(root, new_node);
}

template <class T>
typename BST<T>::Node *BST<T>::Insert_Rec_Aux(Node *node, Node *&new_node)
{
    if (node == NULL)

        node = new_node;

    else if (new_node->data == node->data)
        delete new_node; // to delete the duplicates node

    else if (new_node->data < node->data)

        node->left = Insert_Rec_Aux(node->left, new_node);

    else

        node->right = Insert_Rec_Aux(node->right, new_node);

    return node;
}

template <class T>
void BST<T>::Delete(T value) { root = Delete_Rec_Aux(root, value); }

template <class T>
typename BST<T>::Node *BST<T>::Delete_Rec_Aux(Node *node, T value)
{
    if (node == NULL)
        return NULL;
    else if (node->data > value)
        node->left = Delete_Rec_Aux(node->left, value);
    else if (node->data < value)
        node->right = Delete_Rec_Aux(node->right, value);
    else
    {
        if (node->left == NULL)
        {
            Node *Tmp = node;
            node = node->right;
            delete Tmp;
        }
        else if (node->right == NULL)
        {
            Node *Tmp = node;
            node = node->left;
            delete Tmp;
        }
        else
        {
            Node *max = Max_Node(node->left);
            node->data = max->data;
            node->left = Delete_Rec_Aux(node->left, max->data);
        }
    }
    return node;
}

template <class T>
bool BST<T>::Search(T value) { return Search_Rec_Aux(root, value); }

template <class T>
bool BST<T>::Search_Rec_Aux(Node *node, T value)
{
    if (node == NULL)
        return false;
    else if (node->data == value)
        return true;
    else if (node->data > value)
        return Search_Rec_Aux(node->left, value);
    else
        return Search_Rec_Aux(node->right, value);
}

template <class T>
void BST<T>::Clear()
{
    Clear_Rec_Aux(root);
    root = NULL;
}

template <class T>
void BST<T>::Clear_Rec_Aux(Node *&node)
{
    if (node == NULL)
        return;
    Clear_Rec_Aux(node->left);
    Clear_Rec_Aux(node->right);
    delete node;
}

template <class T>
void BST<T>::LevelOrder_Traverse(void (*Action)(T))
{
    if (root == NULL)
        return;

    queue<Node *> nodes;

    nodes.push(root);

    while (!nodes.empty())
    {
        Node *node = nodes.front();
        nodes.pop();

        (*Action)(node->data);

        if (node->left != NULL)
            nodes.push(node->left);
        if (node->right != NULL)
            nodes.push(node->right);
    }
}

template <class T>
void BST<T>::PreOrder_Traverse(void (*Action)(T)) { PreOrder_Traverse_Rec_Aux(root, Action); }

template <class T>
void BST<T>::PreOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    (*Action)(node->data);
    PreOrder_Traverse_Rec_Aux(node->left, Action);
    PreOrder_Traverse_Rec_Aux(node->right, Action);
}

template <class T>
void BST<T>::InOrder_Traverse(void (*Action)(T)) { InOrder_Traverse_Rec_Aux(root, Action); }

template <class T>
void BST<T>::InOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    InOrder_Traverse_Rec_Aux(node->left, Action);
    (*Action)(node->data);
    InOrder_Traverse_Rec_Aux(node->right, Action);
}

template <class T>
void BST<T>::PostOrder_Traverse(void (*Action)(T)) { PostOrder_Traverse_Rec_Aux(root, Action); }

template <class T>
void BST<T>::PostOrder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    PostOrder_Traverse_Rec_Aux(node->left, Action);
    PostOrder_Traverse_Rec_Aux(node->right, Action);
    (*Action)(node->data);
}

template <class T>
T BST<T>::Min()
{
    if (root == NULL)
        throw "error : Tree is empty exception !\n";
    else
        return Min_Node(root)->data;
}

template <class T>
typename BST<T>::Node *BST<T>::Min_Node(Node *node)
{
    if (node == NULL)
        return NULL;
    else if (node->left == NULL)
        return node;
    else
        return Min_Node(node->left);
}

template <class T>
T BST<T>::Max()
{
    if (root == NULL)
        throw "error : Tree is empty exception !\n";
    else
        return Max_Node(root)->data;
}

template <class T>
typename BST<T>::Node *BST<T>::Max_Node(Node *node)
{
    if (node == NULL)
        return NULL;
    else if (node->right == NULL)
        return node;
    else
        return Max_Node(node->right);
}

template <class T>
void BST<T>::Display()
{
    cout << "[ ";
    InOrder_Traverse_Rec_Aux(root, [](T x)
                             { cout << x << " "; });
    cout << "]\n";
}

template <class T>
void BST<T>::Display_Tree_View() { Display_Tree_View_Rec_Aux(root, "", true); }

template <class T>
void BST<T>::Display_Tree_View_Rec_Aux(Node *root, string indent, bool last)
{
    if (root == NULL)
        return;

    cout << indent;
    if (last)
    {
        cout << "R----";
        indent += "   ";
    }
    else
    {
        cout << "L----";
        indent += "|  ";
    }
    cout << " " << root->data << endl;
    Display_Tree_View_Rec_Aux(root->left, indent, false);
    Display_Tree_View_Rec_Aux(root->right, indent, true);
}