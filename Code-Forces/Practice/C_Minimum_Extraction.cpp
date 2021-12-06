#include <iostream>
using namespace std;
void minimal(long int a[], long int n)
{
    long int p = 0;
    long int temp;
    for (long int i = 0; i < n; i++)
    {
        temp = a[0];
        if(a[i]<temp)
        {
            temp = a[i];
            a[i] = a[i + 1];
        }
    }
    p++;
    for (long int i = 0; i < n-p; i++)
    {
        if(a[i] == temp)
        {
            continue;
        }
        else
        {
            a[i] = a[i];
        }
    }
    for (long int i = 0; i < n-p; i++)
    {
        a[i] = a[i] - temp;
    }
    if(p != n)
    {
        minimal(a, n - p);
    }
    if((n-p) ==0)
    {
        cout << a[0] << endl;
    }
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        minimal(a, n);
   }
    return 0;
}