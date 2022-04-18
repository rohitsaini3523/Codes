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
        int n, m, k;
        cin >> n >> m >> k;
        if(n <= m*k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}