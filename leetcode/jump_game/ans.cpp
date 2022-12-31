#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int> &nums)
{
    int reach = nums[0];
    for (int i = 1; i < reach + 1; i++)
    {
        reach = max(reach, i + nums[i]);
        cout << reach << endl;
    }
    if (reach >= nums.size() - 1)
    {
        return true;
    }
    return false;
}

int main()
{
    // vector<int> nums{3, 2, 1, 0, 4};
    vector<int> nums{1, 2, 3};
    cout << canJump(nums) << endl;
}