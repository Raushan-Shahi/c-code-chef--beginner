/*
A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of NN friends in Chefland want to buy Chef-TV subscriptions. 
We know that 66 people can share one Chef-TV subscription. 
Also, the cost of one Chef-TV subscription is XX rupees. 
Determine the minimum total cost that the group of NN friends will incur 
so that everyone in the group is able to use Chef-TV.
*/

#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin >>T;
    int i,a[T],b[T];
    for(i=0;i<T;i++)
    {
        cin >>a[i]>>b[i];
    }
    for(i=0;i<T;i++)
    {
        if(a[i]%6 == 0)
       {
            cout<<(a[i]/6)*b[i]<<endl;
       } 
       else
       {
            cout<<((a[i]/6)+1)*b[i]<<endl;
       }
    }
return 0;
}