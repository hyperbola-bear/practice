#include <iostream>

using namespace std;
template <class T>
class ListArray
{
private:
    int N;
    T A[100];

public:
    ListArray() : N(0) {} // initialize N to 0
    T get(int i)          // return the i-th element of A
    {
        return A[i];
    }
    {
        if (i < 0 || i >= N)
        {
            cout << "Index out of bounds" << endl;
            return 0;
        }
        return A[i];
    }

    int search(T v)
    { // class T
        for (int i = 0; i < N, i++)
        {
            if (A[i] == v)
            {
                return i;
            }
            return -1;
        }
    }

    void insert(int i, T v)
    {
        if ((N == 100) || (i < 0) || (i > N))
        {
            return;
        }
        for ()
    }
}