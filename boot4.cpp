#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin>>T;
    int i,n[T],a[T],b[T];
    for(i=0;i<T;i++)
    {
        cin>>n[i]>>a[i]>>b[i];
    }
    for(i=0;i<T;i++)
    {
        if((a[i]+(2*b[i]))<=n[i])
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
return 0;
}