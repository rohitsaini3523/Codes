#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, wait = 0;
        cin >> n >> m;
        wait = n * m;
        cout << wait << endl;
    }
    return 0;
}