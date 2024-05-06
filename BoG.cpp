#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cin >> name;
    int flag = 0;
    vector<char> letras;

    for (int i = 0; i < name.length(); i++)
    {
        char k = name[i];
        int count = 1;

        for (int j = 0; j < name.length(); j++)
        {
           if (k == name[j] && i != j){
            count ++;
            name[j] = ' ';
           }
        }

        if (k != ' '){
            letras.push_back(k);
        }
    }

    if (letras.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }

    
}