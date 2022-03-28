#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *people = new int[n];
        for (int i = 0; i < n; i++)
            cin >> people[i];
        for (int i = 0; i < n; i++)
        {
            if (people[i] <= k)
            {
                cout << 1;
                k = k - people[i];
            }
            else
            {
                cout << 0;
            }
        }
        cout << "\n";
    }

    return 0;
}