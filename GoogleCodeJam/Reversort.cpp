#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int minimum = i;
        for (int j = i; j < n; ++j)
        {
            if(a[j] < a[minimum])
            {
                minimum = j;
            }
        }
        reverse(a.begin() + i, a.begin() + minimum + 1);
        ans += minimum - i + 1;
    }
    cout << ans;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }

    return 0;
}