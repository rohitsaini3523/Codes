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
        int n, x, y;
        cin >> n >> x >> y;
        int count = 0, count1 = 0;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if(count<x)
            {
                s.append("R");
                count++;
            }
            if(count1<y)
            {
                s.append("B");
                count1++;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if(s[i] == 'R' && s[i+1] == 'R')
            {
                if(s[i-1] == 'B')
                {
                    swap(s[i - 1], s[i + 1]);
                    break;
                }
            }
            else if(s[i] == 'B' && s[i+1] == 'B')
            {
                if(s[i-1] == 'R')
                {
                    swap(s[i - 1], s[i + 1]);
                    break;
                }
            }
        }
            cout << s << "\n";
    }

    return 0;
}