/*
In Chefland, a tennis game involves 44 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits. 
The ball is considered to be IN if and only if all the referees agree that it was inside limits.
Given the decision of the 44 referees, 
help Chef determine whether the ball is considered inside limits or not.
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> r[i];
        }
        if (r[0] == 0 && r[1] == 0 && r[2] == 0 && r[3] == 0)
            cout<<"IN"<<endl;
        else
            cout<<"OUT"<<endl;
    }
    return 0;
}