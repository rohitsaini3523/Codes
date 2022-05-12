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
        int *a = new int[n];
        int *a1 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a1[i] = a[i];
        }
        sort(a1, a1 + n);
        int flag = 1;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                swap(a[i], a[i + 1]);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(a1[i] != a[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}