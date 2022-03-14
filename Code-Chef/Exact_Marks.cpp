#include <iostream>
using namespace std;
#define li long int
int main()
{
    li t;
    cin >> t;
    while (t--)
    {
        li n, x;
        cin >> n >> x;
        li correct = 0, incorrect = 0, unattempt = 0;
        if (x % 3 == 0)
        {
            correct = x / 3;
        }
        else if (x % 3 == 1)
        {
            correct = (x / 3) + 1;
            incorrect = 2;
        }
        else if (x % 3 == 2)
        {
            correct = (x / 3) + 1;
            incorrect = 1;
        }
        unattempt = n - (correct + incorrect);
        if(correct + incorrect <= n)
        {
            cout << "YES" << endl;
            cout << correct << " " << incorrect << " " << unattempt << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}