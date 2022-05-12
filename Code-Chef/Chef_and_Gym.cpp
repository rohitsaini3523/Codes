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
        int x, y, z;
        cin >> x >> y >> z;
        if((x+y) > z && x > z)
        {
            cout << 0 << "\n";
        }
        else if(x+y <= z)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }

    }

    return 0;
}