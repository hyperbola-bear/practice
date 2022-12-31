#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        char front = tolower(s[start]);
        char back = tolower(s[end]);
        if (isalnum(front) && isalnum(back))
        {
            if (front != back)
            {
                return false;
            }
            start++;
            end--;
        }
        else if (!isalnum(front))
        {
            start++;
        }
        else if ((!isalnum(back)))
        {
            end--;
        }
    }
    return true;
}

int main()
{
    cout << boolalpha << isPalindrome("A man, a plan, a canal: Panama");
}