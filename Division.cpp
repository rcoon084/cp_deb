#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++){
        long long div;
        cin >> div;

        if (div <= 1399){
            cout << "Division 4" << endl;
        }else if (div >= 1400 && div <= 1599){
            cout << "Division 3" << endl;
        }else if (div >= 1600 && div <= 1899){
            cout << "Division 2" << endl;
        }else if (div >= 1900){
            cout << "Division 1" << endl;
        }
    }
    return 0;
}
