#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num_of_classes{0};
    cin >> num_of_classes;
    for (int i = 0; i < num_of_classes; i++)
    {
        int class_num{0};
        cin >> class_num;
        vector<int> vec;
        int steps{0};
        for (int j = 0; j < 20; j++)
        {
            int height{0};
            cin >> height;
            if (j == 0)
            {
                vec.push_back(height);
            }
            else
            {

                for (int k = 0; k < vec.size(); k++)
                {
                    if (vec[k] > height)
                    {
                        vec.insert(vec.begin() + k, height);
                        steps += vec.size() - k - 1;
                        break;
                    }
                }
                if (vec.size() == j)
                {
                    vec.push_back(height);
                }
            }
        }
        cout << class_num << " " << steps << endl;
    }
}