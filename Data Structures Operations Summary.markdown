## Data Strucutures Operations Summary

* Linked List Operations

  * bool Is_Empty();
  * int Count();
  * void Insert_First(T value);
  * void Insert_Last(T value);
  * void Insert_At(T value, int position);
  * void Delete_First();
  * void Delete_Last();
  * void Delete_At(int position);
  * void Display();
  * void Reverse();
  * void Merge(Linked_List list_2);
  * Linked_List<T> Split();
  * T Max();

* Stack Operations

  * bool Is_Empty();
  * bool Stack_Full(); (by array only)
  * int Count();
  * void Push(T value);
  * T Pop();
  * T Peek();
  * void Display();

* Queue Operations

  * bool Is_Empty();
  * bool Is_Full(); (by array only)
  * int Size();
  * void EnQueue(T value);
  * void DeQueue(T & variable);
  * T Peek();
  * void Display();

* Binary Tree Operations

  * int Size();
  * int Height();
  * void Insert(T value);
  * void Level_order_Traverse(void (*Action)(T));
  * void Preorder_Traverse(void (*Action)(T));
  * void Inorder_Traverse(void (*Action)(T));
  * void Postorder_Traverse(void (*Action)(T));
  * void Display();
