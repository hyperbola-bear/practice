#include <bits/stdc++.h>

using namespace std;
int vect[101][101];
int paths(int curr_m, int curr_n, int m, int n)
{
    if (curr_m == m || curr_n == n)
    {
        return 0;
    }
    if (curr_m == m - 1 && curr_n == n - 1)
    {
        return 1;
    }
    if (vect[curr_m][curr_n])
    {
        return vect[curr_m][curr_n];
    }
    else
    {
        return vect[curr_m][curr_n] = paths(curr_m + 1, curr_n, m, n) + paths(curr_m, curr_n + 1, m, n);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << paths(0, 0, m, n) << endl;
}