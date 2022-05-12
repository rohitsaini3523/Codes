#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        for (long j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] >= k)
            {
                count += (n - j);
                break;
            }
        }
    }
    cout << count << "\n";
    return 0;
}