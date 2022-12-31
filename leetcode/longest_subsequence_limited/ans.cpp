#include <bits/stdc++.h>

using namespace std;

vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
    sort(nums.begin(), nums.end());
    vector<int> sum(nums.size() + 1, 0);
    int count{0};
    for (int i = 1; i < nums.size() + 1; i++)
    {
        count += nums[i - 1];
        sum[i] = count;
    }
    vector<int> ans;
    for (auto &i : queries)
    {
        int index = upper_bound(sum.begin(), sum.end(), i) - sum.begin();

        ans.push_back(index - 1);
    }
    return ans;
}

int main()
{
    vector<int> nums = {736411, 184882, 914641, 37925, 214915};
    vector<int> queries = {331244, 273144, 118983, 118252, 305688, 718089, 665450};
    vector<int> ans = answerQueries(nums, queries);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}