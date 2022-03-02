#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x = x1 - x2;
        if(x<0)
        {
            x = x * (-1);
        }
        int y = y1 - y2;
        if(y<0)
        {
            y = y * (-1);
        }
        cout << max(x, y) << endl;
    }
    return 0;
}