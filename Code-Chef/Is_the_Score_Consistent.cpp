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
        int a, b, x, y;
        cin >> a >> b;
        cin >> x >> y;
        if(x>=a && y>=b)
            cout << "POSSIBLE\n";
        else
            cout << "IMPOSSIBLE\n";
    }

    return 0;
}