#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) << endl;
    }

    return 0;
}