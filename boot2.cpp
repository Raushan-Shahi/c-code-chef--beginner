/*In the current semester, you have taken XX RTP courses, YY Audit courses and ZZ Non-RTP courses.
The credit distribution for the courses are:
44 credits for clearing each RTP course.
22 credits for clearing each Audit course.
No credits for clearing a Non-RTP course.
Assuming that you cleared all your courses, report the number of credits you obtain this semester. */

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int r[T], a[T], n[T];
    for (int i = 0; i < T; i++)
    {
        cin >> r[i] >> a[i] >> n[i];
    }
    for (int i = 0; i < T; i++)
    {
        cout << (4 * r[i]) + 2 * a[i] << endl;
    }
    return 0;
}