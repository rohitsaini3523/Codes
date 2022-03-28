#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int k, p;
        cin >> k >> p;
        if(k==1)
        {
            s.insert(p);
        }
        else if(k==2)
        {
            s.erase(p);
        }
        else if(k==3)
        {
            set<int>::iterator its = s.find(p);
            if(its == s.end())
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
        }
    }
    return 0;
}