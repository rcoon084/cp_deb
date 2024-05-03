#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m ;
    int flag = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            char col;
            cin >> col;

            if (col != 'W' && col != 'B' && col != 'G'){
                flag = 1;
            }
        }
    }

    if (flag == 0){
        cout << "#Black&White";
    }else{
        cout << "#Color";
    }
    return 0;
}
