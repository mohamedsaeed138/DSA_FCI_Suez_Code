#include "Circular_Queue.c++"

int main()
{
    Circular_Queue<int> queue;

    try
    {
        cout << queue.Peek(); // error : queue is empty ! exception will be thrown
    }
    catch (exception)
    {
        cout << "Queue is empty !\n";
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
