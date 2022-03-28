#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cod = (n + 1) / 2;
        cout << ((n & 1) ? -cod : cod) << "\n";
    }
    return 0;
}