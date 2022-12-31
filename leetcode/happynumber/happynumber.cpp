#include <bits/stdc++.h>

using namespace std;

bool isHappy(int n)
{
    set<int> s;
    int temp{0};
    while (n > 0)
    {
        int r = n % 10;
        temp += r * r;
        n /= 10;
        if (n == 0)
        {
            if (temp == 1)
            {
                return true;
            }
            int s_size = s.size();
            s.insert(temp);
            if (s.size() == s_size)
            {
                return false;
            }
            n = temp;
            temp = 0;
        }
    }
    return false;
}

int main()
{
    int n = 19;
    cout << isHappy(n) << endl;
    return 0;
}