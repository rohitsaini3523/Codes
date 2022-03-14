#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    int flag;
    while(t--)
    {
        flag = -1;
        int n, x;
        cin >> n >> x;
        int *house = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> house[i];
            if(house[i] < x)
            {
                flag = i;
            }
        }
        cout << flag+1 << endl;
    }

    return 0;
}