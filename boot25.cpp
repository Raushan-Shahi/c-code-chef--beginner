#include <iostream>
using namespace std;
    
int main(){
    int t;
    cin >>t;
    int i,a[t],b[t],x[t],y[t];
    float sa[t],sb[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i]>>x[i]>>b[i]>>y[i];
        sa[i]=a[i]/x[i];
        sb[i]= b[i]/y[i];
    }
    for(i=0;i<t;i++)
    {
        if(sa[i]==sb[i])
        {
            cout <<"EQUAL"<<endl;
        }
        else if(sa[i]>sb[i])
        {
            cout <<"ALICE"<<endl;
        }
        else
        {
            cout <<"BOB"<<endl;
        }
    }
return 0;
}