#include <iostream>
#include "Linked_List.c++"
using namespace std;

int main()
{
    Linked_List<int> list_1, list_2, list_3; // call the  constructor ()
    cout << "The First List : " << endl;

    cout << "is it Empty ? -" << (list_1.Is_Empty() ? "True" : "False") << endl; // -True
    cout << "The Size = " << list_1.Count() << " elements" << endl;              // 0

    list_1.Insert_First(1);
    cout << "List_1 : ";
    list_1.Display(); //[1]

    list_1.Insert_Last(3);
    cout << "List_1 : ";
    list_1.Display(); //[1,3]

    list_1.Insert_At(2, 1);
    cout << "List_1 : ";
    list_1.Display(); //[1,2,3]

    list_1.Reverse();
    cout << "List_1 : ";
    list_1.Display(); //[3,2,1]

    cout << "max= " << list_1.Max() << endl; // 3

    list_1.Reverse();

    list_2.Insert_Last(4);
    list_2.Insert_Last(5);
    list_2.Insert_Last(6);
    list_2.Insert_Last(7);
    list_2.Insert_Last(8);
    list_2.Insert_Last(9);

    cout << "List_2 : ";
    list_2.Display(); //[ 4 , 5 , 6 , 7 , 8 , 9 ]

    cout << "Does List_2 contain 5 ? -" << (list_2.Search(5) ? "True\n" : "False\n"); // True

    list_1.Merge(list_2);

    cout << "List_1 : ";
    list_1.Display(); //[ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ]

    list_1.Split(list_3);
    cout << "List_3 : ";
    list_3.Display(); //[ 5 , 6 , 7 , 8 , 9 ]

    list_1.Delete_At(2);
    cout << "List_1 : ";
    list_1.Display(); //[ 1 , 2 , 4 ]

    cout << "max= " << list_1.Max() << endl; // max= 4

    list_1.Delete_First();
    cout << "List_1 : ";
    list_1.Display(); //[ 2 , 4 ]

    list_1.Delete_Last();
    cout << "List_1 : ";
    list_1.Display(); //[ 2 ]

    list_1.Delete_Last();
    cout << "List_1 : ";
    list_1.Display(); //[  ]

    try
    {
        list_1.Max(); // now there is no elements in list so Max(): will throw an exception
    }
    catch (const char *message) // exception handling
    {
        cout << message; // error : Linked List is empty exception !
    }
}
