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
        int x, min;
        cin >> x >> min;
        if(x<min)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}