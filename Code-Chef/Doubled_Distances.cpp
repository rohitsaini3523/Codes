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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int flag = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if(((a[i] - a[i-1]) == 2*(a[i+1] -a[i])) || (2*(a[i] - a[i-1]) == (a[i+1] -a[i])))
            {
                flag++;
            }
        }
        if(flag == n -2 )
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}