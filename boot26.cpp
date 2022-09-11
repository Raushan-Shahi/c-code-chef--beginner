#include <iostream>
#include <math.h>
using namespace std;


int lcm(int a, int b)
{

    int max_num, flag = 1;     
      
    // use ternary operator to get the large number  
    max_num = (a > b) ? a : b;  
      
    while (flag)    
    {  
        // if statement checks max_num is completely divisible by n1 and n2.  
        if(max_num % a == 0 && max_num % b == 0)  
        {  
            return max_num;
            break;  
        }  
        ++max_num; // update by 1 on each iteration  
    }  
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
};


int main()
{
    int t;
    cin >> t;
    while (t > 0)
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
                if((lcm(a[i],a[j]))==(a[i],a[j]))
                {
                    count =count +1;
                }
            }
        }
        cout << count<<endl;
    }
    return 0;
}