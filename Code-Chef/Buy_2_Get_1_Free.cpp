#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int minimum = n / 3;
        cout << (n - minimum) * x << "\n";
    }

    return 0;
}