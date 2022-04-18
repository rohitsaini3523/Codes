#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x%4 !=0)
        cout << x / 4 + 1<<"\n";
        else
        cout<<x/4<<"\n";
    }

    return 0;
}