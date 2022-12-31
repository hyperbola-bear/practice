#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num_of_planets{0};
    cin >> num_of_planets;

    for (int i = 0; i < num_of_planets; i++)
    {
        long long initial_population{0};
        long long growth_factor{0};
        long long food{0};
        cin >> initial_population >> growth_factor >> food;

        long double years{log((food / initial_population) / log(growth_factor))};
        cout << years << endl;
    }
}