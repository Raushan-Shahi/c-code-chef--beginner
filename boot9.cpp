/* MoEngage helps the Chef send email reminders about rated contests to the participants.
There are a total of NN participants on Chef’s platform, and UU of them have told Chef not to send emails to them.
If so, how many participants should MoEngage send the contest emails to? */



#include <iostream>
using namespace std;

void result()
{
    int x, y;
    cin >> x >> y;
    cout << x - y;
}
int main()
{
    result();
    return 0;
}