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
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag;
        int i = 0;
        for (i = 1; i < n; i++)
        {
            if(arr[0]!= arr[1] && arr[0]!= arr[2])
            {
                i = 0;
                break;
            }
            if(arr[i] == arr[i-1])
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << i+1 << endl;
        }

    }

    return 0;
}