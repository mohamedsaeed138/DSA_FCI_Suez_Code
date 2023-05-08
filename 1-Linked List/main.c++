#include <iostream>
#include "Linked_List.h"
using namespace std;

void Even_Elements(int element);

int main()
{
    Linked_List<int> List_1, List_2, List_3; // call the first constructor ()
    cout << "The First List : " << endl;

    cout << "is it Empty ?  -" << (List_1.Is_Empty() ? "True" : "False") << endl; // 1 = true
    cout << "The Size = " << List_1.Count() << " Element" << endl;                // 0

    List_1.Insert_First(1);
    List_1.Display(); //[1]

    cout << "max= " << List_1.Max() << endl; // 1

    List_1.Insert_Last(3);
    List_1.Display(); //[1,3]

    List_1.Insert_At(2, 1);
    List_1.Display(); //[1,2,3]

    List_1.Reverse();
    List_1.Display(); //[3,2,1]

    cout << "max= " << List_1.Max() << endl; // 3

    List_1.Reverse();

    List_2.Insert_Last(4);
    List_2.Insert_Last(5);
    List_2.Insert_Last(6);
    List_2.Insert_Last(7);
    List_2.Insert_Last(8);
    List_2.Insert_Last(9);

    List_2.Display(); //[ 4 , 5 , 6 , 7 , 8 , 9 ]

    List_1.Merge(List_2);

    List_1.Display(); //[ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ]

    List_3 = List_1.Split();
    List_3.Display(); //[ 5 , 6 , 7 , 8 , 9 ]

    List_1.Delete_At(2);
    List_1.Display(); //[ 1 , 2 , 4 ]

    cout << "max= " << List_1.Max() << endl; // max= 4

    List_1.Delete_First();
    List_1.Display(); //[ 2 , 4 ]

    List_1.Delete_Last();
    List_1.Display(); //[ 2 ]

    List_1.Delete_Last();
    List_1.Display(); //[  ]
}
