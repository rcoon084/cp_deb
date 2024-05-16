#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, min = 100, max = 0, imin = 0, imax = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if (e > max)
        {
            max = e;
            imax = i;
        }
        if (e < min)
        {
            min = e;
            imin = i;
        }
    }
    int di = 0, df = 0, d = abs(imax - imin);


    if (d == n - 1){
        cout << d;
    }else if (imax < imin){
        di = imax;
        df = n - imin;
    }else if (imax >= imin){
        di = imin;
        df = n - imax;
    }

    if (df >= di){
        cout << (df + 1) - di;
    }else{
        cout << (di + 1) - df;
    }
    
}