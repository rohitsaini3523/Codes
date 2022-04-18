#include<bits/stdc++.h>
using namespace std;

int digitsum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum % 2;
}
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(digitsum(n) != digitsum(n+1))
        {
            cout << n + 1 << "\n";
        }
        else
        {
            cout << n + 2 << "\n";
        }
    }

    return 0;
}