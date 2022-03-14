#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, a, b;
        cin >> x >> a >> b;
        if((x - (a + (b*2)))<=0)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}