#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    int i = 0;
    double postive = 0, negative = 0, zero = 0;
    while(i!=n)
    {
        cin >> a[i];
        if(a[i]>0)
        {
            postive++;
        }
        if(a[i]<0)
        {
            negative++;
        }
        if(a[i]==0)
        {
            zero++;
        }
        i++;
    }
    cout << fixed << setprecision(6) << postive / n << endl;
    cout << fixed << setprecision(6) << negative / n << endl;
    cout << fixed << setprecision(6) << zero / n << endl;
    return 0;
}