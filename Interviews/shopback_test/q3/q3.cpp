#include <bits/stdc++.h>

using namespace std;

int countPairs(vector<int> numbers, int k)
{

    unordered_map<int, int> m;
    int count = 0;
    for (auto &i : numbers)
    {
        m[i] = i;
    }
    for (auto &i : m)
    {
        if (m.find(i.first + k) != m.end())
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> numbers = {1, 5, 3, 4, 2, 3, 1, 5};
    cout << countPairs(numbers, 2) << endl;
    return 0;
}