#include "Binary_Search_Tree.h"

template <class T>
BST<T>::Node::Node(T value) : data(value), left(NULL), right(NULL) {}

template <class T>
BST<T>::BST() : root(NULL) {}

template <class T>
void BST<T>::Insert(T value) { root = Insert_Rec_Aux(root, value); }

template <class T>
typename BST<T>::Node *BST<T>::Insert_Rec_Aux(Node *node, T value)
{
    if (node == NULL)

        node = new Node(value);

    else if (value == node->data) // value is already existed
        return node;

    else if (value < node->data)

        node->left = Insert_Rec_Aux(node->left, value);

    else

        node->right = Insert_Rec_Aux(node->right, value);

    return node;
}

template <class T>
void BST<T>::Delete(T value) { root = Delete_Rec_Aux(root, value); }

template <class T>
typename BST<T>::Node *BST<T>::Delete_Rec_Aux(Node *node, T value)
{
    if (node == NULL)
        return NULL;
    else if (value < node->data)
        node->left = Delete_Rec_Aux(node->left, value);
    else if (value > node->data)
        node->right = Delete_Rec_Aux(node->right, value);
    else
    {
        if (node->left == NULL)
        {
            Node *Tmp = node->right;
            delete node;
            return Tmp;
        }
        else if (node->right == NULL)
        {
            Node *Tmp = node->left;
            delete node;
            return Tmp;
        }
        else
        {
            Node *max = Max_Value_Node(node->left);
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
typename BST<T>::Node *BST<T>::Max_Value_Node(Node *node)
{
    if (node == NULL)
        return NULL;
    else if (node->right == NULL)
        return node;
    else
        return Max_Value_Node(node->right);
}

template <class T>
void BST<T>::Display()
{
    cout << "[ ";
    InOrder_Traverse_Rec_Aux(root, [](T x)
                             { cout << x << " "; });
    cout << "]\n";
}