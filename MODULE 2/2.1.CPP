#include <iostream>
using namespace std;

string tradeRiskClassifier(int orderAmount, int riskScore, int isVerified)
{
    if (isVerified == 0)
    {
        return "Unverified Account";
    }
    else if (orderAmount > 100000 && riskScore >= 70)
    {
        return "Manual Review Required";
    }
    else if (orderAmount > 100000 || riskScore >= 70)
    {
        return "Elevated Monitoring";
    }
    else
    {
        return "Auto Approved";
    }
}

int main()
{
    int orderAmount, riskScore, isVerified;
    cin >> orderAmount >> riskScore >> isVerified;

    string tradeRisk = tradeRiskClassifier(orderAmount, riskScore, isVerified);
    cout << "Status: " << tradeRisk << endl;
    return 0;
}