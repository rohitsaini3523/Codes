#include <bits/stdc++.h>
using namespace std;

void solve(int N, vector<string> command)
{
    vector<string> ans;
    int count = 0;
    for (int i_command = 0; i_command < N; i_command++)
    {
        count = 0;
        string s = command[i_command];
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                count++;
            }
        }
        cout << count << "\n";
        if (count == 0)
        {
            if (command[i_command] == "{")
            {
                ans.push_back("{");
            }
            else if (command[i_command] == "}")
            {
                for (int i = ans.size(); i != '{'; i--)
                {
                    ans.pop_back();
                }
                ans.pop_back();
            }
        }
        else if (count == 2)
        {
            string t = "";
            t.append(s.begin() + 7, s.end());
            ans.push_back(t);
        }
        else if (count == 1)
        {
            int i;
            string g = ""; // storing animal name from main string
            g.append(s.begin() + 6, s.end());
            string ic = ""; // storing animal name from ans string
            for (i = ans.size(); ans[i][0] != s[7] || i >= 0; i--)
                ;
            i--;
            string l = "";
            if (i > 0)
            {
                l.append(ans[i].begin() + 2, ans[i].end());
                cout << l << "\n";
                break;
            }
            else
            {
                cout << "undefined\n";
                break;
            }
        }
    }
}

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int N;
    cin >> N;
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<string> command(N);
    for (int i_command = 0; i_command < N; i_command++)
    {
        cin >> command[i_command];
    }
    solve(N, command);
}