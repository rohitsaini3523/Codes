#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        switch (k)
        {

        case 1:
        {
            string name;
            int marks;
            cin >> name >> marks;
            map<string, int>::iterator itr = m.find(name);
            if (itr == m.end())
            {
                m.insert(make_pair(name, marks));
            }
            else
            {
                m[name] += marks;
            }
            break;
        }
        case 2:
        {
            {
                string name;
                cin >> name;
                m.erase(name);
            }
            break;
        }
        case 3:
        {
            string name;
            cin >> name;
            map<string, int>::iterator itr = m.find(name);
            if (itr == m.end())
            {
                cout << "0\n";
            }
            else
            {
                cout << itr->second << "\n";
            }
        }
        break;
        }
    }
    return 0;
}