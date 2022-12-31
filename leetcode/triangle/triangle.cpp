#include <bits/stdc++.h>

using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    int depth{2}, mini{999999};
    if (triangle.size() == 1)
    {
        return triangle[0][0];
    }
    triangle[1][0] += triangle[0][0];
    triangle[1][1] += triangle[0][0];
    if (triangle.size() == 2)
    {
        return min(triangle[1][0], triangle[1][1]);
    }
    while (depth < triangle.size())
    {
        for (int index = 0; index < triangle[depth].size(); index++)
        {

            cout << "depth: " << depth << " index: " << index << endl;
            cout << "before: " << triangle[depth][index] << endl;

            if (index != 0)
            {
                if (index == triangle[depth].size() - 1)
                {
                    triangle[depth][index] += triangle[depth - 1][index - 1];
                }
                else
                {

                    triangle[depth][index] += min(triangle[depth - 1][index], triangle[depth - 1][index - 1]);
                }
            }
            else
            {

                triangle[depth][index] += triangle[depth - 1][index];
            }
            cout << "after: " << triangle[depth][index] << endl;
            if (depth == triangle.size() - 1)
            {

                if (static_cast<int>(triangle[depth][index]) < mini)
                {
                    mini = triangle[depth][index];
                }
            }
        }
        depth++;
    }
    return mini;
}

int main()
{
    vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(triangle) << endl;
}

// class Solution
// {
// public:
//     int minimumTotal(vector<vector<int>> &triangle)
//     {
//         int depth{2}, min{999999};
//         if (triangle.size() == 1)
//         {
//             return triangle[0][0];
//         }
//         triangle[1][0] += triangle[0][0];
//         triangle[1][1] += triangle[0][0];
//         while (depth != triangle.size() - 1)
//         {
//             for (int index = 0; index < triangle.size() - 1; index++)
//                 if (index != 0)
//                 {
//                     if (triangle[depth - 1][index] < triangle[depth - 1][index - 1])
//                     {
//                         triangle[depth][index] += triangle[depth - 1][index];
//                     }
//                     else
//                     {
//                         triangle[depth][index] += triangle[depth - 1][index - 1];
//                     }
//                 }
//                 else
//                 {

//                     triangle[depth][index] += triangle[depth - 1][index];
//                 }
//             if (triangle[depth][index] < min)
//             {
//                 min = triangle[depth][index];
//             }
//             depth++;
//         }
//         return min;
//     }
// };