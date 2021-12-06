#include<iostream>
using namespace std;
int main()
{
    int n, k, m = 0;
    cin >> n >> k;
    int a[n];
    int j = n;
    int i = 0;
    while (n--)
    {
        cin >> a[i];
        i++;
    }
    for (int k1 = 0; k1 < j; k1++)
    {
        if(a[k1]>=a[k-1])
        {
            if(a[k1]!=0)
                m++;
        }
    }
    cout << m << endl;
    return 0;
}