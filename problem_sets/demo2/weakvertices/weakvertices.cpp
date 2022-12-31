#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    while (cin >> size, size != -1)
    {
        vector<vector<int>> v(size + 1, vector<int>(size + 1));
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < size; i++)
        {
            bool weak = true;
            for (int j = 0; j < size; j++)
            {
                if (v[i][j] == 1)
                {
                    for (int k = j + 1; k < size; k++)
                    {
                        if (v[i][k] == 1)
                        {
                            if (v[j][k] == 1)
                            {
                                weak = false;
                                break;
                            }
                        }
                    }
                }
                if (!weak)
                {
                    break;
                }
            }
            if (weak)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}