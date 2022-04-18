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
        int n, m;
        cin >> n >> m;
        if(m>=n)
        {
            cout << n << "\n";
        }
        else if(m<n)
        {
            cout << 2 * n - m << "\n";
        }
    }

    return 0;
}