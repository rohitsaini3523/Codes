#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[0]=='+')
        {
            ans++;
        }
        if(s[0]=='-')
        {
            ans--;
        }
        if(s[2]=='+')
        {
            ans++;
        }
        if(s[2]=='-')
        {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}