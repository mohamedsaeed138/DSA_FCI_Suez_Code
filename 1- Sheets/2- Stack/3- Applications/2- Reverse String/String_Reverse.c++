#include <iostream>
#include <string>
#include "stack"
using namespace std;

string Reverse_String(string example)
{
    stack<char> container;
    string reversed;

    int counter = 0;
    while (counter < example.length())
    {
        container.push(example[counter++]);
    }

    while (!container.empty()) // to  reverse string
    {
        reversed.push_back(container.top()); // push_back: insert the char at the end of the string
        container.pop();
    }

    return reversed;
}