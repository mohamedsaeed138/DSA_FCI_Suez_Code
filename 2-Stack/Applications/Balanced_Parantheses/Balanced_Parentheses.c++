#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool Are_Pair(char, char);

bool Are_Balanced(string);

bool Are_Pair(char open, char close)
{
    if (open == '(' && close == ')')
        return true;
    else if (open == '{' && close == '}')
        return true;
    else if (open == '[' && close == ']')
        return true;
    else
        return false;
}

bool Are_Balanced(string expression)
{
    stack<char> container;
    int length = expression.length();

    for (int i = 0; i < length; i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
            container.push(expression[i]);
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (container.empty() || !Are_Pair(container.top(), expression[i]))
                return false;
            else
                container.pop();
        }
    }

    return container.empty();
}
