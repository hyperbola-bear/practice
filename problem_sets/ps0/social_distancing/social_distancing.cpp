#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int num_of_seats{0};
    int num_of_seats_available{0};
    cin >> num_of_seats;
    vector<int> seats(num_of_seats);
    int num_of_seats_taken{0};
    cin >> num_of_seats_taken;
    for (int i = 0; i < num_of_seats_taken; i++)
    {
        int seat_taken{0};
        cin >> seat_taken;
        seats[seat_taken - 1] = 1;
    }
    for (int i = 0; i < num_of_seats; i++)
    {
        // cout << i << " " << seats[i] << endl;
        if (seats[i] == 0)
        {
            if (i == 0)
            {
                if ((seats[num_of_seats - 1] != 1) && (seats[i + 1] != 1))
                {
                    num_of_seats_available++;
                    seats[i] = 1;
                    // cout << num_of_seats_available << endl;
                }
                continue;
            }

            if (i == num_of_seats - 1)
            {
                if ((seats[0] != 1) && (seats[i - 1] != 1))
                {
                    num_of_seats_available++;
                    seats[i] = 1;
                    // cout << num_of_seats_available << endl;
                }
                continue;
            }

            if ((seats[i - 1] != 1) && (seats[i + 1] != 1))
            {
                num_of_seats_available++;
                seats[i] = 1;
                // cout << num_of_seats_available << endl;
            }
            continue;
        }
        i++;
    }
    cout << num_of_seats_available << endl;
}