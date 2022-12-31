#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> A = {"eav", "yqw", "tyn", "vjn", "pbc"};

    int max{0};
    for (int i = 0; i < A.size() - 1; i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            set<char> s;
            string temp = A[i] + A[j];
            for (int k = 0; k < temp.length(); k++)
            {
                s.insert(temp[k]);
            }
            if (s.size() == temp.length())
            {
                A.push_back(temp);
                if (s.size() > max)
                {
                    max = s.size();
                }
            }
            s.clear();
        }
    }

    return max;
}