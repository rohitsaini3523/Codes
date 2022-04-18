#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b - a >= 2)
            {
                cout << a << " " << a + 2 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            if (b - a >= 3)
            {
                if (a % 3 == 0)
                {
                    cout << a << " " << a + 3 << "\n";
                }
                else
                {
                    cout << a + 1 << " " << a + 3 << "\n";
                }
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}