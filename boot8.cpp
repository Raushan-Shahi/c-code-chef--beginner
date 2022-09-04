#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin>>T;
    int i,a[T],b[T];
    for(i=0;i<T;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<T;i++)
    {
        if(a[i]<=300)
        {
            cout<<3000<<endl;
        }
        else{
            cout<<a[i]*10<<endl;
        }
    }
return 0;
}