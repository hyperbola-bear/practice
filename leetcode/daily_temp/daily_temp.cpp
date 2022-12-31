#include <bits/stdc++.h>

using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    vector<int> answer(temperatures.size(), 0);
    stack<pair<int, int>> s; // temp, index
    for (int i = 0; i < temperatures.size(); i++)
    {

        while (!s.empty() && temperatures[i] > s.top().first)
        {
            // cout << temperatures[i] << " " << s.top().first << endl;
            int index = s.top().second;
            answer[index] = i - index;
            // cout << i << " - " << index << " = " << answer[index] << endl;
            s.pop();
        }

        s.push({temperatures[i], i});
        // cout << "push: " << temperatures[i] << " " << i << endl;
    }

    // while (!s.empty())
    // {
    //     answer[s.top().second] = 0;
    //     s.pop();
    // }
    return answer;
}

int main()
{
    vector<int> temperatures{73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans(temperatures.size());
    ans = dailyTemperatures(temperatures);
    for (auto &i : ans)
    {
        cout << i << endl;
    }
}