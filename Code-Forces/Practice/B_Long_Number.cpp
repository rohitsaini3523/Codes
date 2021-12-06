#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long  n;
    cin >> n;
    long long  m;
    cin >> m;
    long long  a[n], ans[n];
    for (long long  j = 0; j < n; j++)
    {
        a[n - j] = m % 10;
        m = m / 10;
    }
    int f[9];
    for (int i = 1; i < 10; i++)
    {
        cin >> f[i]; // 1 2 3 4 5 6 7 8 9
    }                // 0 1 2 3 4 5 6 7 8
    for (long long  j = 1; j <= n; j++)
    {
        ans[j] = f[a[j]];
        if (ans[j] < a[j])
        {
            ans[j] = a[j];
        }
        else
        {
            continue;
        }
    }
    for (long long  j = 1; j <= n; j++)
        cout << ans[j];
    return 0;
}
