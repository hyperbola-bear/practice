#include <bits/stdc++.h>

using namespace std;

long evalRPN(vector<string> &tokens)
{
    stack<string> s;
    for (auto &i : tokens)
    {
        if (i == "+")
        {
            long temp_2 = stol(s.top());
            s.pop();
            long temp_1 = stol(s.top());
            s.pop();
            cout << temp_1 << " " << temp_2 << endl;
            long temp = temp_1 + temp_2;
            s.push(to_string(temp));
            cout << s.top() << endl;
        }
        else if (i == "-")
        {
            long temp_2 = stol(s.top());
            s.pop();
            long temp_1 = stol(s.top());
            s.pop();
            cout << temp_1 << " " << temp_2 << endl;
            long temp = temp_1 - temp_2;
            s.push(to_string(temp));
            cout << s.top() << endl;
        }
        else if (i == "*")
        {
            long temp_2 = stol(s.top());
            s.pop();
            long temp_1 = stol(s.top());
            s.pop();
            cout << temp_1 << " " << temp_2 << endl;
            long temp = temp_1 * temp_2;
            s.push(to_string(temp));
            cout << s.top() << endl;
        }
        else if (i == "/")
        {
            long temp_2 = stol(s.top());
            s.pop();
            long temp_1 = stol(s.top());
            s.pop();
            cout << temp_1 << " " << temp_2 << endl;
            long temp = temp_1 / temp_2;
            s.push(to_string(temp));
            cout << s.top() << endl;
        }
        else
        {
            s.push(i);
        }
    }
    return stoi(s.top());
}

int main()
{
    vector<string> tokens{"-128", "-128", "*", "-128", "*", "-128", "*", "8", "*", "-1", "*"};
    cout << evalRPN(tokens) << endl;
    return 0;
}