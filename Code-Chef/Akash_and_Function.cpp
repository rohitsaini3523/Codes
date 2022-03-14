#include<iostream>
using namespace std;
#define li long int
int main()
{
    li t;
    cin >> t;
    while(t--)
    {
        li n;
        cin >> n;
        li ans = n / 2;
        if(n%2 != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}