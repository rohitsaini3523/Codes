#include<iostream>
using namespace std;
#define ll long long 

int main()
{
    int count = 5;
    int *m = &count;
    int q = *m;
    cout << count << endl
         << m << endl
         << q << endl;
    return 0;
}