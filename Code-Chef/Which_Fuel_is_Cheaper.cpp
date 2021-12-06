#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        while(k--)
        {
            x += a;
            y += b;
        }
        if(y>x)
        {
            cout << "PETROL" << endl;
        }
        if(y<x)
        {
            cout << "DIESEL" << endl;
        }
        if(x==y)
        {
            cout << "SAME PRICE" << endl;
        }
    }
    return 0;
}