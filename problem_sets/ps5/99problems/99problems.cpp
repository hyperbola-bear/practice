#include <bits/stdc++.h>

using namespace std;

int remove_element_up(map<int, int> &m, int value)
{
    if (m.empty())
    {
        cout << -1 << "\n";
        return 0;
    }
    auto it = m.upper_bound(value);
    if (it == m.end())
    {
        cout << -1 << "\n";
        return 0;
    }
    cout << it->first << "\n";
    m[it->first]--;
    if (m[it->first] == 0)
    {
        m.erase(it);
    }

    return 0;
}

int remove_element_down(map<int, int> &m, int value)
{
    if (m.empty())
    {
        cout << -1 << "\n";
        return 0;
    }

    int pass = 0;
    auto it = m.lower_bound(value);
    if (it == m.end())
    {
        it--;
        cout << it->first << "\n";

        m[it->first]--;
        if (m[it->first] == 0)
        {
            m.erase(it);
        }
        return 0;
    }
    if (it->first == value)
    {
        cout << it->first << "\n";

        m[it->first]--;
        if (m[it->first] == 0)
        {
            m.erase(it);
        }
        return 0;
    }
    if (it != m.begin())
    {
        it--;
        cout << it->first << "\n";

        m[it->first]--;
        if (m[it->first] == 0)
        {
            m.erase(it);
        }
        return 0;
    }
    cout << -1 << "\n";
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;

    int num_inputs{0}, num_commands{0};
    cin >> num_inputs >> num_commands;
    for (int i = 0; i < num_inputs; i++)
    {
        int temp{0};
        cin >> temp;
        if (m.find(temp) == m.end())
        {
            m[temp] = 1;
        }
        else
        {
            m[temp]++;
        }
    }

    for (int i = 0; i < num_commands; i++)
    {
        int command{0}, value{0};
        cin >> command >> value;
        if (command == 1)
        {
            remove_element_up(m, value);
        }
        else
        {
            remove_element_down(m, value);
        }
    }
}
