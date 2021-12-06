#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i==j)
            {
                sum1 += a[i][j];
            }
            if((i+j)==(n-1))
            {
                sum2 += a[i][j];
            } 
        }
    int ans = sum1 - sum2;
    if(ans<0)
    {
        ans = ans * (-1);
    }
    cout << ans << endl;
    return 0;
}