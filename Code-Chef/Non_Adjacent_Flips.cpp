#include<bits/stdc++.h>
using namespace std;
int flips(string s, int n)
{
    int count = 0;
        int a[n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
               count++;
            }
        }
        int flag = 0;
        if(count == n)
            return 0;
        for (int i = 0,j=1; i < n - 1; i++,j++)
        {
            if(s[i] == '1' && s[j] == '1')
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            return 1;
        else
            return 2;
}
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << flips(s, n) << "\n";
    }

    return 0;
}