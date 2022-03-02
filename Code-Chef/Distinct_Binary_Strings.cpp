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
        string st;
        cin >> st;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(st[i+1] != st[i])
            {
                count++;
            }
        }
        cout << count + 1 << endl;
    }

    return 0;
}