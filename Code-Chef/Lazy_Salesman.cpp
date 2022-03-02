#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, w, k, working = 0;
        cin >> n >> w;
        vector<int> income;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            income.push_back(k);
        }
        sort(income.begin(), income.end());
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            if(m<w)
            {
                m += income[n - i - 1];
                working++;
            }
            else
            {
                break;
            }
        }
        cout << n - working << endl;
    }

    return 0;
}