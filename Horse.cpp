#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<string> patitass = {s1, s2, s3, s4};

    string patita;
    int count = 0;
    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        patita = patitass[i];

        if (patita == patitass[0])
        {
            count++;
            cout << patitass[0] << " " << count << endl;
            patitass[0] = "";
            patitass[i] = "";
        }
        if (patita == patitass[1])
        {
            count++;
            cout << patitass[1] << " " << count << endl;
            patitass[1] = "";
            patitass[i] = "";
        }
        if (patita == patitass[2])
        {
            count++;
            cout << patitass[2] << " " << count << endl;
            patitass[2] = "";
            patitass[i] = "";
        }
        if (patita == patitass[3])
        {
            count++;
            cout << patitass[3] << " " << count << endl;
            patitass[3] = "";
            patitass[i] = "";
        }

        if (count > 1)
        {
            total++;
        }
    }

    cout << total;
    return 0;
}
