#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t = 1;
    //cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x>=750)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}