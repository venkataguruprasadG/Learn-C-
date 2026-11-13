#include <iostream>
using namespace std;

int main()
{
    int code;
    int divisor;

    cin >> code >> divisor;

    bool safe = (divisor != 0) && (code / divisor > 10);

    int last_digit = code % 10;

    int remaining_digits = code / 10;

    cout << "Safe Check: " << safe << endl;
    cout << "Last Digit: " << last_digit << endl;
    cout << "Remaining Digits: " << remaining_digits << endl;
}