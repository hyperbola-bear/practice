#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int num_streets;
    cin >> num_streets;
    vector<int> streets{0};
    vector<pair<int, int>> people{{0, 0}};
    for (int i = 1; i < num_streets + 1; i++)
    {
        int street;
        cin >> street;
        streets.push_back(street);
        people.push_back({i, street});
    }
    int num_connects;
    cin >> num_connects;
    for (int i = 0; i < num_connects; i++)
    {
        int street1, street2;
        cin >> street1 >> street2;
        people[street1].second += streets[street2];
        people[street2].second += streets[street1];
    }

    stable_sort(people.begin(), people.end(), sortbysec);

    cout << people[1].first << endl;
}
