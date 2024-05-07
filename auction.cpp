#include <bits/stdc++.h>

using namespace std;

bool segundo(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<pair<int, int>> bid;

    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> b;

        bid.push_back(make_pair(i, b));
    }

    sort(bid.begin(), bid.end(), segundo);

    if (bid.size() >= 2)
    {
        cout << bid[bid.size() - 1].first << " " << bid[bid.size() - 2].second;
    }
    else
    {
        cout << bid[bid.size() - 1].first << " " << bid[bid.size() - 1].second;
    }
}