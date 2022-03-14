#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string S, T;
        char M[5];
        cin >> S >> T;
        for (int i = 0; i < 5; i++)
        {
            if(S[i]== T[i])
            {
                M[i] = 'G';
            }
            else
            {
                M[i] = 'B';
            }
            cout << M[i];
        }
        cout << endl;
    }

    return 0;
}