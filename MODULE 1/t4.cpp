#include <iostream>
using namespace std;

int main()
{
    int totalScore, numTests;

    char tierCode;

    cin >> totalScore >> numTests >> tierCode;

    double averageScore = static_cast<double>(totalScore) / numTests;

    cout << "Exact Average : " << averageScore << endl;

    cout << "ASCII CODE: " << static_cast<int>(tierCode) << endl;
}