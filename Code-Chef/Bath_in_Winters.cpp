#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        y = y * 2;
        cout << x / y << endl;
    }

    return 0;
}