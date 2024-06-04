#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int valor, moneda, actual, resto, total, menor;
    cin >> valor >> moneda;

    for (int i = 0; i < 200; i++){
        
        actual = valor * i;

        if ((actual % 10) != 0){
            resto = (actual % 10) / moneda;
            total = floor(actual / 10) + resto;
            if ( i == 0){
                menor = total;
            }else{
                menor = min(total, menor);
            }
        }
        cout << actual << " " << resto << " " << total << " " << menor << endl;
    }

    cout << menor;
    
}