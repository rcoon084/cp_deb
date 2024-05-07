#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0, llamadas = 0, flag = 0;
    cin >> n ;

    vector <string> idds;
    for (int i = 0; i < n; i ++){
        string id;
        cin >> id;

        idds.push_back(id);
    }

    for (int i = 0; i < n; i ++){
        count = 0;
        for (int j = 0; j < n; j ++){
            if (idds[i] == idds[j] && i != j && idds[i] != " " && idds[i] != "0"){
                count ++;
                idds[j] = " ";
            }
        }
        if (count >= 2){
            cout << -1;
            flag = 1;
            break;
        }else if (count == 1){
            llamadas++;
        }
    }

    if (flag == 0){
        cout << llamadas;
    }
    
}