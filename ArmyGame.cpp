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

long long gameWithCells(long long n, long long m) {
    long long rows = n;
    long long cols = m;
    if (rows % 2 != 0 && rows > 2) {
        rows++;
    } 
    if (cols % 2 != 0 && cols > 2) {
        cols++;
        cout << "a " << endl;
    }
    cout << rows << endl << cols << endl;
    if (rows == 1 && cols == 1) {
        return (rows * cols);
    } else if (rows < 2 || cols < 2) {
        return (rows * cols) / 2;
    } else {
        return (rows * cols) / 4;
    }
}


int main()
{
    long long n, m;
    cin >> n >> m;

    cout << gameWithCells(n, m);

    return 0;
}

