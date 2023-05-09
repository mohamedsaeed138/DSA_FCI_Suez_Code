#include "Postfix_Evaluation.c++"

int main()
{
    string expression;
    cout << "Enter a Postfix Expression: ( e.g. 4 5 * ) : ";
    getline(cin, expression);

    cout << "Answer = " << Evaluate_Postfix(expression) << endl;
}