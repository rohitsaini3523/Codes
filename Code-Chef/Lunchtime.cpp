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
        if(n<=4 && n>=1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}