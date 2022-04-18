#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        string s;
        int n, x, y;
        cin >> n >> x >> y;
        cin >> s;
        int ans = 0;
        sort(s.begin(), s.end());
        if(x>y)
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1' && s[i+1]== '0')
            {
                ans += y;
            }
            else if(s[i] == '0' && s[i+1]=='1')
            {
                ans += x;
            }
        }
            cout << ans << "\n";
        }

    return 0;
}