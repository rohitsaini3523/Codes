#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        int possible = 2 * min(count0, count1) + (count0 != count1);
        cout << possible << "\n";
    }

    return 0;
}