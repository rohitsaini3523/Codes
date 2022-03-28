#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int q1;
    cin >> q1;
    v.erase(v.begin() + q1 - 1);
    int q2, q3;
    cin >> q2 >> q3;
    v.erase(v.begin() + q2 - 1, v.begin() + q3 - 1);
    int size = v.size();
    cout << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}