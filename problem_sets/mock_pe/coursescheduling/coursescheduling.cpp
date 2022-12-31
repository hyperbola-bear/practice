#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, list<string>> m;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        string name = a + b;
        int pass = 0;
        if (m[c].empty())
        {

            m[c].push_front(name);
        }
        else
        {
            for (auto it = m[c].begin(); it != m[c].end(); it++)
            {
                if (name == *it)
                {
                    pass = 1;
                    break;
                }
            }
            if (pass == 0)
            {
                m[c].push_front(name);
            }
        }
    }
    for (auto &i : m)
    {
        cout << i.first << " " << i.second.size() << endl;
    }
}