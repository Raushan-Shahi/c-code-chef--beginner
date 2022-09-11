/*
Bob has an account in the Bobby Bank. His current account balance is WW rupees.
Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
YY rupees is deducted from Bob's account each month as bank charges.
Find his final account balance after ZZ months. 
Note that the account balance can be negative as well.
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, w[t], x[t], y[t], z[t];
    for (i = 0; i < t; i++)
    {
        cin >> w[i] >> x[i] >> y[i] >> z[i];
    }
    for (i = 0; i < t; i++)
    {
        cout << (w[i] + ((x[i] - y[i]) * z[i])) << endl;
    }
    return 0;
}