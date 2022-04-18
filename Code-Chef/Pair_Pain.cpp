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
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
                count++;
            if(arr[i] == 2)
                count1++;
        }
        cout << count << "--" <<count1 << "\n";
        if(count == 0 && (count1 == 0 || count1 == 1) )
            cout << 0 << "\n";
        else if(count<n && arr[count-1] == 1 && count != 0)
            cout << ((n-count) *count) + (count1 / 2) << "\n";
        else if(arr[0] == 2)
        {
            cout << count1 * (count1 - 1) / 2 << "\n";
        }
        else
            cout << n * (n - 1) / 2 << "\n";
    }

    return 0;
}