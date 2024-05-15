#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<bool> letras(26);

    string s, may;
    int n, as, flag = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        may += toupper(s[i]);
    }
    for (int i = 0; i < letras.size(); i++){
        letras[i] = false;
    }
    for (int i = 0; i < n; i++){
        as = may[i];
        as -= 65;
        letras[as] = true;
    }
    for(int i = 0; i < letras.size(); i++){
        if(letras[i] != true){
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}