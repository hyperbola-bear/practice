#include <bits/stdc++.h>

using namespace std;

vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
{
    vector<vector<int>> adj_list(n, vector<int>());
    vector<int> answer(n, -1);
    vector<int> children(n, 0);
    for (auto &i : edges)
    {
        int bigger = max(i[0], i[1]);
        adj_list[i[0]].push_back(i[1]);
        adj_list[i[1]].push_back(i[0]);
    }
    for (auto &i : children)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = n - 2; i > 0; i--)
    {
        children[edges[i][0]] += children[edges[i][1]];
    }
    for (auto &i : children)
    {
        cout << i << " ";
    }
    cout << endl;
    queue<int> q;
    vector<bool> visited(n, false);
    vector<int> distance(n, -1);
    q.push(0);
    distance[0] = 0;
    visited[0] = true;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for (auto &j : adj_list[top])
        {
            if (!visited[j])
            {

                children[top] += children[j] q.push(j);
                distance[j] = distance[top] + 1;
                visited[j] = true;
            }
        }
    }
    int count{0};
    for (auto &j : distance)
    {
        count += j;
        cout << j << " ";
    }
    cout << endl;
    answer[0] = count;
    q.push(0);
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for (auto &i : adj_list[top])
        {
            if (i > top)
            {

                answer[i] = answer[top] + n - 2 * (1 + children[i]);
                q.push(i);
            }
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> edges{{0, 1}, {0, 2}, {2, 3}, {2, 4}, {2, 5}};
    int n = 6;
    vector<int> ans = sumOfDistancesInTree(n, edges);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}