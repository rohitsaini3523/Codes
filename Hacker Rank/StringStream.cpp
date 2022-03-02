#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> v;
    char ch;
    int temp;
    // Taking integer to string stream 
    while(ss>>temp)
    {
        v.push_back(temp);
        // Taking Character to a string stream and do nothing
        ss >> ch;
        ss.clear();
        //Clear is optional as stream get clear every time we use it
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}