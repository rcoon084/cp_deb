#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long c;
    cin >> c;

    long long i = 1, count = 0, num = c;
    while(num > 0){
        num -= ((i*(i+1))/2);
        if (num >= 0 || c == 1){
            count ++;
        }
        i++;
    }

    cout << count;
}