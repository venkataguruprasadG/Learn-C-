#include <iostream>
using namespace std;

int main()
{
    int num, k;

    cin >> num >> k;

    if (num & 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }

    if (num & (1 << k))
    {
        cout << "Kth Bit is set: " << k << endl;
    }

    cout << "Shifting num to left by  " << k << " positions: " << (num << k) << endl;
}