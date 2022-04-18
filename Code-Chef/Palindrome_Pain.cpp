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
        int x, y;
        cin >> x >> y;
        string s1, s2;
        int k = x + y;
        if(y>x)
        {
            if(y%2 == 0)
                for (int i = 0; i < y; i++)
                {
                    if(i<=x/2)
                        s1[i + x / 2] = 'b';
                    else
                        s1[i - x / 2] = 'b';
                }
            for (int i = 0; i < x; i++)
            {
                if(i<x/2)
                    s1[i] = 'a';
                else
                    s1[i + x / 2] = 'a';
            }
        }
    }

    return 0;
}