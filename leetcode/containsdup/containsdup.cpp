#include <bits/stdc++.h>

bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int> umap;
    stack<int> s;
    for (auto &i : nums)
    {
        if (umap.find(i) != umap.end())
        {
            umap[i] = 1;
            s.push(i);
        }
        else
        {
            umap[i]++;
        }
        if (umap[i] == 2)
        {
            s.pop();
        }
    }
    if (s.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}
std::un