#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long queue_length{0};
    cin >> queue_length;
    cin.ignore();
    vector<long long> queue{};
    vector<long long> queue1{};
    int zero_yet(1);

    for (long long i = 0; i < queue_length; i++)
    {
        long long happiness{0};
        cin >> happiness;
        if (happiness == 0)
        {
            zero_yet = 0;
            continue;
        }
        queue.push_back(happiness * (i + zero_yet));
        queue1.push_back(happiness * (i + zero_yet + 1));
    }

    long long base{0};
    long long zero_inserted{0};
    // long long temp{0};
    for (long long i = 0; i < queue_length - 1; i++)
    {
        // cout << "queue " << queue[i] << endl;
        // cout << "queue1 " << queue1[i] << endl;
        base += queue.at(i);
        zero_inserted += queue1.at(i);
        if (base > zero_inserted)
        {
            zero_inserted = base;
        }
    }
    cout << zero_inserted << endl;
}