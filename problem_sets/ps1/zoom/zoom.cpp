#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long size{0};
    cin >> size;
    vector<long long> vect{};
    for (long long i = 0; i < size; i++)
    {
        unsigned long long num{0};
        cin >> num;
        vect.push_back(num);
    }

    for (long long i = 1; i < (size / 2 + 1); i++)
    {
        long long pass{1};
        // cout << "pass: " << pass << endl;
        // cout << "i: " << i << endl;
        for (long long j = i - 1; j + i < size; j += i)
        {
            // cout << "j: " << j << endl;
            if (vect.at(j) >= vect.at(j + i))
            {
                // cout << "vect[j]: " << vect[j] << endl;
                // cout << "vect[j + i]: " << vect[j + i] << endl;
                pass = 0;
                break;
            }
        }
        // cout << "pass: " << pass << endl;
        if (pass == 1)
        {

            cout << i << endl;
            return 0;
        }
    }
    cout << "ABORT!" << endl;
}