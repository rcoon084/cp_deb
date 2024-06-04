#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;

    for (int c = 0; c < casos; c++)
    {
        int tamOriginal, efim, mods, diferencias = 0;
        cin >> tamOriginal;

        vector<int> original, encontrado, modificaciones;

        for (int i = 0; i < tamOriginal; i++)
        {
            cin >> efim;
            original.push_back(efim);
        }
        for (int i = 0; i < tamOriginal; i++)
        {
            cin >> efim;
            encontrado.push_back(efim);
        }

        cin >> mods;
        for (int i = 0; i < mods; i++)
        {
            cin >> efim;
            modificaciones.push_back(efim);
        }

        unordered_map <int, int> comparador;
        vector <int> numsDiferentes;

        for(int i = 0; i < tamOriginal; i++){
            if(original[i] != encontrado[i]){
                diferencias++;
                numsDiferentes.push_back (encontrado[i]);
                comparador[encontrado[i]] = 0;
            }
        }

        if(mods < diferencias){
            cout << "NO" << endl;
            continue;
        }

        auto j = comparador.begin(); //recorre comparador
        for (int i = 0; i < mods; i++){ //recorre mods
            while (j != comparador.end()){
                if (j -> first == modificaciones[i]){
                    j -> second = modificaciones[i]; //si son iguales se almacena, luego se compara resultado de comparador con numsDiferentes
                    j++;
                }
            }
        }
        //Si comparador es igual a nums diferentes en el segundo par, entonces da YES, si no da NO
        int d = 0, count = 0;
        for(auto const& j : comparador){
            if (j.second != numsDiferentes[d]){
                count ++;
            }
            d++;
        }



        if (count == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        



        



    }
}