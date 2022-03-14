#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    int n = t;
    int i;
    for (int i1 = 0; i1 < t; i1++)
    {
        for (i = 0; i < t - i1; i++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i1; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int j = i1; j > 0; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}