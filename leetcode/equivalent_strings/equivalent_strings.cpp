#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> word1, word2;
    // word1 = {"a", "cb"};
    // word2 = {"ab", "c"};
    word1 = {"a", "bc"};
    word2 = {"ab", "c"};
    string temp1 = "";
    string temp2 = "";
    for (auto &i : word1)
    {
        temp1 += i;
    }
    for (auto &i : word2)
    {
        temp2 += i;
    }
    cout << boolalpha << (temp1 == temp2) << endl;
}