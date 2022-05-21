#include <bits/stdc++.h>
using namespace std;

void solve(int N, vector<string> command)
{
    int index_value = 0;
    vector<string> v(26);
    int count = 0;
    // Your code goes here
    for (int i_command = 0; i_command < N; i_command++)
    {
        string s = command[i_command];
        if(s[0] == 'a')
        {
            string h = "";
            h.append(s.begin() + 9, s.end());
            int index = int(s[7]) - 97;
            v[index].push_back(h);
        }
    }
    for (int i_command = 0; i_command < v.size(); i_command++)
    {
        cout << v[i_command] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<string> command(N);
    for (int i_command = 0; i_command < N; i_command++)
    {
        getline(cin, command[i_command]);
    }
    solve(N, command);
}