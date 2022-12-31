#include <bits/stdc++.h>

using namespace std;

uint32_t reverseBits(uint64_t n)
{
    uint64_t result = 0;
    cout << n << endl;
    string str = bitset<32>(n).to_string();
    cout << str << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
        result += pow(2, i) * (str[i] - '0');
        cout << result << endl;
    }
    return result;
}

int main()
{
    uint64_t n = 43261596;
    cout << reverseBits(n) << endl;
    return 0;
}