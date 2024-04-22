#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int amigos, cerca;
    cin >> amigos >> cerca;
    int largo = 0;
    for (int i  = 0 ; i < amigos; i++){
        int altura;
        cin >> altura;
        if (cerca < altura){
            largo += 2;
        }else{
            largo ++;
        }
    }
    cout << largo;
    return 0;
}
