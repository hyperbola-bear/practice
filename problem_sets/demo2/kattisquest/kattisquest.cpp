#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_commands;
    cin >> num_commands;
    map<long, priority_queue<long>> m;
    for (int i = 0; i < num_commands; i++)
    {
        string command;
        cin >> command;
        if (command == "add")
        {
            long energy, gold;
            cin >> energy >> gold;
            m[energy].push(gold);
        }
        else if (command == "query")
        {

            long long energy{0}, gold{0};
            cin >> energy;
            while (energy >= m.lower_bound(0)->first && m.size() > 0)
            {
                auto it = m.upper_bound(energy);
                advance(it, -1);
                gold += it->second.top();

                energy -= it->first;
                it->second.pop();
                if (it->second.size() == 0)
                {
                    m.erase(it);
                }
            }
            cout << gold << endl;
        }
    }
}
