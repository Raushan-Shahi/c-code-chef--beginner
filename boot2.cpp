#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin>>T;
    int r[T],a[T],n[T];
    for(int i=0; i<T; i++)
    {
        cin>>r[i]>>a[i]>>n[i];
    }
    for(int i=0; i<T; i++)
    {
        cout<<(4*r[i])+2*a[i]<<endl;
    }
return 0;
}