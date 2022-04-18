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
        int m;
        cin >> m;
        int b = 1;
        for (int i = 2; i <= m; i++)
        {
            if(i%2 != 0)
                b &= i;
            else
                b ^= i;
        }
        cout << b << "\n";
    } /* 
    1001
    1010
    1011 or
    1000 and */
    return 0;
}