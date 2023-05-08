#include "Check_Palindrome.c++"
int main()
{
    string str;
    cout << "Enter a text : ";
    cin >> str;
    cout << "it's " << (Check_Palindrome(str) ? "a " : " not a ") << "Palindrome\n";
}