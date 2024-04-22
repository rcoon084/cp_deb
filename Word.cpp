#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    string mas = "";
    string min = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            mas = mas + s[i];
        }
        else
        {
            min = min + s[i];
        }
    }

    if (min.length() >= mas.length())
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }

    cout << s;
    return 0;
}
