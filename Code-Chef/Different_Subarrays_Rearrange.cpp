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
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            c[n - i -1] = a[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        if(s.size() != n && s.size()<2*n/3)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            sort(b, b + n);
            sort(c, c + n);
            reverse(c, c + n);
            reverse(c, c + 2 * (n / 3));
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << c[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}