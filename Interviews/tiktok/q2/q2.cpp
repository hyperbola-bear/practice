#include <bits/stdc++.h>

using namespace std;

string hackTheBank(long tomPassword, long jerryPassword)
{
    string tompw = to_string(tomPassword);
    string jerrypw = to_string(jerryPassword);
    if (tompw.size() > jerrypw.size())
    {
        return "-1";
    }
    if (tompw.size() < jerrypw.size())
    {

        sort(tompw.begin(), tompw.end(), greater<int>());
        return tompw;
    }
    // sort(tompw.begin(), tompw.end(), greater<int>());
    // cout << tompw << endl;
    sort(tompw.begin(), tompw.end());
    // cout << tompw << endl;
    if (tompw > jerrypw)
    {
        return "-1";
    }
    for (int i = 0; i < tompw.size(); i++)
    {
        char greatest{'-'};
        int index{0};
        for (int j = i; j < tompw.size(); j++)
        {
            // cout << "tompw[j]: " << tompw[j] << endl;

            if (tompw[j] <= jerrypw[i])
            {
                greatest = tompw[j];
                index = j;
            }
        }
        // cout << "greatest: " << greatest << endl;

        if (tompw.substr(i) > jerrypw.substr(i))
        {
            sort(tompw.begin() + index, tompw.end(), greater<int>());
            return tompw;
        }
        tompw.erase(tompw.begin() + index, tompw.begin() + index + 1);
        tompw = greatest + tompw;
        if (greatest < jerrypw[i])
        {
            // cout << "greatest < jerry: " << tompw << endl;
            sort(tompw.begin() + index, tompw.end(), greater<int>());
            return tompw;
        }
    }
    return tompw;
}

int main()
{
    long tomPassword = 43223510;
    long jerryPassword = 33210003;
    string result = hackTheBank(tomPassword, jerryPassword);
    cout << result << endl;
    return 0;
}