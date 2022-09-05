/*
Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly XX minutes.
The meeting platform supports a meeting of maximum 3030 minutes
without subscription and a meeting of unlimited duration with subscription.
Determine whether Chef needs to take a subscription or not for setting up the meet.
*/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int a[T];
    for (int i = 0; i < T; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < T; i++)
    {
        if (a[i] <= 30)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}