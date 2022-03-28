#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int total = 2 * n;
        cout << total - (x - 1) << "\n";
    }

    return 0;
}