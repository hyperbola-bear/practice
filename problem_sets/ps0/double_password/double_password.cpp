#include <iostream>
using namespace std;

int main()
{
    char pw1[5]{}, pw2[5]{};
    int difference{1};
    cin.getline(pw1, 5);
    cin.getline(pw2, 5);
    for (int i = 0; i < 5; i++)
    {
        if (pw1[i] != pw2[i])
        {
            difference *= 2;
        }
    }
    cout << difference << endl;
}