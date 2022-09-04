#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int i, a[T], b[T];
    for (i = 0; i < T; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < T; i++)
    {
        if ((a[i] + b[i]) % 2 == 0)
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