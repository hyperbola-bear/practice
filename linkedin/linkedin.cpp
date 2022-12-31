// #ifndef
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[9] = {7585, 7930, 7062, 9143, 8316, 5585, 3167, 8451, 4676};
    for (auto &i : n)
    {
        cout << i % 31 << endl;
    }
}