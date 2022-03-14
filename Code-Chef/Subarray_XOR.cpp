#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
int convert(string s)
{
    int ans = 0, index = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] == '1')
        {
            ans += pow(2, index);
        }
        index++;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;                               
        int len = pow(2, n) - 1;
        string *v = new string[len];
        int *v1 = new int[len];
        int i1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                string p = s.substr(i, j);
                v[i1] = p;
                i1++;
            }
        }
        for (int i = 0; i < len; i++)
        {
            //cout << v[i] << endl;
            int k = convert(v[i]);
            //cout << k << endl;
            v1[i] = k;
            // cout << v1[i] << endl;
        }
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            ans ^= v1[i];
        }
        cout << ans << endl;
    }

    return 0;
}