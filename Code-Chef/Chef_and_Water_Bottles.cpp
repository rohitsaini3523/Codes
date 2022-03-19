#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int maxbottle = k / x;
        cout << min(n, maxbottle) << endl;
    }

    return 0;
}