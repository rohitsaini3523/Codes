#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        vector<long int> v;
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        v.push_back(w);
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(), v.end());
        int c = v[3];
        int b = -1 * v[2];
        int flag = 2;
        if(v[0]<0)
        {
        int x1 = (-b + (sqrt((b * b) - (4 * c)))) / 2;
        int x2 = (-b - (sqrt((b * b) - (4 * c)))) / 2;
        if (x1 < x2)
        {
            cout << x1 << " " << x2 << "\n";
        }
        else
        {
            cout << x2 << " " << x1 << "\n";
        }
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }

    return 0;
}