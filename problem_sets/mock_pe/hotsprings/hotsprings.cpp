#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int i, j;
    i = v.size() / 2;
    j = 1;
    while (i <= v.size() - 1 && i >= 0)
    {
        cout << v[i] << " ";
        if (i >= v.size() / 2)
        {
            i -= j;
        }
        else
        {
            i += j;
        }
        j++;
    }
    cout << endl;
}