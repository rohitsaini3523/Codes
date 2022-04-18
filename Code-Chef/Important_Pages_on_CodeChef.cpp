#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a && b)
            cout << "https://discuss.codechef.com\n";
        else if(a)
            cout << "https://www.codechef.com/contests\n";
        else
            cout << "https://www.codechef.com/practice\n";
    }

    return 0;
}