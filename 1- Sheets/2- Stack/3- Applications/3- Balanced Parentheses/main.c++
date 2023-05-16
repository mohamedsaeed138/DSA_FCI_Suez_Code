#include "Balanced_Parentheses.c++"

int main()
{

    string expression;
    cout << "Enter an expression : ";

    cin >> expression;

    cout << (Are_Balanced(expression) ? "Balanced\n" : "Not Balanced\n");
}
