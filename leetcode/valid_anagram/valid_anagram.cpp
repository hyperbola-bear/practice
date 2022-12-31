#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    map<char, int> set_s;
    map<char, int> set_t;

    for (auto &i : s)
    {
        if (set_s.find(i) != set_s.end())
        {
            set_s[i]++;
        }
        else
        {

            set_s[i] = 1;
        }
    }
    for (auto &i : t)
    {
        if (set_t.find(i) != set_t.end())
        {
            set_t[i]++;
        }
        else
        {

            set_t[i] = 1;
        }
    }

    if (set_s == set_t)
    {
        return true;
    }

    return false;
}

int main()
{
    string s{"anagram"};
    string t{"nagaram"};
    bool result = isAnagram(s, t);
    cout << boolalpha << result << endl;
}