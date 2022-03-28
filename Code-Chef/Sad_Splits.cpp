#include<iostream>
#include<string>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        int *a = new int[s.length()];
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            a[i] = n % 10;
            n = n / 10;
            if(a[i]%2 ==0)
            {
                count++;
            }
        }
        if(count>=2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}