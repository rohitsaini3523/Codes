#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    long long int p, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        ans += p;
    }
    cout << ans << endl;
    return 0;
}
