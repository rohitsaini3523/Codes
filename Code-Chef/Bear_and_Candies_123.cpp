#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    int i = 0;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        int a, b;
        int flag = 0;
        cin >> a >> b;
        int a1 = 0, b1 = 0;
        if (flag == 0)
        {
            i = 1;
            while (1)
            {
                if (i % 2!= 0)
                {
                    a1 += i;
                }
                else
                {
                    b1 += i;
                }
                if (a1 > a)
                {
                    flag = 1;
                    break;
                }
                if (b1 > b)
                {
                    flag = 2;
                    break;
                }
                i++;
            }
        }
        if (flag == 1)
            cout << "Bob\n";
        else if (flag == 2)
            cout << "Limak\n";
    }

    return 0;
}