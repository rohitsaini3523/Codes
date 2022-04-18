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
        long int x, y;
        cin >> x >> y;
        long int count = 0;
        count = y / x;
        if(y > x *count)
            cout << count << "\n";
        else
            cout << count - 1 << "\n";
    }

    return 0;
}