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
        int enemy1[n];
        int enemy2[n];
        int time1 = 0, time2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> enemy1[i];
            enemy2[i] = enemy1[i];
        }
        for (int i = 0;i<n; i++)
        {
            while(enemy1[i]>0)
            {
                enemy1[i]-=x;
                time1++;   
            }
        }
        int flag = 0;
        sort(enemy2, enemy2 + n);
        time2 = enemy2[n - 1];
        // cout << time1 << " " << time2 << "\n";
        cout << min(time1, time2) << "\n";
    }

    return 0;
}