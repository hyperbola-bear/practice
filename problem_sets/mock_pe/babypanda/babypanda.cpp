#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long days{0}, slime{0}, count{0};
    cin >> days >> slime;
    while (slime > 0)
    {
        slime /= 2;
        if (slime % 2 == 1)
        {

            count += 1;
        }
        }
    cout << count << endl;
}