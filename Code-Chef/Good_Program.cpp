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
        if(n%4 == 0)
        {
            cout << "Good" << endl;
        }
        else{
            cout << "Not Good" << endl;
        }
    }

    return 0;
}