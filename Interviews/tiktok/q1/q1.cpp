#include <bits/stdc++.h>

using namespace std;

vector<int> cat101(vector<vector<int>> catSessions, vector<vector<int>> mouseSessions)
{
    for (long unsigned i = 0; i < catSessions.size(); i++)
    {
        for (long unsigned j = 0; j < mouseSessions.size(); j++)
        {
            if (catSessions[i][0] >= mouseSessions[j][0])
            {
                if (catSessions[i][1] >= mouseSessions[j][1])
                {
                    return vector<int> { static_cast<int>(i), static_cast<int>(j) }
                }
            }
        }
    }
    return vector<int>{-1, -1};
}