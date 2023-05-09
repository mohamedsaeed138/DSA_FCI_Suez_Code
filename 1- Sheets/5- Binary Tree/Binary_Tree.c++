#include "Binary_Tree.h"

template <class T>
Binary_Tree<T>::Binary_Tree() : root(NULL) {}

template <class T>
int Binary_Tree<T>::Size_Rec_Aux(Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + Size_Rec_Aux(node->left) + Size_Rec_Aux(node->right);
}

template <class T>
int Binary_Tree<T>::Size()
{
    return Size_Rec_Aux(root);
}

template <class T>
int Binary_Tree<T>::Height_Rec_Aux(Node *node)
{
    if (node == NULL)
        return 0;
    int a = Height_Rec_Aux(node->left);
    int b = Height_Rec_Aux(node->right);
    return (1 + max(a, b));
}

template <class T>
int Binary_Tree<T>::Height()
{
    return Height_Rec_Aux(root);
}

template <class T>
void Binary_Tree<T>::Insert_Rec_Aux(queue<Node *> &nodes, Node *&new_node)
{
    Node *root = nodes.front();
    nodes.pop();

    if (root->left == NULL)

        root->left = new_node;

    else if (root->right == NULL)

        root->right = new_node;

    else
    {
        nodes.push(root->left);
        nodes.push(root->right);

        Insert_Rec_Aux(nodes, new_node);
    }
}

template <class T>
void Binary_Tree<T>::Insert(T item)
{
    Node *new_node = new Node;

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    if (root == NULL)

        root = new_node;
    else
    {
        queue<Node *> nodes;

        nodes.push(root);

        Insert_Rec_Aux(nodes, new_node);
    }
}

template <class T>
void Binary_Tree<T>::Level_order_Traverse(void (*Action)(T))
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
void Binary_Tree<T>::Preorder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    (*Action)(node->data);
    Preorder_Traverse_Rec_Aux(node->left, Action);
    Preorder_Traverse_Rec_Aux(node->right, Action);
}

template <class T>
void Binary_Tree<T>::Preorder_Traverse(void (*Action)(T))
{
    Preorder_Traverse_Rec_Aux(root, Action);
}

template <class T>
void Binary_Tree<T>::Inorder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    Inorder_Traverse_Rec_Aux(node->left, Action);
    (*Action)(node->data);
    Inorder_Traverse_Rec_Aux(node->right, Action);
}

template <class T>
void Binary_Tree<T>::Inorder_Traverse(void (*Action)(T))
{
    Inorder_Traverse_Rec_Aux(root, Action);
}

template <class T>
void Binary_Tree<T>::Postorder_Traverse_Rec_Aux(Node *node, void (*Action)(T))
{
    if (node == NULL)
        return;

    Postorder_Traverse_Rec_Aux(node->left, Action);
    Postorder_Traverse_Rec_Aux(node->right, Action);
    (*Action)(node->data);
}

template <class T>
void Binary_Tree<T>::Postorder_Traverse(void (*Action)(T))
{
    Postorder_Traverse_Rec_Aux(root, Action);
}

template <class T>
void Binary_Tree<T>::Display()
{
    cout << "[ ";
    Level_order_Traverse([](T data)
                         { cout << data << " "; });
    cout << " ]\n";
}