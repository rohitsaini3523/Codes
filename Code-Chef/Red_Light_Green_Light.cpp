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
        int n, h;
        cin >> n >> h;
        int *arr = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] > h)
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}