#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_of_elements, num_of_removal;
    cin >> num_of_elements >> num_of_removal;
    vector<int> dups;
    unordered_map<int, int> freq;

    for (int i = 0; i < num_of_elements; i++)
    {
        int temp;
        cin >> temp;
        dups.push_back(temp);
        freq[temp]++;
    }
    set<int> s(dups.begin(), dups.end());
    vector<int> v(s.begin(), s.end());
    vector<int> vect;
    for (auto &i : v)
    {
        {
            vect.push_back(freq[i]);
        }
    }

    priority_queue<int> pq;
    for (auto &i : vect)
    {
        if (i != 0)
        {
            pq.push(i);
        }
    }
    for (int i = 0; i < num_of_removal; i++)
    {
        int top = pq.top();
        pq.pop();
        pq.push(top - 1);
    }
    cout << pq.top() << endl;
}