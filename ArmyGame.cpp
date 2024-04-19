#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'gameWithCells' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

long long gameWithCells(long long n, long long m, long long a) {
    long long rows = n;
    long long cols = m;

    if (rows % a != 0 && rows > a) {
        rows += (a - (rows % a));
    } 
    if (cols % a != 0 && cols > a) {
        cols += (a - (cols % a));
    }
    if (rows < a && cols < a) {
        return 1;
    } else if (rows < a || cols < a) {
        return (rows * cols) / a;
    } else {
        return (rows * cols) / (a*a);
    }
}


int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    cout << gameWithCells(n, m, a);

    return 0;
}

