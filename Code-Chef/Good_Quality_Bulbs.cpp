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
        int n, x;
        cin >> n >> x;
        int a[n - 1];
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int k = n * x;
        if(sum<k)
        {
            cout << k - sum << "\n";
        }
        else
        {
            cout << "0\n";
        }

    }

    return 0;
}