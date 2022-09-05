/*
Shivam is the youngest programmer in the world, he is just 12 years old. 
Shivam is learning programming and today he is writing his first program.

The task is very simple: 
given two integers A and B, write a program to add these two numbers and output it.
*/

#include <iostream>
using namespace std;
    
int main(){
    int n;
    int T;
    cout<<"enter the number of inputs"<<endl;
    cin>>T;
    n = T;
    int a[n], b[n], c[n];
    cout<<"enter the numbers"<<endl;
    for(int i=0; i<T; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(int i = 0; i<T; i++)
    {
        c[i] = a[i]+ b[i];
        cout<<c[i]<<endl;
    }
return 0;
}