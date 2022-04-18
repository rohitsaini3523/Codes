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
        cin >> n >> k;
        int *arr = new int[n];
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a[i] = arr[i];
        }
        sort(a, a + n);
        int min = a[0];
        int min2 = a[1];
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if(a[i] == min)
                break;
        }
        //if((i+1) %2 == 0)
        {
            for (int m = 0; m < k || i < k; m++)
            {
                arr[i] = arr[i + 1];
                cout << arr[i] << " ";
                i++;
            }
        }
        sort(arr, arr + n);
        //cout <<arr[0] << "\n";
    }

    return 0;
}