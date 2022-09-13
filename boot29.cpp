#include <iostream>
using namespace std;

void max(int n, int *a)
{
    int count = 0;
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
            count++;
    }
    cout << count << endl;
};

int compare(int a)
{
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];

        int c[n];

        for (int i = 0; i < n; i++)
        {
            c[i] = compare(n, a[i], b[i], a, b);
        }
        max(n, c);
    }
    return 0;
}