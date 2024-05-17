#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max = -2, min = 99999, imax = 0, imin = 0;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        if (s <= min)
        {
            min = s;
            imin = i;
        }
        if (s >= max)
        {
            max = s;
            imax = i;
        }
        nums.push_back(s);
    }


    if (imax >= imin)
    {
        if ((n - imax) > (imin))
        {
            imax = n - 1;
            cout << imax - imin;
        }
        else
        {   
            imin = 0;
            cout << imax;
        }
    }
    else
    {
        if ((n - imin) > (imax))
        {
            imin = n - 1;
            cout << imin - imax;
        }
        else
        {
            imax = 0;
            cout << imin;
        }
    }
}