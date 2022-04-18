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
        cout << abs(x - y) << "\n";
    }
    return 0;
}