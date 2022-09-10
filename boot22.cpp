#include <iostream>
using namespace std;
    
int main(){
    int t;
    cin >>t;
    int i,a[t],b[t],c[t];
    for(i=0;i<t;i++)
    {
        cin >>a[i]>>b[i]>>c[i];
    }
    for(i=0;i<t;i++)
    {
        if((c[i]>=a[i])&&(c[i]<b[i]))
        {
            cout<< "yes"<<endl;
        }
        else 
        {
            cout <<"no"<<endl;
        }
    }    
    cout << "yes";
    cout << "no";
return 0;
}