#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0, flag1 = 0, flag2 = 0;
    cin >> n;
    vector<int> clock = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < n; i++)
    {
        vector<int> R;
        vector<int> L;
        count = 0;
        int a, b, c, d, dist = 0;
        cin >> a >> b >> c >> d;
        if (a > b)
        {
            int o = a;
            a = b;
            b = o;
        }

        for (int j = 1; j <= 12; j++)
        {
            if ((j > a && a < b && j < b))
            {
                R.push_back(j);
            }
            else if (j != a && j != b)
            {
                L.push_back(j);
            }
        }
        sort(L.begin(), L.end());
        sort(R.begin(), R.end());

        flag1 = 0;
        flag2 = 0;

        // Si es 1 esta en derecha, si es dos esta en izquierda. F1 es c, F2 es d

        for (int j = 0; j < R.size(); j++)
        {
            if (R[j] == c)
            {
                flag1 = 1;
            }
            else if (R[j] == d)
            {
                flag2 = 1;
            }
        }
        for (int j = 0; j < L.size(); j++)
        {
            if (L[j] == c)
            {
                flag1 = 2;
            }
            else if (L[j] == d)
            {
                flag2 = 2;
            }
        }

        if (flag1 == flag2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}