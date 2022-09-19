#include <iostream>
using namespace std;
    
int main(){
    int t;
    cin >>t;
    while(t--)
    {
        int r,g,b;
        cin >>r>>g>>b;
        cout <<r<<g<<b;
        if(b<r)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<r<<endl;
        }
    }
return 0;
}