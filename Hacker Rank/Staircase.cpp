#include <iostream>
using namespace std;
// this is comment
int main() 
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = n; i > j+1; i--)
        {
            cout << " ";
        }
        for (int k = 0;k<=j; k++)
            cout << "#";
        cout << endl;
    }    
    return 0;
}