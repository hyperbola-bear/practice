#include <bits/stdc++.h>

using namespace std;

int sim_task(list<int *> &arr, int time, int count, int goal)
{
    // cout << "time: " << time << " count: " << count << endl;
    if (count == goal)
    {
        return count;
    }
    if (arr.size() == 0)
    {
        return -1;
    }
    int result{0};
    int time_taken{arr.front()[1]};
    int checker{0};
    if (arr.front()[0] >= time)
    {
        checker = 1;
        arr.pop_front();
        result = sim_task(arr, time_taken, count + 1, goal);
        if (result == goal)
        {
            return result;
        }
    }
    if (checker == 0)
    {
        arr.pop_front();
    }
    result = sim_task(arr, time, count, goal);
    if (result == goal)
    {
        return result;
    }
    return -1;
}

bool compare(int *a, int *b)
{

    if (a[1] == b[1])
    {
        return a[0] < b[0];
    }
    return a[1] < b[1];
}

int main()
{
    int goal{0}, task{0};
    cin >> goal >> task;

    list<int *> tasks;
    for (int i = 0; i < task; i++)
    {
        int *arr = new int[2];
        cin >> arr[0] >> arr[1];
        tasks.push_back(arr);
    }
    // sort(tasks.begin(), tasks.end(), [](int *a, int *b)
    //      {
    //     if (a[1] == b[1]) {
    //         return a[0] < b[0];
    //     }
    //     return a[1] < b[1]; });

    tasks.sort(compare);

    // for (auto &task : tasks)
    // {
    //     cout << task[0] << " " << task[1] << endl;
    // }

    if (sim_task(tasks, 0, 0, goal) != -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}