#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int val = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        val = val ^ nums[i];
        cout << val << endl;
    }
    return val;
}

int main()
{
    vector<int> nums{1, 1, 4, 5, 7, 8, 4, 7, 5};
    cout << singleNumber(nums) << endl;
}