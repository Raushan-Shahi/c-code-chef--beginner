/*
Janmansh has to submit 33 assignments for Chingari before 1010 pm and he starts to do the assignments at XX pm.
Each assignment takes him 11 hour to complete.
Can you tell whether he'll be able to complete all assignments on time or not?
Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer XX
 - the time when Janmansh starts doing the assignemnts.
 */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, a[t];
    for (i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] <= 7)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}