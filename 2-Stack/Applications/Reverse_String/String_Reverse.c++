#include <iostream>
#include <string>
#include "stack"
using namespace std;

void Reverse_String(string example)
{
    stack<char> container;
    int counter = 0;
    while (counter < example.length())
    {
        container.push(example[counter++]);
    }

    while (!container.empty()) // to print the reverse string
    {
        cout << container.top();
        container.pop();
    }
}