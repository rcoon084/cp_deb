#include <bits/stdc++.h>

using namespace std;
bool prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> Comp(int n)
{
    vector<int> resultado;
    for (int i = 2; i <= n / 2; i++)
    {
        if (!(prime(i)))
        {
            resultado.push_back(i);
        }
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    int n, flag = 0;
    cin >> n;
    vector<int> j = Comp(n);

    for (int i = 0; i < j.size(); i++)
    {
        int x = n - j[i];
        if (!prime(x) && !prime(j[i]))
        {
            cout << x << " " << j[i];
            break;
        }
    }
}