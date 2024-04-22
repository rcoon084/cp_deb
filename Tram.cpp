#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int enTren = 0;
    int min = 0;
    for (int i = 0; i < n ; i++){
        int sale, entra;
        cin >> sale >> entra;
        enTren -= sale;
        enTren += entra;
        if (min < enTren){
            min = enTren;
        }
    }
    cout << min;
    return 0;
}
