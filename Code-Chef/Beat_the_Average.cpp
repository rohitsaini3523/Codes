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
        int n, m, x;
        cin >> n >> m >> x;
        int count = 0;
        if(x!=m)
            cout << (n * x) / (x + 1) << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}