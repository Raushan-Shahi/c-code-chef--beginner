/* Six friends go on a trip and are looking for accommodation.
After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms.
A double room costs Rs. XX, while a triple room costs Rs. YY.
The friends can either get three double rooms or get two triple rooms.
 Find the minimum amount they will have to pay to accommodate all six of them. */

#include <iostream>
using namespace std;
void check(int x, int y)
{
    if ((3 * x) <= (2 * y))
    {
        cout << 3 * x << endl;
    }
    else
    {
        cout << 2 * y << endl;
    }
}
int main()
{
    int T;
    cin>>T;
    int i, a[T], b[T];
    for (i = 0; i < T; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (i = 0; i < T; i++)
    {
        check(a[i], b[i]);
    }
    return 0;
}