#include <bits/stdc++.h>

using namespace std;

int maximumHappiness(int x, int y, vector<vector<int>> items)
{
    priority_queue<pair<int, int>> tt;
    priority_queue<pair<int, int>> amz;
    for (auto &i : items)
    {

        int happiness = i[2];
        int dollars = i[1];
        if (i[0] == 1)
        {
            tt.push({happiness, dollars});
        }
        else
        {
            amz.push({happiness, dollars});
        }
    }
    int total_happiness{0};
    int gifts{0};
    while (gifts != 2)
    {
        int ttt{0};
        int amzz{0};
        if (tt.empty())
        {
            amzz = 1;
        }
        else if (amz.empty())
        {
            ttt = 1;
        }
        else if (tt.top().first > amz.top().first)
        {
            ttt = 1;
        }
        else
        {
            amzz = 1;
        }

        // cout << "ttt: " << ttt << " amzz: " << amzz << endl;
        if (ttt)
        {

            if (x < (tt.top().second))
            {
                tt.pop();
            }
            else
            {

                total_happiness += (tt.top().first);
                x -= (tt.top().second);
                // cout << "x: " << tt.top().first << " " << tt.top().second << endl;
                tt.pop();
                gifts++;
            }
        }

        if (amzz)
        {
            if (!amz.empty())
            {

                if (y < (amz.top().second))
                {
                    amz.pop();
                }
                else
                {

                    total_happiness += (amz.top().first);
                    y -= (amz.top().second);
                    // cout << "y: " << amz.top().first << " " << amz.top().second << endl;
                    amz.pop();

                    gifts++;
                }
            }
        }
    }
    return total_happiness;
}

int main()
{
    int x = 10;
    int y = 8;
    vector<vector<int>> items = {{1, 2, 10}, {1, 3, 20}, {1, 5, 1}};
    int result = maximumHappiness(x, y, items);
    // cout << result << endl;
}