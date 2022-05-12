#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        long int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int k = 0, k1 = 0;
        if(b-y<0)
            c = c + b - y;
        if(a-x<0)
            c = c + a - x;
        if(c>=0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}