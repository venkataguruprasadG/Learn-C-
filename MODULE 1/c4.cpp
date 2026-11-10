#include <iostream>
using namespace std;

int main()
{
    int id;
    string fullName;

    cin >> id;
    cin.ignore();
    getline(cin, fullName);

    cout << "ID: " << id << endl;
    cout << "Full Name: " << fullName << endl;
}