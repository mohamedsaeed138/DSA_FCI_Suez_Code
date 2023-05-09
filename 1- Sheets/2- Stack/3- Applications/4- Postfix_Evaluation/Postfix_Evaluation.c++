#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool Is_Operator(char ch);

double Perform_Operation(double Operand1, double Operand2, char Operator);

double Evaluate_Postfix(string expression);

bool Is_Operator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

double Perform_Operation(double Operand1, double Operand2, char Operator)
{
    if (Operator == '+')
        return Operand1 + Operand2;
    else if (Operator == '-')
        return Operand1 - Operand2;
    else if (Operator == '*')
        return Operand1 * Operand2;
    else
        return Operand1 / Operand2;
}

double Evaluate_Postfix(string expression)
{
    stack<double> values;

    string Number;

    int counter = 0;

    double operand1, operand2, num;

    for (int i = 0; i < expression.length(); i++)
    {

        if ((expression[i] >= '0' && expression[i] <= '9') || expression[i] == '.')
        {
            Number[counter++] = expression[i];
        }

        else if (expression[i] == ' ')
        {
            if (counter > 0)
            {
                
                Number[counter] = '\0';
                num = stod(Number);

                values.push(num);
                counter = 0;
            }
        }

        else if (Is_Operator(expression[i]))
        {
            operand2 = values.top();
            values.pop();

            operand1 = values.top();
            values.pop();

            values.push(Perform_Operation(operand1, operand2, expression[i]));
        }
    }

    double result = values.top();

    values.pop();
    return result;
}