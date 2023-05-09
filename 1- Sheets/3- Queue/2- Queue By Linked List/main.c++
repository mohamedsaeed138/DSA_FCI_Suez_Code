#include "Queue_Linked_List.c++"
int main()
{
    Queue_Linked_List<int> queue;
    try
    {
        int i;
        queue.DeQueue(i); // error : queue is empty ,an exception will be thrown
        cout << "i = " << i << endl;
    }
    catch (exception)
    {
        cout << "Error queue is empty !\n";
    }

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
