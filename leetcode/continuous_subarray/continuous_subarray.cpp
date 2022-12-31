#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {23, 2, 4, 6, 6};
    int k = 7;
    int s;
    unordered_map<int, int> m;
    if (k == 0)
    {
        cout << "true" << endl;
        return 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        s += nums[i];
        s %= k;
        cout << s << endl;
        if (m.find(s) != m.end())
        {
            if (i - m[s] > 1)
            {
                cout << "true" << endl;
                return 0;
            }
        }
        else
        {
            m[s] = i;
        }
    }
    cout << "false" << endl;
    return 0;
}