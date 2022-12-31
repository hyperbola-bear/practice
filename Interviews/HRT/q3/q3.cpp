#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> solution(vector<vector<char>> table)
{

    vector<vector<char>> result(table.size(), vector<char>(table.size(), '0'));
    int tb{int(table.size())};
    for (int i = 0; i < table.size(); i++)
    {
        int x = table.size() / 2;
        int y = 1;
        if (i % 2 == 1)
        {
            x += 1;
        }
        y += i / 2;
        x += i / 2;
        for (int j = 0; j < table[0].size(); j++)
        {
            result[tb - y][tb - x] = table[i][j];
            x--;
            y++;
        }
    }
    // for (int i = 0; i < table.size(); i++)
    // {
    //     for (int j = 0; j < table.size(); j++)
    //     {
    //         cout << result[i][j];
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < table.size(); i++)
    {
        int x = table.size() / 2 + 1;
        int y = 1;
        if (i % 2 == 1)
        {
            x -= 1;
        }
        y += i / 2;
        x -= i / 2;
        for (int j = 0; j < table[0].size(); j++)
        {
            table[i][j] = result[tb - y][tb - x];
            x++;
            y++;
        }
    }
    // cout << "table: " << endl;

    // for (int i = 0; i < table.size(); i++)
    // {
    //     for (int j = 0; j < table[0].size(); j++)
    //     {
    //         cout << table[i][j];
    //     }
    //     cout << endl;
    // }
    return table;
}

int main()
{
    // vector<vector<char>> table = {{'a', 'b', 'c'},
    //                               {'d', 'e', 'f'},
    //                               {'g', 'h', 'i'},
    //                               {'j', 'k', 'l'},
    //                               {'m', 'n', 'o'},
    //                               {'p', 'q', 'r'}};

    vector<vector<char>> table = {{'a', 'b'}, {'c', 'd'}, {'e', 'f'}, {'g', 'h'}};
    vector<vector<char>> result = solution(table);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
}