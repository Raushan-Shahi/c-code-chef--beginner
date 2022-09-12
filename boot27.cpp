/*
Words that contain many consecutive consonants, like "schtschurowskia", 
are generally considered somewhat hard to pronounce.
We say that a word is hard to pronounce if it contains 44 or more consonants in a row; 
otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce,
 but "schtschurowskia" is hard to pronounce.
You are given a string SS consisting of NN lowercase Latin characters.
 Determine whether it is easy to pronounce or not based on the rule above — print YES
if it is easy to pronounce and NO otherwise.
For the purposes of this problem, the vowels are the characters
 \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count = 0;
            else
                count++;
            if (count >= 4)
                break;
        }
        if (count >= 4)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}