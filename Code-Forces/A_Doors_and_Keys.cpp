#include<iostream>
#include<string>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, p;
        cin >> s;
        p = s[3] + s[4] + s[5];
        int a[3];
        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(s[i] == p[j] || s[i] == p[j]+32)
                {
                    a[i] = 1;
                }
                else
                {
                    a[i] = 0;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            k += a[i];
        }
        if(k == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}