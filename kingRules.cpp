#include <bits/stdc++.h>

using namespace std;

int main()
{
    string pos;
    cin >> pos;

    int num = pos[1] - '0';
    char letr = pos[0];

    if (letr == 'a' || letr == 'h')
    {
        if (num == 1 || num == 8)
        {
            cout << 3;
        }
        else
        {
            cout << 5;
        }
    }
    else
    {
        if (num == 1 || num == 8)
        {
            cout << 5;
        }
        else
        {
            cout << 8;
        }
    }
}