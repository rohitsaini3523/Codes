#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int cost = a[1] + a[2];
        cout << cost << endl;
    }
    return 0;
}