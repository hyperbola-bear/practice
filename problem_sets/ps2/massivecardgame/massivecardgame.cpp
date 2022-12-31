// A0239017H
// Hung Hin Wang Clement
// B02
// Ayaze

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;

ll binary_search_first(ll start, ll end, vector<ll> &vec, ll target)
{
    if (end < 0)
    {
        return 0;
    }
    // cout << "start: " << start << " end: " << end << endl;
    ll mid = (start + end) / 2;
    if (vec[mid] == target)
    {
        if (mid == 0 || vec[mid - 1] != target)
        {
            return mid - 1;
        }
        else
        {
            return binary_search_first(start, mid, vec, target);
        }
    }
    else if (start == end)
    {
        return (target < vec[mid] ? mid - 1 : mid);
    }
    else if (vec[mid] > target)
    {
        return binary_search_first(start, mid, vec, target);
    }
    else
    {
        return binary_search_first(mid + 1, end, vec, target);
    }
}

ll binary_search_last(ll start, ll end, vector<ll> &vec, ll target)
{
    if (end < 0)
    {
        return 0;
    }
    // cout << "start: " << start << " end: " << end << endl;
    ll mid = (start + end) / 2;
    if (vec[mid] == target)
    {
        if (mid == vec.size() - 1 || vec[mid + 1] != target)
        {
            return mid;
        }
        else
        {
            return binary_search_last(mid + 1, end, vec, target);
        }
    }
    else if (start == end)
    {
        return (target > vec[mid] ? mid : mid - 1);
    }

    else if (vec[mid] > target)
    {
        return binary_search_last(start, mid, vec, target);
    }
    else
    {
        return binary_search_last(mid + 1, end, vec, target);
    }
}

int main()
{
    ll num_of_cards{0};
    cin >> num_of_cards;
    vector<ll> cards;
    for (ll i = 0; i < num_of_cards; i++)
    {
        ll card{0};
        cin >> card;
        cards.push_back(card);
    }
    sort(cards.begin(), cards.end());
    ll num_of_queries{0};
    cin >> num_of_queries;
    for (ll i = 0; i < num_of_queries; i++)
    {
        ll left{0}, right{0};
        cin >> left >> right;
        ll first_index = binary_search_first(0, cards.size() - 1, cards, left);
        ll last_index = binary_search_last(0, cards.size() - 1, cards, right);
        cout << last_index - first_index << endl;
        // cout << "last index: " << last_index << " first index: " << first_index << " range: " << last_index - first_index << endl;
    }
}