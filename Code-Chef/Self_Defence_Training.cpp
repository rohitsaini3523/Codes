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
        int *qualify = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> qualify[i];
            if(qualify[i]>=10 && qualify[i]<=60)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}