#include <iostream>
using namespace std;
 
int main() 
{
    long t;
    cin >> t;
    while(t--)
    {
        long long x, y, k = 0;
        cin >> x >> y;
        k = x + 2 * y;
        if (x == 0 && y % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        else if(x==0 && y%2!=0)
        {
            cout << "NO" << endl;
            continue;
        }
        
        if (k % 2 == 0 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}