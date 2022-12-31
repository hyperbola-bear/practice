
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int laps_recorded, laps_needed, start_numbers;
    cin >> laps_recorded >> laps_needed >> start_numbers;
    unordered_map<int, pair<int, int>> freq;
    vector<vector<int>> rank;
    for (int i = 0; i < laps_recorded; i++)
    {
        // int reg_num{0};
        //  float lap_time{0};
        //  cin >> reg_num >> lap_time;
        int reg_num{0}, lap_mins{0}, lap_seconds{0};
        char dot;
        cin >> reg_num >> lap_mins >> dot >> lap_seconds;
        int seconds = lap_mins * 60 + lap_seconds;

        // long seconds = (floor(lap_time) * 60 + (static_cast<int>(lap_time * 100) % 100));

        freq[reg_num - 1].first += seconds;
        freq[reg_num - 1].second++;
        if (freq[reg_num - 1].second == laps_needed)
        {
            rank.push_back({reg_num, freq[reg_num - 1].first});
        }
        // cout << freq[reg_num - 1] << endl;
    }

    sort(rank.begin(), rank.end(), [](vector<int> &a, vector<int> &b)
         {
        if (a[1] == b[1])
        {
            return a[0] < b[0];
        }
        return a[1] < b[1]; });

    for (auto &i : rank)
    {
        cout << i[0] << endl;
    }
}