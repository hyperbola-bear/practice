#include <bits/stdc++.h>
// LT16_H4V3LUCKG00DFUN
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long bullet_points, queries;
    cin >> bullet_points >> queries;
    unordered_map<int, stack<int>> track;
    for (int i = 0; i < queries; i++)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int start, end;
            cin >> start >> end;
            for (int j = start; j <= end; j++)
            {
                if (track[j].empty())
                {
                    track[j].push(i);
                }
            }
        }
        else
        {
            cout << track.size() << endl;
        }
    }
}