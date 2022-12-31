#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        int num{0};
        cin >> num;
        vec.push_back(num);
    }
    while (!(is_sorted(vec.begin(), vec.end())))
    {
        for (int i = 0; i < 4; i++)
        {
            if (vec[i] > vec[i + 1])
            {
                swap(vec[i], vec[i + 1]);
                for (auto i : vec)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
}