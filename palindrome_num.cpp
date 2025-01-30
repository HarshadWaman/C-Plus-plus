// c++ program for palindrome number
#include <iostream>
using namespace std;
int main()
{
    int n, num, digit, rev = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;

    } while (num != 0);
    cout << "the revese of the number is: " << rev << endl;
    if (n == rev and n > 0)
        cout << "The number is a palindrome";
    else
        cout << "The number is not palindrome";

            return 0;
}