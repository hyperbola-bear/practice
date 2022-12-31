#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> initial_queue;
    int initial_num{0};
    cin >> initial_num;
    for (int i = 0; i < initial_num; i++)
    {
        string temp;
        cin >> temp;
        initial_queue.push_back(temp);
    }

    // for (auto person : initial_queue)
    // {
    //     cout << person << " ";
    // }
    // cout << endl;

    int num_of_changes{0};

    cin >> num_of_changes;

    for (int i = 0; i < num_of_changes; i++)
    {
        string action;
        cin >> action;
        if (action == "leave")
        {
            string name;
            cin >> name;
            int name_position{find(initial_queue.begin(), initial_queue.end(), name) - initial_queue.begin()};
            initial_queue.erase(initial_queue.begin() + name_position);
        }
        else if (action == "cut")
        {
            string cutter;
            string cutted;
            cin >> cutter >> cutted;
            int cutted_position{find(initial_queue.begin(), initial_queue.end(), cutted) - initial_queue.begin()};
            initial_queue.insert(initial_queue.begin() + cutted_position, cutter);
        }
    }

    for (auto person : initial_queue)
    {
        cout << person << " ";
    }
    cout << endl;
}