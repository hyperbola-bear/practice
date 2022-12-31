#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_blocks{0};
    vector<int> distance;
    cin >> num_blocks;
    long tallest = 0;
    vector<int> pos;
    for (int i = 0; i < num_blocks; i++)
    {
        long block;
        cin >> block;
        if (block > tallest)
        {

            pos.resize(0);
            pos.push_back(i);

            tallest = block;
            // cout << block << " " << i << endl;
        }
        else if (block == tallest)
        {
            pos.push_back(i);
            // cout << block << " " << i << endl;
        }
    }

    int position{0};
    for (int i = 0; i < num_blocks; i++)
    {
        if (i <= pos.front())
        {
            distance.push_back(pos[0] - i);
        }
        else if (i >= pos.back())
        {
            distance.push_back(i - pos.back());
        }
        else
        {
            // cout << "pos: " << pos[position] << endl;
            // cout << "pos + 1: " << pos[position + 1] << endl;
            // cout << "i: " << i << endl;
            int temp1 = i - pos[position];
            int temp2 = pos[position + 1] - i;
            // cout << "temp1: " << temp1 << endl;
            // cout << "temp2: " << temp2 << endl;
            distance.push_back(min(temp1, temp2));
            if (temp2 == 0)
            {
                position++;
            }
        }
    }
    for (auto &i : distance)
    {
        cout << i << " ";
    }
}