#include<iostream>
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
        if(n>65)
        {
            cout << "Overload" << endl;
        }
        else if(n<35)
        {
            cout << "Underload" << endl;
        }
        else
        {
            cout << "Normal" << endl;
        }
    }

    return 0;
}