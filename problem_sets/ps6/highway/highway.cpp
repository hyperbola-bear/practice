#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long cities{0}, danger{0}, min{1000001};
    long long total{0};
    cin >> cities;

    for (long long i = 0; i < cities; i++)
    {
        cin >> danger;
        if (danger < min)
        {
            min = danger;
        }
        total += danger;
    }
    if (cities == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    total = total + (cities - 2) * min;
    cout << total << endl;
}