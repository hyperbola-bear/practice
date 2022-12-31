#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &edgesed, int source, vector<bool> &visited)
{
    visited[source] = true;
    for (auto &i : edgesed[source])
    {

        if (!visited[i])
        {
            dfs(edgesed, i, visited);
        }
    }
}
bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    vector<vector<int>> edgesed(n);
    for (auto &i : edges)
    {
        edgesed[i[0]].push_back(i[1]);
        edgesed[i[1]].push_back(i[0]);
    }
    vector<bool> visited(n, false);
    dfs(edgesed, source, visited);
    return visited[destination];
}

int main()
{
    vector<vector<int>> edges{
        {0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}};
    int n = 6;
    int source = 0;
    int destination = 5;
    bool result = validPath(n, edges, source, destination);
    cout << result << endl;
}