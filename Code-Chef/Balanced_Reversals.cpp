#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_zero = 0;
        int count_one = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
                count_one++;
            else
                count_zero++;
        }
        while(count_zero--)
        {
            cout << 0;
        }
        while(count_one--)
        {
            cout << 1;
        }
        cout << endl;
    }

    return 0;
}