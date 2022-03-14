#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        if(n==2)
        {
            cout << "-1" << endl;
        }
        else if(n==4)
        {
            cout << "1 4 2 3" << endl;
        }
        else
        {
            if(n%2!=0)
            {
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << " ";
                }
                cout << endl; 
            }
            else
            {
                for (i = 0; i < n - 4; i++)
                {
                    cout << i + 1 << " ";
                }
                cout << i + 3 << " " << i + 4 << " " << i + 2 << " " << i + 1 << endl;
            }
        }
    }

    return 0;
}