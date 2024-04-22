#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;
    int flag = 0;
    for (int i = 0; i < casos; i++){
        int opinion;
        cin >> opinion;
        if (opinion == 1){
            flag = 1;
        }
    }

    if (flag == 0){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}
