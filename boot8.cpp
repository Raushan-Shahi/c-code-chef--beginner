/*
On a certain train, Chef-the ticket collector, collects a fine of Rs.
XX if a passenger is travelling without a ticket.
It is known that a passenger carries either a single ticket or no ticket.
PP passengers are travelling and they have a total of QQ tickets.
Help Chef calculate the total fine collected.
*/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int i, a[T], b[T];
    for (i = 0; i < T; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < T; i++)
    {
        if (a[i] <= 300)
        {
            cout << 3000 << endl;
        }
        else
        {
            cout << a[i] * 10 << endl;
        }
    }
    return 0;
}