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
        int n;
        cin >> n;
        if(n<4)
            cout << (n + 1) / 2 << "\n";
        else
            cout << n << "\n";
    }

    return 0;
}