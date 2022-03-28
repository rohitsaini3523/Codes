#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        set<int> v;
        v.insert(x);
        v.insert(y);
        v.insert(a);
        v.insert(b);
        int count = v.size();
        cout << count - 2 << "\n";
    }

    return 0;
}