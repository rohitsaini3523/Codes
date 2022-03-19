#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int *cost = new int[n];
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        sort(cost, cost + n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(sum+(cost[i]+1)/2 > k)
            {
                sum += cost[i];
                ans = i;
                break;
            }
            sum += cost[i];
        }
        cout << ans << endl;
    }

    return 0;
}