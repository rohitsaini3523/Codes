#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n-1; i+=2)
        {
            swap(s[i], s[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = 'a'+'z' - s[i];
        }
            cout << s << "\n";
    }

    return 0;
}