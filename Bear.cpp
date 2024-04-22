#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int ann = 0;
    while (a <= b){
        a *= 3;
        b *= 2;
        ann++;
    }
    cout << ann;
    return 0;
}
