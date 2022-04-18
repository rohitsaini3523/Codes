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
        long long n;
        cin >> n;
        long long a[n];
        long long count1= 0 ,count2=0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            if(a[i]<0)
                count1++;
            else if (a[i] > 0)
                count2++;
        }
        cout << (count1 * (count1 - 1) / 2) + (count2 * (count2 - 1) / 2) << "\n";
    }
    return 0;
}