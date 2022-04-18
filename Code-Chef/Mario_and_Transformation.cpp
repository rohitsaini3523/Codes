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
        n = n + 1;
        if(n%3 == 2)
        {
            cout << "HUGE\n";
        }
        else if(n%3 == 1)
        {
            cout << "NORMAL\n";
        }
        else
        {
            cout << "SMALL\n";
        }
    }

    return 0;
}