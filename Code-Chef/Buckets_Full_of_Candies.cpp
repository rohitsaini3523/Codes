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
        int n, m, l;
        cin >> n >> m >> l;
        for (int i = l; i >0;i--)
        {
            if(m == 0)
            {
                break;
            }
            else
            {
                int k = (l + (i*(i - 1) / 2));
                cout << k << "\n";
            }
        }
        //cout << m << "\n";
    }

    return 0;
}