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
        int n, k;
        int protien = 0;
        cin >> n >> k;
        int consume = k;
        int *arr = new int[n];
        int i, flag = 2, day = 0;
        for (i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            protien += arr[i];
            protien -= consume;
            //cout <<arr[i]<< " "<< protien << " " << k << "\n";
            if(protien<0)
            {
                flag = 1;
                day = i + 1;
                break;
            }
            else 
            {
                flag = 0;
            }
        }
            if (flag == 0)
                cout << "YES\n";
            else if (flag == 1)
                cout << "NO " << day << "\n";
    }

    return 0;
}