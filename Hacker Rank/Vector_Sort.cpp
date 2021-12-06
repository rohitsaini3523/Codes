#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int size;
    int k;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for(auto e : v)
    {
        cout << e << " ";
    }
    return 0;
}