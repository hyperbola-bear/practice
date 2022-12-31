#include <bits/stdc++.h>

using namespace std;

int robbery(vector<int> &nums, int n, int sum)
{
    vector<int> memo = vector<int>(n, -1);
    memo[0] = 0;
    memo[1] = nums[0];
    for (int i = 2; i < n; i++)
    {
        memo[i] = max(memo[i - 1], memo[i - 2] + nums[i]);
    }
    return memo[n - 1];
}

int main()
{
}