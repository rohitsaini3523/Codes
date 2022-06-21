#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    int x, n;
    while(t--)
    {
        cin >> x >> n;
        cout << ((x / 10) * n) << "\n";
    }

    return 0;
}