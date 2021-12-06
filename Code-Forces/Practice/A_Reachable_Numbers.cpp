#include <iostream>
using namespace std;
 
int main() 
{
    long long n, k = 0;
    cin >> n;
    while(n>9)  // 9 so [ 9 + 1 -> 10 and f(10)-> 1 ]
    {
        k++, n++;   //adding 1 to n and k
        while(n%10==0)
            n /= 10;
    }
    k += 9; 
    cout << k << endl;
}