#include <bits/stdc++.h>

using namespace std;

int numTilings(int n)
{
    if (n < 3)
    {
        return n;
    }
    vector<long long> max_combi(n + 1, 0);
    long long mod = 1e9 + 7;
    max_combi[1] = 1;
    max_combi[2] = 2;
    max_combi[3] = 5;
    cout << max_combi[0] << " " << max_combi[1] << " " << max_combi[2] << " " << max_combi[3] << endl;
    for (int i = 4; i < n + 1; i++)
    {
        cout << i << " " << max_combi[i - 2] << " " << max_combi[i - 1] << endl;
        max_combi[i] = (max_combi[i - 2] * 2 + max_combi[i - 1] * 5) % mod;
    }
    return max_combi[n];
}

int main()
{
    int n = 1;
    cout << numTilings(n) << endl;
    return 0;
}