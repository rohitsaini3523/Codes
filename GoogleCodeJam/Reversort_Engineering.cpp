#include<iostream>
using namespace std;
#define ll long long 
bool possible(int n, int c)
{
    return ((n - 1 <= c) && (c <= n * (n + 1) / 2 - 1));
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n, c;
        cin >> n >> c;
        cout << "Case #" << i << ":";
        if(!possible(n,c))
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << " ";
            for (int i = 0; i < n; i++)
            {
                cout << n - i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}