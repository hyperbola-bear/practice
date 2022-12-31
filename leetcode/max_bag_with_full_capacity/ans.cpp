#include <bits/stdc++.h>

using namespace std;
int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
{
    priority_queue<int> pq;
    int n = rocks.size();
    int count{0};
    for (int i = 0; i < n; i++)
    {
        pq.push(rocks[i] - capacity[i]);
    }
    while (pq.top() == 0 && count < n)
    {
        pq.pop();
        count++;
    }
    while (additionalRocks >= -pq.top() && count < n)
    {
        additionalRocks += pq.top();
        pq.pop();
        count++;
    }
    return count;
}

int main()
{
    vector<int> capacity{2, 3, 4, 5};
    vector<int> rocks{1, 1, 4, 4};
    int additionalRocks = 1;
    cout << maximumBags(capacity, rocks, additionalRocks) << endl;
    return 0;
}