#include <bits/stdc++.h>
using namespace std;
int sq(int n)
{
    return n * n;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        int k = sqrt(sq(0 - x) + sq(0 - y));
        if (sqrt(sq(0 - x) + sq(0 - y)) == k && (x != 0) && (y != 0))
        {
            ans = 1;
        }
        else
        {
            int l = max(x, y);
            int a, b, c = 0;
            int p = 2;
            while (c < l)
            {
                for (int q = 1; q < p; ++q)
                {
                    a = p * p - q * q;
                    b = 2 * p * q;
                    c = p * p + q * q;
                    if (c > l)
                        break;
                    ans++;
                }
                p++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}