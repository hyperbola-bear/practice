#include <bits/stdc++.h>

using namespace std;

unordered_map<string, pair<bool, vector<string>>> m;
stack<string> stk;
void dfs(string curr)
{
    // cout << curr << endl;
    m[curr].first = true;
    for (auto &i : m[curr].second)
    {
        if (m[i].first == false)
        {
            dfs(i);
        }
    }
    stk.push(curr);
    // cout << curr << endl;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        // cout << "i: " << i << endl;
        string line;
        getline(cin, line);
        stringstream ss(line);
        string word;
        ss >> word;
        word.pop_back();
        string dep;
        while (ss >> dep)
        {
            // cout << dep << endl;

            m[dep].second.push_back(word);
            m[dep].first = false;
        }
    }
    string start;
    cin >> start;
    dfs(start);

    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }
}