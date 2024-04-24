#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int cantidad;
    cin >> cantidad;
    float pTotal = 0;
    float total;
    for (int i = 0; i < cantidad; i++){
        float porcentaje;
        cin >> porcentaje;

        porcentaje /= 100;
        
        pTotal += porcentaje;

    }

    total = (pTotal / cantidad) * 100;

    cout << setprecision(7) << total;

    return 0;
}
