#include <bits/stdc++.h>

using namespace std;

bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    vector<bool> visited(rooms.size(), false);
    stack<int> s;
    int count{1};
    s.push(0);
    visited[0] = true;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        cout << "at: " << top << endl;
        for (auto &i : rooms[top])
        {
            if (!visited[i])
            {
                visited[i] = true;
                count++;
                s.push(i);
                cout << "pushed: " << i << endl;
            }
        }
    }
    cout << count << " " << rooms.size() << endl;
    if (count == rooms.size())
    {
        return true;
    }
    return false;
}

int main()
{

    vector<vector<int>> rooms{
        {1, 2},
        {2, 1},
        {1}};
    bool result = canVisitAllRooms(rooms);
    cout << boolalpha << result << endl;
}