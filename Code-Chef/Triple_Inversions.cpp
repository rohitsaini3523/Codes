#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int Ap[n];
        int Bp[n];
        for (int i = 0; i < n;i++)
        {
            cin >> Ap[i];
            Bp[i] = Ap[i];
        }
        int flag =0 ;
        sort(Bp, Bp + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(Bp[i] == Ap[i])
            {
                flag++;
            }
            if(Ap[i] == 0)
            {
                count++;
            }
        }
        if(flag==n || count == n )
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
        }
        /* int P[n + 2];
        for (int i = 0; i < n; i++)
        {
            if(Ap[i] == 0)
            {
                P[i] = i + 1;
                P[i+1] = i + 2;
                P[i+2] = i + 3;
            }
            else if(Ap[i] == 1)
            {
                P[i] = i +2;
                P[i+1] = i + 1;
                P[i+2] = i + 3;
            }
            else if(Ap[i] == 2)
            {
                P[i] = i + 3;
                P[i+1] = i + 1;
                P[i+2] = i + 2;
            }
            else
            {
                P[i] = i + 3;
                P[i+1] = i + 2;
                P[i+2] = i + 1;
            }
        }*/
    }

    return 0;
}