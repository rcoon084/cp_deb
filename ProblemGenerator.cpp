#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;

    for (int c = 0; c < casos; c++)
    {
        int banca, rounds;
        string problemas;
        cin >> banca >> rounds >> problemas;

        unordered_map<char, int> esta;

        for (char i = 'A'; i <= 'G'; i++)
        {
            esta[i] = 0;
        }
        int count = 0;

        for (int i = 0; i < problemas.length(); i++)
        {
            esta[problemas[i]]++;
        }

        for (const auto &pair : esta)
        {
            if (pair.second < rounds)
            {
                count += (rounds - pair.second);
            }
        }

        cout << count << endl;
    }
}