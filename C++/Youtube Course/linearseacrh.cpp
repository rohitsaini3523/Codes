#include<iostream>
using namespace std;
int linearsearch(int a[],int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int key;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;
    cout << linearsearch(a, n, key) << endl;
    return 0;
}