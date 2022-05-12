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
        int a[n];
        int count1=0, count0=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
                count1++;
            else
                count0++;
        }
        if(count1>=count0)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}