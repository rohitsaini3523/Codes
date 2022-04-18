#include<bits/stdc++.h>
using namespace std;

long long binaryexpo(int a, int b)
{
    long long ans = 1;
    while(b>0)
    {
        if(b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << binaryexpo(a, b);

    return 0;
}