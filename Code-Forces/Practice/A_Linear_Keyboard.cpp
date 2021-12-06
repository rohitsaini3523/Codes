#include <iostream>
#include <string>
using namespace std;
 
int check(char a, string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(a == s[i])
            return (i + 1);
    }
}
int main() 
{
    int t;
    string s;
    int m, n;
    int i;
    string keyboard;
    cin >> t;
    while(t--)
    {
        int ans = 0;
        m = 0, n = 0;
        cin >> keyboard;
        cin >> s;
        int p = s.length();
        if(s.length() == 1)
        {
            m = 0;
        }
        i = 0;
        while(p-- && p>0)
        {
            n = check(s[i], keyboard);
            m = check(s[i + 1], keyboard);
            if(m-n <0)
                ans += (m - n) * (-1);
            else
                ans += (m - n);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}