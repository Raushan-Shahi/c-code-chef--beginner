#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, a[t], b[t];
    for (i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] == b[i])
        {
            cout << "any" << endl;
        }
        else if (a[i] < b[i])
        {
            cout << "repair" << endl;
        }
        else
        {
            cout << "new phone" << endl;
        }
    }

    return 0;
}