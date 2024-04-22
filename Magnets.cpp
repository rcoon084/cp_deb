#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//TERMINAR EJERCICIO

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;
    string anterior;
    int flag = 0;
    int total = 0;
    for (int i = 0; i < casos; i++)
    {
        string domino;
        cin >> domino;
        if (i == 0 || flag == 1)
        {
            anterior == domino;
        }
        else if (anterior != domino)
        {
            flag = 1;
            total++;
            cout << i;
        }
    }

    cout << total;

    return 0;
}
