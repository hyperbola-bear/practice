#include <bits/stdc++.h>

using namespace std;

string solution(string a, string b)
{
    deque<int> dq;
    dq.push_front(0);
    int i{int(a.length() - 1)}, j{int(b.length() - 1)};
    while (i >= 0 || j >= 0)
    {
        int sum = 0;
        if (i >= 0)
        {
            // cout << "a[i]: " << a[i] << " sum: " << sum << endl;
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            // cout << "b[j]: " << b[j] << " sum: " << sum << endl;
            sum += b[j] - '0';
            j--;
        }
        int front = dq.front();
        // cout << "front: " << front << " sum" << sum << endl;

        if (front + sum > 1)
        {
            dq.pop_front();
            dq.push_front((front + sum) - 2);
            // cout << "dq.front()+1: " << dq.front() << endl;
            dq.push_front(1);
        }
        else
        {
            dq.pop_front();
            dq.push_front(sum + front);
            // cout << "dq.front(): " << dq.front() << endl;
            dq.push_front(0);
        }
    }
    string result;
    for (auto &i : dq)
    {
        result += to_string(i);
        // cout << "i:" << i << " result: " << result << endl;
    }
    if (result[0] == '0')
    {
        result.erase(0, 1);
    }
    return result;
}

int main()
{
    string a = "1000", b = "111";
    // cout << solution(a, b) << endl;
}
