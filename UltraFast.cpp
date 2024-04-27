#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string l1, l2;
    cin >> l1 >> l2;

    string total = "";

    for (int i = 0; i < l1.length(); i++){
        if (l1[i] == l2[i]){
            total += '0';
        }else{
            total += '1';
        }
    }

    cout << total;
    return 0;
}
