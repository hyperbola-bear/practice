#include <bits/stdc++.h>
using namespace std;

void clear(stack<char> &s)
{
    while (!s.empty())
    {
        s.pop();
    }
}

int main()
{
    string s = "";
    cin >> s;
    stack<char> stk;
    int longest{0}, current{0};
    for (int i = 0; i < s.size(); i++)
    {
        if (current > longest)
        {
            longest = current;
        }
        switch (s[i])
        {
        case '(':
        case '{':
        case '[':
            stk.push(s[i]);
            continue;
        case ')':
            if (stk.empty())
            {
                current = 0;
                continue;
            }
            else if (stk.top() == '(')
            {
                stk.pop();
                current += 2;
                continue;
            }
            else
            {
                clear(stk);
                current = 0;
                continue;
            }
        case '}':
            if (stk.empty())
            {
                current = 0;
                continue;
            }
            else if (stk.top() == '{')
            {
                stk.pop();
                current += 2;
                continue;
            }
            else
            {
                clear(stk);
                current = 0;
                continue;
            }
        case ']':
            if (stk.empty())
            {
                current = 0;
                continue;
            }
            else if (stk.top() == '[')
            {
                stk.pop();
                current += 2;
                continue;
            }
            else
            {
                clear(stk);
                current = 0;
                continue;
            }
        }
    }
    if (current > longest)
    {
        longest = current;
    }
    cout << longest << endl;
}