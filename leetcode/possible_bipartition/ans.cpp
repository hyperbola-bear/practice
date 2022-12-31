#include <bits/stdc++.h>

using namespace std;

bool possibleBipartition(int n, vector<vector<int>> &dislikes)
{
    vector<vector<int>> adjacency_list(n + 1, vector<int>());
    vector<int> color(n + 1, -1); // red/black = 0/1
    for (auto &i : dislikes)
    {
        adjacency_list[i[0]].push_back(i[1]);
        adjacency_list[i[1]].push_back(i[0]);
    }
    for (int i = 1; i <= n; i++)
    {
        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            for (auto &i : adjacency_list[top])
            {
                if (color[i] == -1)
                {
                    color[i] = (1 + color[top]) % 2;
                    q.push(i);
                }
                else if (color[i] == color[top])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
}