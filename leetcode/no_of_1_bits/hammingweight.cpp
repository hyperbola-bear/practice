#include <bits/stdc++.h>

using namespace std;

int hammingWeight(uint32_t n)
{
    int ones{0};
    while (n) // while(n > 0) is faster
    {
        ones += n & 1;
        n >>= 1; // n = n >> 1 is faster
    }
    return ones;
}

int main()
{
    uint32_t n = 00000000000000000000000000001011;
    cout << hammingWeight(n) << endl;
    return 0;
}