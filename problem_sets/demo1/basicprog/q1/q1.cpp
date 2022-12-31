#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long array_size{0};
    int question_no{0};
    cin >> array_size >> question_no;
    vector<long long> array;
    for (long long i = 0; i < array_size; i++)
    {
        long long temp{0};
        cin >> temp;
        array.push_back(temp);
    }
    stable_sort(array.begin(), array.end());
    if (question_no == 1)
    {
        int64_t start{0}, end{array_size - 1};
        while (array[start] + array[end] != 7777)
        {
            if (array[start] + array[end] > 7777)
            {
                end--;
            }
            else if (array[start] + array[end] < 7777)
            {
                start++;
            }
            if (start >= end)
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }

    else if (question_no == 2)
    {
        if (adjacent_find(array.begin(), array.end()) == array.end())
        {
            cout << "Unique" << endl;
        }
        else
        {
            cout << "Contains duplicate" << endl;
        }
        return 0;
    }

    else if (question_no == 3)
    {
        long long start{0}, bound{0}, end{array_size - 1};
        while (start < end / 2 + 1)
        {
            bound = upper_bound(array.begin() + start, array.end(), array[start]) - array.begin() - start;
            // cout << array[start] << " " << bound << endl;
            if (bound > end / 2)
            {
                cout << array[start] << endl;
                return 0;
            }
            start = bound;
        }
        cout << -1 << endl;
        return 0;
    }
    else if (question_no == 4)
    {
        if (array_size % 2 == 0)
        {
            cout << array[array_size / 2 - 1] << " " << array[array_size / 2] << endl;
        }
        else
        {
            cout << array[array_size / 2] << endl;
        }
    }
    else if (question_no == 5)
    {
        for (auto &num : array)
        {
            if (num >= 100 && num <= 999)
            {
                cout << num << " ";
            }
        }
        cout << endl;
    }
}