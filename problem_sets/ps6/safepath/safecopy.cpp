#include <bits/stdc++.h>

using namespace std;

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);

        if (hash1 != hash2)
        {
            return hash1 ^ hash2;
        }

        // If hash1 == hash2, their XOR is zero.
        return hash1;
    }
};

void bfs(vector<vector<pair<int, int>>> &m, int start, int dest, int junct)
{
    // m = node, {neighbor, weight}
    //  result = node, {junction, distance}
    unordered_map<int, map<int, int>> result;
    // queue<tuple<int, int, int>> q;
    // q.push({start, 0, 1}); // node, distance, junction
    queue<pair<int, int>> q;
    unordered_map<pair<int, int>, stack<int>, hash_pair> qing;
    q.push({start, 1}); // node, junction
    result[start][1] = 0;
    while (!q.empty() && q.front().second < junct)
    {
        cout << "front:" << (q.front().first) << " junction: " << (q.front().second) << " distance: " << result[q.front().first][q.front().second] << endl;
        int pass = 0;
        for (auto &it : m[q.front().first])
        {
            int that;
            if (result[it.first].empty())
            {
                q.push({it.first, q.front().second + 1});
                qing[{it.first, q.front().second + 1}].push(1);
                result[it.first][q.front().second + 1] = it.second + result[q.front().first][q.front().second];
                cout << "empty pushed:" << it.first << " " << it.second + result[q.front().first][q.front().second] << " " << q.front().second + 1 << endl;
            }
            else
            {

                auto bot = result[it.first].rbegin();

                that = bot->second;
                cout << "that:" << that << " "
                     << "distance: " << it.second + result[q.front().first][q.front().second] << endl;
                if (that > it.second + result[q.front().first][q.front().second])
                {
                    if (qing[{it.first, q.front().second + 1}].empty())

                    {
                        qing[{it.first, q.front().second + 1}].push(1);

                        q.push({it.first, q.front().second + 1});
                        cout << "compare pushed:" << it.first << " " << it.second + result[q.front().first][q.front().second] << " " << q.front().second + 1 << endl;
                    }
                    result[it.first][q.front().second + 1] = it.second + result[q.front().first][q.front().second];
                }
            }
        }

        q.pop();
    }
    auto i = result[dest].begin()->first;
    if (result[dest].empty())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result[dest].rbegin()->second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int v;
        cin >> v;

        vector<vector<pair<int, int>>> m(v + 1);
        for (int j = 0; j < v; j++)
        {
            string s;
            getline(cin, s);

            int neighbours;
            cin >> neighbours;
            for (int k = 0; k < neighbours; k++)
            {

                string neighbour, weight;
                cin >> neighbour >> weight;

                m[j].push_back(make_pair(stoi(neighbour), stoi(weight)));
                // cout << j << " " << neighbour << " " << weight << endl;
            }
        }

        int query;
        cin >> query;
        for (int j = 0; j < query; j++)
        {
            int start, dest, junct;
            cin >> start >> dest >> junct;
            bfs(m, start, dest, junct);
        }
        m.clear();
        cout << endl;
    }
}