#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int n1 = n / a, m1 = m / a;
    if(n%a!=0)
    {
        n1 += 1;
    }
    if(m%a!=0)
    {
        m1 += 1;
    }

    cout << n1 * m1 << endl;
    return 0;
}