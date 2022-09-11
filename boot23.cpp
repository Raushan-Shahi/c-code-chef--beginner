/*
Chef has a rectangular plate of length N cmNcm and width M cmMcm. 
He wants to make a wireframe around the plate. The wireframe costs XX rupees per cm.
Determine the cost Chef needs to incur to buy the wireframe.
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, a[t], b[t], c[t];
    for (i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    for (i = 0; i < t; i++)
    {
        cout << (2 * (a[i] + b[i]) * c[i]) << endl;
    }
    return 0;
}