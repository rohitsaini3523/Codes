#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    string ans;
    int n;
    while (t--)
    {
        cin >> n;
        char ch;
        cin >> s;
        ans = s;
        int i = 0;
        while (i < n)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if (s[i] == 'a')
                {
                    ans[i] = 'z';
                }
                else
                {
                    ch = s[i];
                    ans[i] = ch - 1;
                }
            }
            else
            {
                if (s[i] == 'z')
                {
                    ans[i] = 'a';
                }
                else
                {
                     ch = s[i];
                    ans[i] = ch + 1;
                }
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}