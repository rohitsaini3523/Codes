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
        int n, k;
        cin >> n >> k;
        n = n % 4;
        if(k==1)
        {
            if(n == 0)
                cout << "On\n";
            else
                cout << "Ambiguous\n";
        }
        else
        {
            if(n == 0)
            {
                cout << "Off\n";
            }
            else
            {
                cout << "On\n";
            }
        }
    }
    return 0;
}