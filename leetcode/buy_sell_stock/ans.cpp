#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{

    int hold = INT16_MIN;
    int sell = 0;
    int cd = 0;
    for (auto &i : prices)
    {
        int prevhold = hold;
        int prevsell = sell;
        int prevcd = cd;

        hold = max(prevhold, prevcd - i);
        sell = prevhold + i;
        cd = max(prevcd, prevsell);
        cout << hold << " " << sell << " " << cd << endl;
    }
    return max(sell, cd);
}

int main()
{
    vector<int> prices = {1, 2, 3, 0, 2};
    cout << maxProfit(prices) << endl;
    return 0;
}