#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(x!= 0 && y!= 0)
            cout << abs(x - y) << "\n";
        else
            cout << abs(x - y) + 1 << "\n";
    }

    return 0;
}