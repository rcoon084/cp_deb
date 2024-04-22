#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int cuartos;
    cin >> cuartos;
    int libres = 0;
    for (int i = 0; i < cuartos; i++){
        int gente, capacidad;
        cin >> gente >> capacidad;
        if (capacidad - gente >= 2){
            libres ++;
        }
    }

    cout << libres;
    return 0;
}
