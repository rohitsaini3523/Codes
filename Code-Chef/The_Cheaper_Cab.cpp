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
        int x,y;
        cin >> x >> y;
        if(x>y)
            cout << "SECOND\n";
        else if(y>x)
            cout << "FIRST\n";
        else
            cout << "ANY\n";
    }

    return 0;
}