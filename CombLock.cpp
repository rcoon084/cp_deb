#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0;
    string lock, key;
    cin >> n >> lock >> key;

    for (int i = 0; i < n; i++){
        int l = lock[i] - '0', k = key[i] - '0';
        if ( abs(l - k) <= 10 - abs(l - k) ){
            count += abs(l - k);
        }else{
            count += 10 - abs(l - k);
        }
    }

    cout << count;
}