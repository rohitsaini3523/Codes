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
        {
            cin >> a[i];
        }
        int count_positive = 0, count_negative = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1)
            {
                count_positive++;
            }
        }
        count_negative = n - count_positive;
        int diff = abs(count_positive - count_negative);
        if(diff > 2)
        {
            cout << "No\n";
        }
        else if(diff == 2)
        {
            if(count_positive%2 == 0 && count_negative%2== 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}