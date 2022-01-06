#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N, A, B;
        cin >> N >> A >> B;
        int p = 2 * (180 + N);
        cout << p - (A + B) << endl;
    }

    return 0;
}