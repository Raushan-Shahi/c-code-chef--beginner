#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int i, k[T], x[T];
    for (i = 0; i < T; i++)
    {
        cin >> k[i] >> x[i];
    }
    for (i = 0; i < T; i++)
    {
        cout << ((7 * k[i]) - x[i]) << endl;
    }
    return 0;
}