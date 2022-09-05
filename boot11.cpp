/*There are only 22 type of denominations in Chefland:
Coins worth 11 rupee each
Notes worth 1010 rupees each
Chef wants to pay his friend exactly XX rupees. 
What is the minimum number of coins Chef needs to pay exactly XX rupees? */



#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin>>T;
    int i,a[T] ;
    for(i=0; i<T; i++)
    {
        cin >> a[i];
    }

    for (i=0;i<T;i++)
    { 
        cout<< a[i]%10<<endl;
    }
return 0;
}