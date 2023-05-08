#include "Check_Palindrome.c++"

int main()
{
    string example;
    cout << "Enter a  text: ";
    cin >> example;
    cout << "it's " << (Check_Palindrome(example) ? "a " : "not a ") << "palindrome\n";
}