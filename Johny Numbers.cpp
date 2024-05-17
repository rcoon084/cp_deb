#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    for (int i = 0; i <= k * n * 2; i++){
        if (k * i > n){
            cout << k * i;
            break;
        }
    }

}