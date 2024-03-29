#include "Queue_Linked_List.c++"
int main()
{
    Queue_Linked_List<int> queue;
    try
    {
        int i;
        queue.DeQueue(i);            // Dequeue(i) will throw exception because queue is empty
        cout << "i = " << i << endl; // will not be executed due to exception thrown
    }
    catch (const char *message) // exception handling
    {
        cout << message; // error : Queue is emtpy exception !
    }

    queue.EnQueue(1);
    queue.EnQueue(2);
    queue.EnQueue(3);
    queue.EnQueue(4);

    queue.Display(); //[ 1 , 2 , 3 , 4 ]

    int c;
    queue.DeQueue(c);
    cout << "c = " << c << endl; // 1

    queue.Display(); //[ 2 , 3 , 4 ]

    int x = queue.Peek();
    cout << "x = " << x << endl; // 2
}
