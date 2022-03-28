#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int dsa, toc, dm;
        int dsa1, toc1, dm1;
        cin >> dsa >> toc >> dm;
        cin >> dsa1 >> toc1 >> dm1;
        int total = dsa + toc + dm;
        int total1 = dsa1 + toc1 + dm1;
        if(total>total1)
        {
            cout << "Dragon\n";
        }
        else if (total<total1)
        {
            cout << "Sloth\n";
        }
        else
        {
            if(dsa>dsa1)
            cout << "Dragon\n";
            else if(dsa<dsa1)
            cout << "Sloth\n";
            else
            {
                if(toc>toc1)
                cout << "Dragon\n";
                else if(toc<toc1)
                cout << "Sloth\n";
                else
                cout << "Tie\n";
            }
        }
    }

    return 0;
}