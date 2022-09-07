#include <iostream>
using namespace std;

int check(int m, int k)
{
    if ((k * (k + 1)) <= (2 * m))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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
        int flag;
        flag = check(a[i], b[i]);
        if (flag == 1)
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