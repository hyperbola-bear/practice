#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> smaller;
    multimap<int, int> larger;
    string n;
    while (cin >> n)
    {
        // cout << "smaller: ";
        // for (auto it = smaller.begin(); it != smaller.end(); it++)
        // {
        //     cout << it->first << " ";
        // }
        // cout << endl;
        // cout << "larger: ";
        // for (auto it = larger.begin(); it != larger.end(); it++)
        // {
        //     cout << it->first << " ";
        // }
        // cout << endl;
        if (n == "#")
        {
            if (smaller.size() > larger.size())
            {
                cout << smaller.rbegin()->first << endl;
                auto it = smaller.end();
                it--;
                smaller.erase(it);
            }
            else
            {
                cout << larger.begin()->first << endl;
                larger.erase(larger.begin());
            }
        }
        else
        {
            if (smaller.empty())
            {
                smaller.insert({stoi(n), 1});
            }
            else
            {
                if (stoi(n) < smaller.rbegin()->first)
                {
                    smaller.insert({stoi(n), 1});
                }
                else
                {
                    larger.insert({stoi(n), 1});
                }
            }
            if (smaller.size() > larger.size() + 1)
            {
                larger.insert({smaller.rbegin()->first, 1});
                auto it = smaller.end();
                it--;
                smaller.erase(it);
            }
            else if (1 + smaller.size() < larger.size())
            {
                smaller.insert({larger.begin()->first, 1});
                larger.erase(larger.begin());
            }
        }
        // cout << "smaller: ";
        // for (auto it = smaller.begin(); it != smaller.end(); it++)
        // {
        //     cout << it->first << " ";
        // }
        // cout << endl;
        // cout << "larger: ";
        // for (auto it = larger.begin(); it != larger.end(); it++)
        // {
        //     cout << it->first << " ";
        // }
        // cout << endl;
    }
}
