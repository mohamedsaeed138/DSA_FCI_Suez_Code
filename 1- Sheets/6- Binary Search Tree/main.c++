#include "Binary_Search_Tree.c++"
int main()
{
     BST<int> tree;
     try
     {
          cout << tree.Max();
     }
     catch (const char *message)
     {
          cout << message;
     }

     tree.Insert(4);
     tree.Insert(3);
     tree.Insert(5);
     tree.Insert(-2);
     tree.Insert(6);

     cout << "Size : " << tree.Size() << endl;     // 3
     cout << "Height : " << tree.Height() << endl; // 2

     cout << "LevelOrder Traverse : ";
     tree.LevelOrder_Traverse([](int x)
                              { cout << x << " "; }); // 4 3 5
     cout << endl;

     cout << "Preorder Traverse : ";
     tree.PreOrder_Traverse([](int x)
                            { cout << x << " "; }); // 4 3 5
     cout << endl;

     cout << "In order Traverse : ";
     tree.InOrder_Traverse([](int x)
                           { cout << x << " "; }); // 3 4 5
     cout << endl;

     cout << "Postorder Traverse : ";
     tree.PostOrder_Traverse([](int x)
                             { cout << x << " "; }); // 3 5 4
     cout << endl;

     cout << "Display by (in order) : "; //[ 3 4 5 ]
     tree.Display();

     cout << "Display Tree View : \n";
     tree.Display_Tree_View();
     cout << endl;

     /*R---- 4
        L---- 3
        |  L---- -2
        R---- 5
           R---- 6*/

     cout << "Does tree contain 4 ? -Answer : "
          << (tree.Search(4) ? "True\n" : "False\n"); // True

     cout << "Does tree contain -2 ? -Answer : "
          << (tree.Search(-2) ? "True\n" : "False\n"); // False

     cout << "Maximum = " << tree.Max() << endl; // 5
     cout << "Minimum = " << tree.Min() << endl; // 3

     tree.Delete(3);

     tree.Display_Tree_View();
     cout << "Size = " << tree.Size() << endl; // 2

     tree.Clear();
     tree.Display(); //[ ]
}