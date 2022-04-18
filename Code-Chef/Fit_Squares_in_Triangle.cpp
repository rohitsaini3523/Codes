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
        long int base;
        cin >> base;
        long long int k = (base / 2) - 1;
        if(k<0)
            k = 0;
        cout << (k * (k + 1)) / 2 << "\n";
    }

    return 0;
}