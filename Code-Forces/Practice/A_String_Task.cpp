#include <iostream>
#include<string>
using namespace std;
// vowel{a,e,i,o,u,y} -> delete
// not vowels -> add '.' at first
//  uppercase -> lower case 
int main() 
{
    string s1, s2;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'Y'||s1[i]=='y'||s1[i] == 'A' || s1[i] == 'a' || s1[i] == 'E' || s1[i] == 'e' || s1[i] == 'I' || s1[i] == 'i' || s1[i] == 'O' || s1[i] == 'o' || s1[i] == 'U' || s1[i] == 'u')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s1[i]);
        }
    }
    cout << s2 << endl;
    return 0;
}