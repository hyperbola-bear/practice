#include <iostream>

using namespace std;

int calculate(int a, int b = 10)
{
    return a + b;
}

int main()
{

    // default params value
    int a{0};
    cin >> a;
    cout << calculate(a) << endl;
}