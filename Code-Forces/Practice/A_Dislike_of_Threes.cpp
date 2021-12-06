#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1;; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
                continue;
            n--;
            if (n == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}