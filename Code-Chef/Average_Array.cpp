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
        int a;
        double b;
        cin >> a >> b;
        int i = 1;
        int k = 0;
        for (i = 1; i < a; i++)
        {
            cout << i << " ";
            k += i;
        }
        cout << (a * b) - k << "\n";
    }

    return 0;
}