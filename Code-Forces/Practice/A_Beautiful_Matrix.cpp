#include <iostream>
using namespace std;
 
int main() 
{
    int k, l;
    int a[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                k = i + 1;
                l = j + 1;
            }
        }
    int m = 3 - k;
    int n = 3 - l;
    if(m<0)
        m = m * (-1);
    if(n<0)
        n = n * (-1);
    cout << m + n << endl;
    return 0;
}