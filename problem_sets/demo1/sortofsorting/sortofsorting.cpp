#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int num_of_names{0};

    while (cin >> num_of_names, num_of_names)

    {
        vector<string> names{num_of_names};

        for (auto &name : names)
        {
            cin >> name;
        }
        stable_sort(names.begin(), names.end(), [](const string a, const string b)
                    {
            if (a[0] != b[0])
            {
                return a[0] < b[0];
            }
            
            return a[1] < b[1]; });
        for (auto &name : names)
        {
            cout << name << endl;
        }
        cout << endl;
    }
    return 0;
}