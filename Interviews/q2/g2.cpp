#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int N = s.length();
    int start{0}, end{N - 1};
    while (start < end)
    {
        if (s[start] == '?' && s[end] == '?')
        {
            s[start] = 'a';
            s[end] = 'a';
        }
        else if (s[start] == '?')
        {
            s[start] = s[end];
        }
        else if (s[end] == '?')
        {
            s[end] = s[start];
        }
        if (s[start] != s[end])
        {
            s = "NO";
            break;
        }
        start++;
        end--;
    }
    if (start == end)
    {
        if (s[start] == '?')
        {
            s[start] = 'a';
        }
    }
    cout << s << endl;
}