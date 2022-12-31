#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    int num_of_words{0};
    cin >> num_of_words;
    cin.ignore();
    char last_char{};
    const char vowels[5]{'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < num_of_words; i++)
    {
        if ((i != 0) || (i != num_of_words - 1))
        {
            cout << " ";
        }
        char order[101]{};
        cin >> order;
        size_t order_size{strlen(order)};
        for (size_t j = 0; j < order_size; j++)
        {
            if (j == 0)
            {
                cout << order[j];
                last_char = order[j];
                continue;
            }
            if (find(vowels, vowels + 5, order[j]) == vowels + 5)
            {
                if (order[j] != order[j - 1])
                {
                    cout << order[j];
                    last_char = order[j];
                    continue;
                }
            }
            if ((j == order_size - 1) && (order[j] != last_char))

            {
                cout << order[j];
            }
        }
    }
    cout << endl;
}