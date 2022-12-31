#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1{};
    getline(cin, s1);
    size_t s_len = s1.length();
    char vowels[10]{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count{0};
    for (size_t i = 0; i < s_len; i++)
    {
        if (find(vowels, vowels + 10, s1[i]) != vowels + 10)
        {
            count++;
        }
    }

    cout << count << endl;
}
