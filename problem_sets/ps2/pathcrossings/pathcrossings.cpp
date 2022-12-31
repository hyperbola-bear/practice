// A0239017H
// Hung Hin Wang Clement
// B02
// Ayaze

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class path
{
public:
    int player{0};
    int pos_x{0}, pos_y{0};
    long long time{0};

    bool operator<(const path &other) const
    {
        if (time == other.time)
        {
            return player < other.player;
        }
        return time < other.time;
    }
};

class player
{
public:
    int player1{0};
    int player2{0};

    bool operator<(const player &other) const
    {
        if (player1 == other.player1)
        {
            return player2 < other.player2;
        }
        return player1 < other.player1;
    }
};

int main()
{
    long long num_of_players{0}, num_of_paths{0};
    cin >> num_of_players >> num_of_paths;
    vector<path> paths;
    vector<player> players;
    int counter{0};

    for (int i = 0; i < num_of_paths; i++)
    {
        path p;
        cin >> p.player >> p.pos_x >> p.pos_y >> p.time;
        paths.push_back(p);
    }
    sort(paths.begin(), paths.end());
    // for (auto path : paths)
    // {
    //     cout << path.player << " " << path.pos_x << " " << path.pos_y << " " << path.time << endl;
    // }
    // cout << paths.size() << endl;

    for (int i = 0; i < paths.size(); i++)
    {
        for (int j = 1; (i + j < paths.size() && j < 5); j++)
        {
            int pass{1};

            if (paths[i + j].time - paths[i].time <= 10)
            {

                if (sqrt(pow(paths[i + j].pos_x - paths[i].pos_x, 2) + pow(paths[i + j].pos_y - paths[i].pos_y, 2)) <= 1000)
                {
                    if (paths[i + j].player != paths[i].player)
                    {
                        player x;
                        if (paths[i].player < paths[i + j].player)
                        {

                            x.player1 = paths[i].player;
                            x.player2 = paths[i + j].player;
                        }
                        else
                        {
                            x.player1 = paths[i + j].player;
                            x.player2 = paths[i].player;
                        }
                        for (auto player : players)
                        {
                            if ((player.player1 == x.player1 && player.player2 == x.player2))
                            {
                                pass = 0;
                                break;
                            }
                        }
                        if (pass)
                        {
                            players.push_back(x);
                            counter++;
                        }
                    }
                }
            }
        }
    }

    sort(players.begin(), players.end());
    cout << counter << endl;
    for (int i = 0; i < players.size(); i++)
    {
        cout << players[i].player1 << " " << players[i].player2 << endl;
    }
}