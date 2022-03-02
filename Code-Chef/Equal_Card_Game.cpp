#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        int ans = 52 % k;
        cout << ans << endl;
    }

    return 0;
}