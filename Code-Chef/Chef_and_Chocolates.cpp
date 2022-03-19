#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c, x, y;
        cin >> c >> x >> y;
        cout << y * (c - x) << endl;
    }

    return 0;
}