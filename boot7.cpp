#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int i, x[T], p[T], q[T];
    for (i = 0; i < T; i++)
    {
        cin >> x[i] >> p[i] >> q[i];
    }
    for (i = 0; i < T; i++)
    {
        cout << x[i] * (p[i] - q[i]) << endl;
    }
    return 0;
}