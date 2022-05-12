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
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int a1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int b1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i < x; i++)
        {
            a1[a[i] - 1]++;
            b1[a[i] - 1] = a1[a[i] - 1];

        }
        int m = 0;
        int index = 0, count = 0;
        sort(b1, b1 + 10);
        for (int i = 0; i < 10; i++)
        {
            m = b1[9];
            if(a1[i] == m)
            {
                index = i;
                count++;
            }
        }
        //cout << index << " " << count << "\n";
        if (count == 1)
            cout << index+1 << "\n";
        else
            cout << "CONFUSED\n";
    }
    return 0;
}