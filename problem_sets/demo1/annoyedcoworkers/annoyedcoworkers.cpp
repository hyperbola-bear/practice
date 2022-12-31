#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long help{0}, coworkers{0};
    cin >> help >> coworkers;
    priority_queue<pair<long long, long long>> pq;

    for (long long i = 0; i < coworkers; i++)
    {
        long long annoyence{0}, annoy{0};
        cin >> annoyence >> annoy;
        pq.push(make_pair(-(annoyence + annoy), annoy));
    }

    while (help)
    {
        pair<long long, long long> temp = pq.top();
        pq.pop();
        temp.first -= temp.second;
        pq.push(temp);
        help--;
    }
    long long max{0};
    while (pq.empty() == false)
    {
        long long temp = -pq.top().first - pq.top().second;
        pq.pop();
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}