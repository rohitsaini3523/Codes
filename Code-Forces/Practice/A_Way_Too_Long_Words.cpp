#include<iostream>
#include<cstring>
#define max 100
using namespace std;
int main()
{
    char a[max];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        string s1 = string(a);
        if(strlen(a)>10)
        {
            cout << a[0] << strlen(a) - 2 << a[strlen(a)-1] << "\n";
        }
        else
        {
            cout << s1 << "\n";
        }
    }

    return 0;
}