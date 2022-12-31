#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
    int length{0};
    int height{0};
    int num_of_stickers{0};
    cin >> length >> height >> num_of_stickers;

    char **laptop{new char *[height]};
    for (int count = 0; count < height; ++count)
    {
        laptop[count] = new char[length];
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            laptop[i][j] = '_';
        }
    }

    for (int i = 0; i < num_of_stickers; i++)
    {
        int size_y{0};
        int size_x{0};
        int starting_y{0};
        int starting_x{0};
        cin >> size_x >> size_y >> starting_x >> starting_y;
        for (int j = starting_y; j < (starting_y + size_y > height ? height : starting_y + size_y); j++)
        {
            // cout << "j: " << j << endl;
            for (int k = starting_x; k < (starting_x + size_x > length ? length : starting_x + size_x); k++)
            {
                // cout << "k: " << k << endl;
                laptop[j][k] = static_cast<char>(i + 'a');
            }
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << laptop[i][j];
        }
        cout << endl;
    }
}