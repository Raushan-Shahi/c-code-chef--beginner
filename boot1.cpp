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