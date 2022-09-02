#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin>>T;
    int a[T];
    for(int i=0; i<T;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<T;i++)
    {
        if(a[i]<=30)
        {
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
return 0;
}