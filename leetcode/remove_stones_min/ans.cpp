#include <bits/stdc++.h>

using namespace std;

int minStoneSum(vector<int> &piles, int k)
{
    priority_queue<int> pq;
    int count{0};
    for (auto &i : piles)
    {
        pq.push(i);
        count += i;
    }
    for (int i = 0; i < k; i++)
    {
        int top = pq.top();
        // cout << top << " ";

        if (top == 0)
        {
            return 0;
        }
        pq.pop();
        // cout << ceil(top / 2.0) << endl;
        pq.push(ceil(top / 2.0));
        count -= top / 2;
    }
    return count;
}

int main()
{
    vector<int> piles{1};
    int k = 3;
    cout << minStoneSum(piles, k) << endl;
}