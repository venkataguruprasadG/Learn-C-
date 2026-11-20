#include <iostream>
using namespace std;

int main()
{
    char cmd;
    cin >> cmd;

    int a, b;
    cin >> a >> b;

    switch (cmd)
    {
    case 'B':
    case 'b':
    {
        cout << "Total Cost: " << a * b << endl;
        break;
    }
    case 'S':
    case 's':
    {
        cout << "Total Credit: " << a * b << endl;
        break;
    }
    case 'M':
    case 'm':
    {
        if (b == 0)
        {
            cout << "Error: Division by Zero" << endl;
        }
        else
        {
            cout << "Ratio: " << a / b << endl;
        }
        break;
    }
    default:
    {
        cout << "Invalid Command" << endl;
        break;
    }
    }
}