#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, count = 0;
    cin >> n >> m;

    for (int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if (pow(i, 2)+ j == n && pow(j, 2)+ i == m){
                count ++;
            }
        }
    }

    cout << count;
}