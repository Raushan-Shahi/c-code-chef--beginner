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
        if (a[i] > 98)
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