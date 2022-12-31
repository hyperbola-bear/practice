#include <bits/stdc++.h>

using namespace std;

int max_u(string current, vector<string> &arr, map<char, stack<char>> &m, int index)
{
    m.clear();
    // cout << "current: " << current << " "
    //      << "index: " << index << endl;
    int pass = 0;
    if (current.size() == 26)
    {
        return current.size();
    }
    if (index == arr.size())
    {
        // cout << "returning: " << current.size() << endl;
        return current.size();
    }
    for (auto &i : current)
    {
        if (m[i].empty())
        {

            m[i].push(i);
        }
        else
        {
            pass = 1;
            break;
        }
    }
    for (auto &i : arr[index])
    {

        if (m[i].empty())
        {

            m[i].push(i);
        }
        else
        {
            pass = 1;
            break;
        }
    }

    int temp = max_u(current, arr, m, index + 1);
    int temp1 = 0;
    if (pass == 0)
    {
        current += arr[index];
        temp1 = max_u(current, arr, m, index + 1);
    }
    // cout << "current: " << current << " "
    //      << "index: " << index << endl;
    // cout << temp << " " << temp1 << endl;
    return max(temp1, temp);
}

int main()
{
    string s;
    vector<string> arr = {"uu"};
    string current = "";
    map<char, stack<char>> m;
    if (arr.size() == 0)
    {
        cout << 0 << endl;
    }
    else if (arr.size() == 1)
    {
        for (auto &i : arr[0])
        {
            if (m[i].empty())
            {

                m[i].push(i);
            }
            else
            {
                cout << 0 << endl;
                return 0;
            }
        }
        cout << arr[0].size() << endl;
    }
    else
    {
        cout << max_u(current, arr, m, 0) << endl;
    }
}