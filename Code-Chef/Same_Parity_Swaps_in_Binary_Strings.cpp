#include<bits/stdc++.h>
using namespace std;
int count01(string s)
{
    int count = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if((s[i]=='0')&&(s[i+1]=='1'))
        {
            count++;
        }
    }
        return count;
}
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0, one = 0;
        int j = 0,k = count01(s);
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
            {
                one++;
            }
            else if(s[i] == '0')
            {
                zero++;
            }            
        }
        j = min(zero, one);
        cout << max(k, j) << "\n";
        //cout << s;
    }

    return 0;
}