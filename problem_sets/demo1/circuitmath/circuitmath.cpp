#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int num_of_letters{0};
    cin >> num_of_letters;
    vector<bool> letters;
    stack<bool> letter;
    for (int i = 0; i < num_of_letters; i++)
    {
        char letter;
        cin >> letter;
        if (letter == 'T')
        {
            letters.push_back(true);
        }
        else
        {
            letters.push_back(false);
        }
    }
    cin.ignore();
    string s1{};

    getline(cin, s1);

    for (auto s : s1)
    {

        if (s >= 'A' && s <= 'Z')
        {
            letter.push(letters[s - 'A']);
        }
        else if (s == '*')
        {
            bool var1, var2;
            var1 = letter.top();
            letter.pop();
            var2 = letter.top();
            letter.pop();

            letter.push(var1 && var2);
        }
        else if (s == '+')
        {
            bool var1, var2;
            var1 = letter.top();
            letter.pop();
            var2 = letter.top();
            letter.pop();

            letter.push(var1 || var2);
        }
        else if (s == '-')
        {
            bool var1;
            var1 = letter.top();
            letter.pop();

            letter.push(!var1);
        }
        else
        {
            continue;
        }
    }
    char result = letter.top() ? 'T' : 'F';
    cout << result << endl;
}