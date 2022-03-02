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
        int *execution = new int[n];
        int possible[4] = {0, 0, 0, 0};
        for (int i = 0; i < n; i++)
        {
            possible[3] += execution[i];
            
            possible[0] += execution[i];
        }
    }

    return 0;
}