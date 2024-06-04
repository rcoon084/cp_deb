#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;

    for (int c = 0; c < casos; c++)
    {
        int numCubos, iFavorito, numQuitar, efim, fav, count = 0, quitados = 0;
        bool quita = false;
        cin >> numCubos >> iFavorito >> numQuitar;

        vector<int> valores;

        for (int n = 1; n < numCubos + 1; n++)
        {
            cin >> efim;
            if (n == iFavorito)
            {
                fav = efim;
            }
            valores.push_back(efim);
        }

        for (int n = 0; n < numCubos; n++)
        {
            if (valores[n] == fav)
            {
                count++;
            }
        }

        sort(valores.begin(), valores.end());

        for (int i = valores.size() - 1; i > static_cast<int>(valores.size()) - numQuitar - 1; i--)
        {

            if (valores[i] == fav)
            {
                quita = true;
                quitados++;
            }
        }

        
        if (quita == true && quitados == count)
        {
            cout << "YES" << endl;
        }
        else if (quita == true && count == 1)
        {
            cout << "YES" << endl;
        }
        else if (quita == true && count > 1)
        {
            cout << "MAYBE" << endl;
        }
        else if (quita == false)
        {
            cout << "NO" << endl;
        }
    }
}