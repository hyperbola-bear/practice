
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    int num_of_brackets{0};
    cin >> num_of_brackets;
    stack<char> brackets;
    for (int i = 0; i < num_of_brackets; i++)
    {
        char bracket;
        cin >> bracket;
        if (bracket == ')' || bracket == ']' || bracket == '}')
        {
            if (brackets.empty())
            {
                cout << "Invalid" << endl;
                return 0;
            }
            brackets.push(bracket);
            char b2{brackets.top()};

            brackets.pop();
            char b1{brackets.top()};
            // cout << b1 << " " << b2 << endl;
            brackets.pop();
            if (b1 == '(' && b2 == ')' || b1 == '[' && b2 == ']' || b1 == '{' && b2 == '}')
            {
                continue;
            }
            else
            {
                cout << "Invalid" << endl;
                return 0;
            }
        }
        else
        {
            brackets.push(bracket);
        }
    }
    if (brackets.empty())
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}