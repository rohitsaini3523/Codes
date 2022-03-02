#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c = 0;
        cin >> a >> b;
        c = 21 - (a + b);
        if(a+b<11)
        {
            c = -1;
        }
        cout << c << endl;
    }

    return 0;
}