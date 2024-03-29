#include "Circular_Queue.c++"

int main()
{
    Circular_Queue<int> queue;

    try
    {
        cout << queue.Peek(); // Peek() will throw exception because queue is empty
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
