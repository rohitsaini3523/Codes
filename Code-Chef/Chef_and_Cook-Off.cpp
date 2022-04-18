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
        int a[5], sum = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        switch (sum)
        {
        case 0:
            cout << "Beginner\n";
            break;
        case 2:
            cout << "Middle Developer\n";
            break;
        case 1:
            cout << "Junior Developer\n";
            break;
        case 3:
            cout << "Senior Developer\n";
            break;
        case 5:
            cout << "Jeff Dean\n";
            break;
        case 4:
            cout << "Hacker\n";
            break;
        }
    }

    return 0;
}