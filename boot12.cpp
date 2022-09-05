/*
Alice wrote an exam containing NN true or false questions (i.e. questions whose answer is either true or false). 
Each question is worth 11 mark and there is no negative marking in the examination.
 Alice scored KK marks out of NN.
Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, 
for whichever questions Alice marked true, Bob marked false and for whichever questions Alice marked false, 
Bob marked true.
For each test case, output on a new line the score of Bob.
*/


#include <iostream>
using namespace std;
    
int main(){
    int T;
    cin >> T;
    int i,a[T],b[T];
    for(i=0;i<T;i++)
    {
        cin>>a[i] >>b[i];
    }

    for(i=0; i<T;i++) 
    {
        cout<<a[i]-b[i]<<endl;
    }
return 0;
}