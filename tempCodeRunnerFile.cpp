#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int i, c;
    if (a >= b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    for (i = a; i <= (c * c); i++)
    {
        if ((i % a) == (i % b))
        {
            return i;
        }
    }
    return 0;
}

int hcf(int a, int b)
{
    int c = 1;
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        while (c > 0)
        {
            c = a % b;
            if (c == 0)
            {
                return b;
            }
            a = b;
            b = c;
        }
    }
    else
    {
        while (c > 0)
        {
            c = b % a;
            if (c == 0)
            {
                return a;
            }
            b = a;
            a = c;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t >= 1)
    {
        int s,count =0;
        cin >>s;
        int i,j,a[s];
        for(i=0;i<s;i++)
        {
            cin >>a[i];
        }
        for(i=0;i<s;i++)
        {
            for(j=i+1;j<s;j++)
            {
                if((lcm(a[i],a[j]))==hcf(a[i],a[j]))
                {
                    count =count +1;
                }
            }
        }
        cout << count<<endl;
    }
    return 0;
}