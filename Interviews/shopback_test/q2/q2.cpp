#include <bits/stdc++.h>

using namespace std;

long minStart(int arr_count, int *arr)
{
    long min = 0;
    long minstart = 0;
    for (int i = 0; i < arr_count; i++)
    {
        minstart += arr[i];
        // cout << "minstart: " << minstart << endl;
        if (minstart < min)
        {
            min = minstart;
        }
    }
    if (min >= 0)
    {
        return 1;
    }
    return 0 + 1 - min;
}

int main()
{
    int arr[] = {
        -5,
        4,
        -2,
        3,
        1,
        -1,
        -6,
        -1,
        0,
        5};

    // int arr[] = {3, -6, 5, -2, 1};
    cout << minStart(10, arr) << endl;
    return 0;
}