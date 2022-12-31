#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;
    if (N % 2 == 0)
    {
        s = 'a';
        for (int i = 0; i < N - 1; i++)
        {
            s += 'b';
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            s += 'a';
        }
    }
    return s;
}