#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll count = 0, ans = 0, n = s.length();
        for (ll i = 1; i < n - 1; i++)
        {
            if (s[i] != s[0] && s[i] != s[n - 1])
            {
                count++;
            }
            else
            {
                count = 0;
            }
            ans = max(count, ans);
        }
        if (ans == 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}