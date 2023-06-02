#include "Binary_Tree.c++"
int main()
{
    Binary_Tree<int> tree;

    tree.Insert(9);
    tree.Insert(10);
    tree.Insert(5);
    tree.Insert(20);
    tree.Insert(2);
    tree.Insert(-1);
    tree.Insert(8);

    cout << "Size of The Tree : " << tree.Size() << endl; // 7

    cout << "Height of Tree : " << tree.Height() << endl; // 3

    cout << "Level order Traverse : ";
    tree.Level_order_Traverse([](int data)
                              { cout << data << " "; }); // 9 10 5 20 2 -1 8
    cout << endl;

    cout << "Preorder Traverse : ";
    tree.Preorder_Traverse([](int data)
                           { cout << data << " "; }); // 9 10 20 2 5 -1 8
    cout << endl;

    cout << "Inorder Traverse : ";
    tree.Inorder_Traverse([](int data)
                          { cout << data  << " "; }); // 20 10 2 9 -1 5 8
    cout << endl;

    cout << "Preorder Traverse : ";
    tree.Postorder_Traverse([](int data)
                            { cout << data << " "; }); // 20 2 10 -1 8 5 9
    cout << endl;

    cout << "Display : ";
    tree.Display(); // [ 9 10 20 2 5 -1 8 ]
}