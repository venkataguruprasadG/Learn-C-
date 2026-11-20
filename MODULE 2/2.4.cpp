#include <iostream>
using namespace std;

int main()
{
    int n, skipMultiple, stopLimit;
    cin >> n >> skipMultiple >> stopLimit;

    int sum = 0;
    int packetsProcessed = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % skipMultiple == 0)
        {
            continue;
        }

        if (sum + i > stopLimit)
        {
            break;
        }

        sum += i;
        packetsProcessed++;
    }

    cout << "Final Sum: " << sum << "\n";
    cout << "Packets Processed: " << packetsProcessed << "\n";
    return 0;
}