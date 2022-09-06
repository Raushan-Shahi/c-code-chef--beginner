/*
You are given 33 numbers A, B,A,B, and CC.
Determine whether the average of AA and BB is strictly greater than CC or not?
NOTE: Average of AA and BB is defined as {(A+B)}/{2}.
For example, average of 55 and 99 is 77, average of 55 and 88 is 6.56.5.
 */
 
 
#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin >> T;
    int i,a[T],b[T],c[T];
    for(i=0;i<T;i++)
    {
        cin >>a[i]>>b[i]>>c[i];
    }
    for(i=0;i<T;i++)
    {
        if((a[i]+b[i])>(2*c[i]))
        {
            cout<< "yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
return 0;
}