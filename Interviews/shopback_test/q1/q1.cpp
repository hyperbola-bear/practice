#include <bits/stdc++.h>

using namespace std;

int priceCheck(vector<string> products, vector<float> productPrices, vector<string> productSold, vector<float> soldPrice)
{
    unordered_map<string, float> m;
    for (int i = 0; i < products.size(); i++)
    {
        m[products[i]] = productPrices[i];
    }
    int count = 0;
    for (int i = 0; i < productSold.size(); i++)
    {
        if (m[productSold[i]] != soldPrice[i])
        {
            count++;
        }
    }
}