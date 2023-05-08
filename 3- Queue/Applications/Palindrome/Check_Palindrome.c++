#include <iostream>
#include <string>
#include <queue>
using namespace std;

bool Check_Palindrome(string example)
{
    queue<char> container;

    for (int i = 0; i < example.length() / 2; i++) // if the length is even i will insert the first half of the string
    {                                              // if the length is odd i'll will  do same but with ignoring the middle character
        container.push(example[i]);
    }

    for (int i = 0; i < example.length() / 2; i++)
    {
        char ch=container.front();
        container.pop();

        if (example[example.length() - 1 - i] != ch) // to start comparing from the string end
            return false;
    }
    return true;
}
