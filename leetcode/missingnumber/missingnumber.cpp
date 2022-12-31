#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> &nums)
{
    int expected{0};
    int total{0};
    int size = nums.size();
    for (int i = 0; i < size + 1; i++)
    {
        expected += i;
        if (i < size)
        {

            total += nums[i];
        }
    }
    cout << "expected: " << expected << endl;
    cout << "total: " << total << endl;
    return (expected - total);
}

int main()
{
    vector<int> nums{9, 6, 4, 2, 3, 5, 7, 8, 1};
    int result = missingNumber(nums);
    cout << result << endl;
}