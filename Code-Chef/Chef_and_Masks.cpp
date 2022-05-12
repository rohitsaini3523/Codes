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
        int x, y;
        cin >> x >> y;
        if(x*100 < y*10)
        {
            cout << "Disposable\n";
        }
        else
        {
            cout << "Cloth\n";
        }
    }

    return 0;
}