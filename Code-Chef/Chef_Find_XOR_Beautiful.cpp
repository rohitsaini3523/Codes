#include<bits/stdc++.h>
using namespace std;
void check(int a[], int n,int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = (a[i] ^ a[j]) & x;
            if(k == 0)
            {
                count++;
            }
        }
    }
    cout << count << "\n";
}
void accept(int a[],int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    check(a, n,x);
}
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n;
        int a[n];
        accept(a, n,x);
    }

    return 0;
}