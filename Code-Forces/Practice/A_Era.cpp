#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    long long m = 0;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        long long a[n];
        int i = 0;
        while(i != n)
        {
            cin >> a[i];
            i++;
        }
        if(n == 1 )
        {
            m = 0;
        }
        for (int j = n - 1; j > 0; j--)
        {
            if(a[j] > (j))
            {
                m = a[j] - (j+1);
                break;
            }
            else 
            {
                m = 0;
            }
        }
        cout << m << endl;
    }
    return 0;
}