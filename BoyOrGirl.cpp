#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


// TERMINAR ///////////////////////////////////////////////////////////////////////////77
int main(int argc, char const *argv[])
{
    string nombre;
    cin >> nombre;
    vector<pair<char, int>> abc ;
    abc.push_back({' ', 0});
    int flag = 0;
    int tamano = 1;
    for (int i = 0; i < nombre.length(); i++){
        flag = 0;
        for(int j = 1; j < nombre.length(); j++){
            if (nombre[i] != abc[j].first && flag == 0){
                abc.push_back({nombre[i], 1});
                cout << abc[j].first << abc[j].second << "primero" << nombre[i] << endl;
                tamano++;
                flag = 1 ;
            }else if (nombre[i] == abc[j].first){
                abc[j].second++;
                cout << abc[j].first << abc[j].second << "agregado" << nombre[i] << endl;
            }
            cout << tamano << " " << j << " " << i << endl;
        }
    }

    for (int i = 0; i < abc.size(); i++){
        cout << abc[i].first << endl;
        cout << abc[i].second << endl;
    }
    return 0;
}
