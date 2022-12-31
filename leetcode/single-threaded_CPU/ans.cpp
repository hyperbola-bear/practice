#include <bits/stdc++.h>

using namespace std;

typedef pair<long, long> T;

struct comparator
{
    bool operator()(T &a, T &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

vector<long>
getOrder(vector<vector<long>> &tasks)
{
    priority_queue<pair<long, long>> pq_task;
    priority_queue<T, vector<T>, comparator> pq;
    vector<long> ans;
    for (long i = 0; i < tasks.size(); i++)
    {
        pq_task.push({-tasks[i][0], i});
    }
    long time{-pq_task.top().first};
    while (!pq.empty() || !pq_task.empty())
    {
        if (pq.empty() && time < -pq_task.top().first)
        {
            time = -pq_task.top().first;
        }
        while (time >= -pq_task.top().first && !pq_task.empty())
        {
            pq.push({-tasks[pq_task.top().second][1], pq_task.top().second});
            // cout << "pushed: " << tasks[pq_task.top().second][1] << " " << pq_task.top().second << endl;
            pq_task.pop();
        }
        ans.push_back(pq.top().second);
        time -= pq.top().first;
        // cout << "time: " << time << endl;
        pq.pop();
    }
    return ans;
}

long main()
{
    // vector<vector<long>> tasks{{7, 10}, {7, 12}, {7, 5}, {7, 4}, {7, 2}};
    vector<vector<long>> tasks{{19, 13}, {16, 9}, {21, 10}, {32, 25}, {37, 4}, {49, 24}, {2, 15}, {38, 41}, {37, 34}, {33, 6}, {45, 4}, {18, 18}, {46, 39}, {12, 24}};
    vector<long> ans = getOrder(tasks);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}