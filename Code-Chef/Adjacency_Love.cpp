#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int *b = new int[n - 1];
        int *b1 = new int[n - 1];
        int temp;
        int ans = 0, flag =0;
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = arr[i] * arr[i + 1];
            ans += b[i];
            if (b[i] % 2 == 0)
            {
                b1[i] = 1;
            }
            else
                b1[i] = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (b1[i] == 1 )
            {
                swap(arr[i], arr[i + 1]);
                flag = 1;
                break;
            }
        }
        if (flag = 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if(flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
