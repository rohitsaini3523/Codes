#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i<n; i++)
    {
        cin >> arr[i];
    }
    int *b = new int[n];
    b[0] = arr[0];
    int max = b[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = arr[i] + (b[i - 1] > 0 ? b[i - 1] : 0);
        max = max > b[i] ? max : b[i];
    }
    cout << max << endl;
    return 0;
}