#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, list<string>> m;
    int num_names;
    cin >> num_names;
    // for (int i = 0; i < num_names; i++)
    // {
    //     string name;
    //     cin >> name;
    //     m[name[0]].push_front(name);
    // }
    // int num_nicknames;
    // cin >> num_nicknames;
    // for (int i = 0; i < num_nicknames; i++)
    // {
    //     string nickname;
    //     cin >> nickname;
    //     int pass = 1;
    //     int count{0};

    //     for (auto it = m[nickname[0]].begin(); it != m[nickname[0]].end(); it++)
    //     {
    //         string temp{*it};
    //         if (nickname == temp.substr(0, nickname.size()))
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << endl;
    // }
    for (int i = 0; i < num_names; i++)
    {
        string name;
        cin >> name;
        for (int j = 1; j <= name.size(); j++)
        {
            m[name.substr(0, j)].push_front(name);
        }
    }
    int num_nicknames;
    cin >> num_nicknames;
    for (int i = 0; i < num_nicknames; i++)
    {
        string nickname;
        cin >> nickname;
        cout << m[nickname].size() << endl;
    }
}