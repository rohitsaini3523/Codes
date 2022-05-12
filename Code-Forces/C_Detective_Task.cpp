#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int k = s.length();
        int count = 0;
        int flag = 0;
        int count1 = 0, count0 = 0;
        for (int i = 0; i < k; i++)
        {
            if(s[i] == '?')
                count++;
            if(s[i] == '1')
            {
                count1 = i + 1;
            }
            if(s[i] == '0')
            {
                flag = 1;
                count0 = i + 1;
                break;
            }
        }
        if((count0 - count1  >0) ||(count0 - count1  == -1))
        {
            if(count0>0 && count1 > 0)
            cout << abs(count0 - count1) + 1 << "\n";
            else
            cout << abs(count0 - count1) << "\n";
        }
        else
        {
            if(count == k)
                cout << count << "\n";
            else if(count<k && count0 == 0)
            {
                cout << 1 << "\n";
            }
                
        }
    }

    return 0;
}