#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k = 8;
        cin >> n;
        int f;
        for (int i = 0; i < n; i++)
        {
            cin >> f;
            if (f != 6 && f != 7 && f != 13 && f != 14 && f != 20 && f != 21 && f != 27 && f != 28)
            {
                k++;
            }
        }
        cout << k << endl;
    }

    return 0;
}