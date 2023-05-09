#include <iostream>
#include "String_Reverse.c++"
using namespace std;

int main()
{

    string example;
    cout << "enter a string : ";
    getline(cin, example);

    Reverse_String( example);
    cout << endl;
}
