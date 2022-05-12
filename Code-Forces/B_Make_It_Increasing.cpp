#include <bits/stdc++.h>
using namespace std;
int slove(int a[], int n)
{
    int count = 0;
    int flag;
    while (1)
    {
        flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] >= a[i])
            {
                flag = 1;
                if (a[i] == 0)
                    return -1;
                while(a[i-1]>=a[i])
                {
                    a[i - 1] /= 2;
                    count++;
                }
            }
        }
        if(flag == 0)
            return count;
    }
}
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==1)
            cout << 0 << "\n";
        else
            cout << slove(a,n) << "\n";
    }

    return 0;
}