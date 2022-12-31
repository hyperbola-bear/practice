#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;
    nums = {6, 27, 25, 23, 25, 16, 12, 9, 1, 2, 7, 20, 19, 23, 16, 0, 6, 22, 16, 11, 8, 27, 9, 2, 20, 2, 13, 7, 25, 29, 12, 12, 18, 29, 27, 13, 16, 1, 22, 9, 3, 21, 29, 14, 7, 8, 14, 5, 0, 23, 16, 1, 20};
    int pass = 0;
    int min = 101;
    int change;
    int pos;
    int min_pos;

    for (int i = nums.size() - 1; i > 0; i--)
    {

        if (nums[i] > nums[i - 1])
        {
            pos = i - 1;
            change = nums[i - 1];
            cout << "change: " << change << endl;

            pass = 1;
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] > nums[i - 1] && nums[j] < min)
                {
                    min = nums[j];
                    min_pos = j;
                    cout << "min: " << min << endl;
                }
            }
            break;
        }
    }
    if (pass == 1)
    {
        swap(nums[pos], nums[min_pos]);
        sort(nums.begin() + pos + 1, nums.end());
        cout << "[";
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums.size() - 1)
            {
                cout << nums[i] << ",";
            }
            else
            {
                cout << nums[i] << "]" << endl;
            }
        }
    }
    else
    {
        sort(nums.begin(), nums.end());
        cout << "[";
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums.size() - 1)
            {
                cout << nums[i] << ",";
            }
            else
            {
                cout << nums[i] << "]" << endl;
            }
        }
    }
}
