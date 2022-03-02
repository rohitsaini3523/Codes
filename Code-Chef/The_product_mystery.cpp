#include<iostream>
using namespace std;
#define ll long long

ll gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c;
        cin >> b >> c;
        a = lcm(b, c);
        cout << lcm(b, c) / b << endl;
    }
    return 0;
}