#include <iostream>
using namespace std;

int main()
{
    int pos1{}, pos2{}, pos3{};
    cin >> pos1 >> pos2 >> pos3;

    int displacement1{pos2 - pos1}, displacement2{pos3 - pos2};

    if (displacement1 == displacement2)
    {
        cout << "cruised" << endl;
        return 0;
    }
    else if (displacement1 >= 0 && displacement2 >= 0)
    {
        if (displacement1 > displacement2)
        {
            cout << "braked" << endl;
        }
        else
        {
            cout << "accelerated" << endl;
        }
        return 0;
    }
    else if (displacement1 <= 0 && displacement2 <= 0)
    {
        if (displacement1 < displacement2)
        {
            cout << "braked" << endl;
        }
        else
        {
            cout << "accelerated" << endl;
        }
        return 0;
    }
    cout << "turned" << endl;

    return 0;
}