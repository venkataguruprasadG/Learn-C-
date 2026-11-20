#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long original = n;
    int digitCount = 0;
    long long rev = 0;

    do
    {
        int lastDigit = n % 10;
        digitCount++;
        rev = rev * 10 + lastDigit;
        n /= 10;
    } while (n > 0);

    cout << "Digits: " << digitCount << "\n";
    cout << "Reversed: " << rev << "\n";
    cout << "Palindrome: " << (original == rev ? "Yes" : "No") << "\n";

    return 0;
}