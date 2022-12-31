#include <bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>> &grid, int i, int j, int count)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == -1)
    {
        return 0;
    }
    cout << "i: " << i << " j: " << j << " grid: " << grid[i][j] << " count:" << count << endl;
    if (grid[i][j] == 2)
    {
        if (count == -1)
        {
            return 1;
        }
        return 0;
    }

    grid[i][j] = -1;
    int ans{0};
    ans += dfs(grid, i + 1, j, count - 1);
    ans += dfs(grid, i - 1, j, count - 1);
    ans += dfs(grid, i, j + 1, count - 1);
    ans += dfs(grid, i, j - 1, count - 1);
    grid[i][j] = 0;
    return ans;
}

int uniquePathsIII(vector<vector<int>> &grid)
{
    int count{0};
    int start_i{0}, start_j{0};
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 0)
            {
                count++;
            }
            else if (grid[i][j] == 1)
            {
                start_i = i;
                start_j = j;
            }
        }
    }
    return dfs(grid, start_i, start_j, count);
}

int main()
{
    vector<vector<int>> grid{{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 2, -1}};
    cout << uniquePathsIII(grid) << endl;
    return 0;
}