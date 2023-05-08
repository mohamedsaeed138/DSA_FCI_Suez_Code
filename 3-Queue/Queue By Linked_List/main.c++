#include "Queue_Linked_List.c++"
int main()
{
    Queue_Linked_List<int> queue;
    queue.EnQueue(1);
    queue.EnQueue(2);
    queue.EnQueue(3);
    queue.EnQueue(4);
    queue.Display(); //[ 1 , 2 , 3 , 4 ]
    int c;
    queue.DeQueue(c);
    cout << c << endl; // 1
    queue.Display();   //[ 2 , 3 , 4 ]

    int x = queue.Peek();
    cout << x; // 2
}
