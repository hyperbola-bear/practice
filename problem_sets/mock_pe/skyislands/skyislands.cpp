#include <bits/stdc++.h>

using namespace std;

map<int, pair<bool, set<int>>> m;
int dfs(int i)
{
    if (m[i].first == true)
    {
        return 0;
    }
    m[i].first = true;
    int count = 1;
    for (auto &j : m[i].second)
    {
        count += dfs(j);
    }
    return count;
}

int main()
{
    int islands, bridges;
    cin >> islands >> bridges;
    for (int i = 0; i < bridges; i++)
    {
        int a, b;
        cin >> a >> b;
        m[a].first = false;
        m[a].second.insert(b);
        m[b].second.insert(a);
    }

    if (islands == dfs(1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}