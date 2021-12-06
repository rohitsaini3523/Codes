#include <iostream>
#include<string.h>
using namespace std;
 
int main() 
{
    char s1[150], s2[150];
    cin >> s1;
    cin >> s2;
    int res;
    int i = 0;
    cin >> s1 >> s2;
    for(int i=0;i<strlen(s1);i++)
    s1[i] = tolower(s1[i]) , s2[i] = tolower(s2[i]);
    cout << strcmp(s1,s2) << endl;
    return 0;
}