#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int p = n / k;
        int remain = n % k;
        if(remain == 0)
        {
            cout << p << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}