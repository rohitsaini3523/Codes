#include <iostream>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int ans = n / 7;
        long int x = n % 7;
        if(x == 6)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}