#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int max, n;
        cin >> n >> max;
        int a[n], b[n], mid = (max / 2);
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= mid)
                b[i] = max - a[i];
            else
                b[i] = a[i] - 1;
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + b[i];
        }
        cout << sum << endl;
    }
    return 0;
}