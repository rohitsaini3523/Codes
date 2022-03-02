#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            k--;
            //counting number of unequal bits present
        }
    }
    if ((k < 0)) //if unequal bits are more than number of operation allowed
    {
        cout << "NO" << endl;
    }
    // if there are operation left to perform
    else
    {
        if (n % 2 != 0) //if string is of odd length 
        {
            cout << "YES" << endl;
        }
        else if (k % 2 == 0) // if number of operation perform are even 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}