#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n;
        c = n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == s[i+1])
            {
                c--;
                i++;
            }
        }
        cout << c << endl;
    }

    return 0;
}