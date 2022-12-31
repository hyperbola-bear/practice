#include <bits/stdc++.h>
using namespace std;

void combinations(string &digits, string combi, int k, vector<string> &ans, unordered_map<char, string> map)
{
    cout << digits << " " << combi << " " << k << endl;
    if (k == digits.size())
    {
        ans.push_back(combi);
        return;
    }

    for (int j = 0; j < map[digits[k]].size(); j++)
    {

        string temp = combi + map[digits[k]][j];

        combinations(digits, temp, k + 1, ans, map);
    }
};

int main()
{
    string digits = "";
    cin >> digits;
    cout << digits << endl;
    int n = digits.length();
    unordered_map<char, string> map;
    map['2'] = "abc";
    map['3'] = "def";
    map['4'] = "ghi";
    map['5'] = "jkl";
    map['6'] = "mno";
    map['7'] = "pqrs";
    map['8'] = "tuv";
    map['9'] = "wxyz";
    vector<string> ans;
    if (n == 0)
    {
        cout << "[]";
        return 0;
    }
    combinations(digits, "", 0, ans, map);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << '"' << ans[i] << '"';
        }
        else
        {
            cout << '"' << ans[i] << '"' << ",";
        }
    }
    cout << "]" << endl;
}