#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;
    vector <int> monedas = {1, 3, 6, 10, 15};

    for (int i = 0; i < casos; i++){
        int val, op1 = 10000000000, op2 = 0;
        cin >> val;

        for (int j = 0; j < 5; j++){
            if (val % monedas[j] == 0 && val / monedas[j] < op1){
                op1 = val / monedas[j];
            }
        }

        cout << op1 << endl;
    }
}