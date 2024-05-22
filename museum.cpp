#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char cambio = 'a';
    int count = 0, tam = s.length(), num, dir, menor;

    for (int i = 0; i < tam; i++){
        num = s[i] - cambio;

        if (num < 0){
            num *= -1;
        }

        dir = 26 - num;

        menor = min(dir, num);
        count += menor;

        cambio = s[i];
    }

    cout << count;

    return 0;
}