#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, temp;
        cin >> s;
        temp = s;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] > s[n - i - 1])
            {
                swap(s[i], s[n - i - 1]);
            }
        }
        if (s == temp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}