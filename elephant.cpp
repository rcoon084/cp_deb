#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    long long x;
    cin >> x;
    int i = 0;
    int div = 0;
    int res = 0;
    while (x > 0){
        if (x >= 5){
            div = floor(x / 5);
            res = x - (div * 5);
            x = res;
        }else if(x >= 4){
            div = floor(x / 4);
            res = x - (div * 4);
            x = res;
        }else if(x >= 3){
            div = floor(x / 3);
            res = x - (div * 3);
            x = res;
        }else if(x >= 2){
            div = floor(x / 2);
            res = x - (div * 2);
            x = res;
        }else if(x >= 1 ){
            div = x;
            res = 0;
            x = res;
        }
        i+= div;
    }

    cout << i ;
    
    return 0;
}
