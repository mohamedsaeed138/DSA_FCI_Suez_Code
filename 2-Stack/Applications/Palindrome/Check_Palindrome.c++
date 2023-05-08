#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Check_Palindrome(string &String)
{
    stack<char> container;
    for (int i = 0; i < String.length() / 2; i++)
    {
        container.push(String[i]);
    }

    int i = String.length() - String.length() / 2;
    for (; i < String.length(); i++)
    {
        if (String[i] != container.top()) // top==peek
            return false;
        container.pop();
    }
    return true;
}