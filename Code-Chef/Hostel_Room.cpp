#include<iostream>
using namespace std;

int main()
{
    int test_case = 1;
    cin >> test_case;
    while(test_case--)
    {
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        int max = x;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x += arr[i];
            if(x>max)
                max = x;
        }
        cout << max << endl;
    }
    return 0;
}