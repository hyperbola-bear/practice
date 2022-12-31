#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_commands{0};
    cin >> num_commands;
    string command;
    list<pair<map<string, stack<string>>, stack<string>>> list_of_maps;
    list_of_maps.push_front(pair<map<string, stack<string>>, stack<string>>());
    map<string, stack<string>> answer;
    for (int i{0}; i < num_commands; i++)
    {
        int pass = 0;
        cin >> command;
        // cout << command << endl;
        if (command == "DECLARE")
        {
            string name, type;
            cin >> name >> type;
            // cout << name << " " << type << endl;

            if (list_of_maps.front().first[name].empty())
            {

                list_of_maps.front().first[name].push(type);
                list_of_maps.front().second.push(name);
                answer[name].push(type);
            }
            else
            {

                cout << "MULTIPLE DECLARATION" << endl;
                return 0;
            }
        }
        else if (command == "TYPEOF")
        {
            string name;
            cin >> name;
            // cout << name << endl;
            if (answer[name].empty())
            {
                cout << "UNDECLARED" << endl;
            }
            else
            {
                cout << answer[name].top() << endl;
            }
        }
        else if (command == "{")
        {
            list_of_maps.push_front(pair<map<string, stack<string>>, stack<string>>());
        }
        else
        {
            while (!list_of_maps.front().second.empty())
            {
                string name = list_of_maps.front().second.top();
                list_of_maps.front().second.pop();
                answer[name].pop();
            }
            list_of_maps.pop_front();
        }
    }
}