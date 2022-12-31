#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double target{0};
    double percentage{0};
    int days{0};
    int counter{0};
    cin >> target >> percentage >> days;

    const double p_target{target};

    for (long i = 0; i < days; i++)
    {
        double hours{0};
        cin >> hours;
        double buffer{hours - target};
        if (buffer >= 0)
        {
            counter++;
        }
        buffer *= (percentage / 100);
        target = ceil(p_target - buffer);
        // cout << "target: " << target << endl;
    }
    cout << counter << endl;
}