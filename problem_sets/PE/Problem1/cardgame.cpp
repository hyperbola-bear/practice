#include <bits/stdc++.h>
// LT16_3ND3R
using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num_commands;
    cin >> num_commands;
    deque<int> deck;
    unordered_map<int, stack<char>> cards; // first is card, second is num
    vector<pair<int, int>> vect;
    for (int i = 0; i < num_commands; i++)
    {
        string command;
        cin >> command;
        if (command == "PUT_TOP")
        {
            int num, card;
            cin >> num >> card;
            for (int j = 0; j < num; j++)
            {
                deck.push_front(card);
            }
            cards[card].push('a');
        }
        else if (command == "PUT_BOTTOM")
        {
            int num, card;
            cin >> num >> card;
            for (int j = 0; j < num; j++)
            {
                deck.push_back(card);
            }
            cards[card].push('a');
        }
        else if (command == "REMOVE_TOP")
        {
            int times;
            cin >> times;
            for (int i = 0; i < times; i++)
            {
                cards[deck.front()].pop();
                if (cards[deck.front()].empty())
                {
                    cards.erase(deck.front());
                }
                deck.pop_front();
            }
        }
        else if (command == "REMOVE_BOTTOM")
        {
            int times;
            cin >> times;
            for (int i = 0; i < times; i++)
            {
                cards[deck.back()].pop();
                if (cards[deck.back()].empty())
                {
                    cards.erase(deck.back());
                }
                deck.pop_back();
            }
        }
        for (auto it = cards.begin(); it != cards.end(); it++)
        {
            vect.push_back({it->first, it->second.size()});
        }
        sort(vect.begin(), vect.end(), cmp);

        // cout << i.first << " " << i.second << endl;
        cout << vect[0].first << endl;
        vect.clear();
    }
}