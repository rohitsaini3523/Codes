#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int count = 0;
        if(x%5==0)
        {
            int a = x / 10;
            x = x % 10;
            count += a;
            a = x / 5;
            count += a;
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}