#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        int polybag = k / 10;
        if(k%10 > 0)
        {
            polybag++;
        }
        cout << polybag << endl;
    }

    return 0;
}