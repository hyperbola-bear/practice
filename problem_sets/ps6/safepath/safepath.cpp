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
    vector<deque<int>> result(m.size());
    // queue<tuple<int, int, int>> q;
    // q.push({start, 0, 1}); // node, distance, junction
    queue<pair<int, int>> q;
    unordered_map<pair<int, int>, stack<int>, hash_pair> qing;
    q.push({start, 1}); // node, junction
    result[start].push_front(0);
    while (!q.empty() && q.front().second < junct)
    {
        // cout << "front:" << (q.front().first) << " junction: " << (q.front().second) << " distance: " << result[q.front().first].back() << endl;
        int pass = 0;
        for (auto &it : m[q.front().first])
        {
            int that;
            int prev;
            if (qing[{q.front().first, q.front().second + 1}].empty())
            {
                prev = result[q.front().first].back();
            }
            else
            {
                auto temp = result[q.front().first].end();
                temp -= 2;
                prev = *temp;
            }
            if (result[it.first].empty())
            {
                q.push({it.first, q.front().second + 1});
                qing[{it.first, q.front().second + 1}].push(1);
                result[it.first].push_back(it.second + prev);
                // cout << "empty pushed:" << it.first << " " << it.second + prev << " " << q.front().second + 1 << endl;
            }
            else
            {

                that = result[it.first].back();

                // cout << "that:" << that << " " << "distance: " << it.second + prev << endl;
                if (that > it.second + prev)
                {
                    if (qing[{it.first, q.front().second + 1}].empty())
                    {
                        qing[{it.first, q.front().second + 1}].push(1);

                        q.push({it.first, q.front().second + 1});
                        // cout << "compare pushed:" << it.first << " " << it.second + prev << " " << q.front().second + 1 << endl;
                    }
                    else
                    {
                        result[it.first].pop_back();
                    }
                    result[it.first].push_back(it.second + prev);
                }
            }
        }

        q.pop();
    }

    if (result[dest].empty())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result[dest].back() << endl;
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