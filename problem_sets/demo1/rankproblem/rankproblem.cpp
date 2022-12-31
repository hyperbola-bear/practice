#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num_of_teams{0};
    int num_of_games{0};
    vector<string> team_positions;
    cin >> num_of_teams >> num_of_games;
    for (int i = 0; i < num_of_teams; i++)
    {
        string team_name{"T" + to_string(i + 1)};
        team_positions.push_back(team_name);
    }
    for (int i = 0; i < num_of_games; i++)
    {
        string winner{""};
        string loser{""};
        cin >> winner >> loser;
        auto winner_position{find(team_positions.begin(), team_positions.end(), winner) - team_positions.begin()};
        auto loser_position{find(team_positions.begin(), team_positions.end(), loser) - team_positions.begin()};
        // cout << winner_position << " " << loser_position << endl;

        if (winner_position > loser_position)
        {
            team_positions.erase(team_positions.begin() + loser_position);
            team_positions.insert(team_positions.begin() + winner_position, loser);

            for (auto teams : team_positions)
            {
                // cout << teams << " ";
            }
        }
    }
    for (int i = 0; i < num_of_teams; i++)
    {
        cout << team_positions[i];
        if (i != num_of_teams - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}