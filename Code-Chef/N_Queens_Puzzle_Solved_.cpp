#include <iostream>
#include<math.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double k = pow((0.143 * n), n);
        int ans = k;
        if((k-ans) > 0.5)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}