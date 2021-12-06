#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    int step;
    int time = 0;
    while(t--)
    {
        step = 0;
        cin >> time;
        for (int t = 1; t <= time; t++)
        {
            if((t%2)!=0)
            {
                step += 3;
            }
            else
            {
                step -= 1;
            }
        }
        cout << step << endl;
    }
    return 0;
}