#include "Binary_Search_Tree.c++"
int main()
{
     BST<int> tree;

     tree.Insert(4);
     tree.Insert(4); // will not be added again ,it's a duplicate
     tree.Insert(3);
     tree.Insert(5);
     tree.Insert(-2);
     tree.Insert(6);

     cout << "Display by (in order traversal) : "; // [ -2 3 4 5 6 ]
     tree.Display();

     cout << "Does tree contain 4 ? -"
          << (tree.Search(4) ? "True\n" : "False\n"); // True

     cout << "Does tree contain 10 ? -"
          << (tree.Search(10) ? "True\n" : "False\n"); // False

     tree.Delete(4);

     cout << "Display after delete 4 : ";
     tree.Display(); // [ -2 3 5 6 ]
}