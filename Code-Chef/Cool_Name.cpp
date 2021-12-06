#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    long int sum = 0;
    int k;
    cin >> k;
    string s;
    char temp;
    while (k--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        for (int i = 0; i < s.length(); i++)
        for (int j = 0; j < s.length()-1; j++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {

            sum += ((i + 1) * (s[i] - 'a' + 1));
        }
        cout << sum << endl;
    }
    return 0;
}