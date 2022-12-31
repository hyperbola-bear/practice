#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{

    int num_of_pairs{};
    cin >> num_of_pairs;
    cin.ignore();
    for (long i = 0; i < num_of_pairs; i++)
    {
        char array1[19]{}, array2[19];
        vector<int> array3;
        int array3_index{0};
        cin.getline(array1, 19);
        cin.getline(array2, 19);

        long array1_len{static_cast<long>(strlen(array1))};
        long array2_len{static_cast<long>(strlen(array2))};

        for (long j{array1_len - 1}, k{array2_len - 1}; (j >= 0 || k >= 0); j -= 2, k -= 2)

        {

            if (j >= 0)
            {

                if (array3.size() != array3_index)
                {

                    array3.at(array3_index) += array1[j] - '0';
                    if (array3[array3_index] > 9)
                    {
                        array3[array3_index] -= 10;
                        array3.push_back(1);
                    }
                }
                else
                {
                    array3.push_back(array1[j] - '0');
                }
            }
            if (k >= 0)
            {

                if (array3.size() != array3_index)
                {
                    array3[array3_index] += array2[k] - '0';
                    if (array3[array3_index] > 9)
                    {
                        array3[array3_index] -= 10;
                        array3.push_back(1);
                    }
                }
                else
                {
                    array3.push_back(array2[k] - '0');
                }
            }
            array3_index++;
        }

        for (int j = array3.size() - 1; j >= 0; j--)
        {
            if (!(j == array3.size() - 1))
            {
                cout << " ";
            }
            cout << array3.at(j);

            if (j == 0)
            {
                cout << endl;
            }
        }
    }
}