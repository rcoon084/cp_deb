#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (n % 10 != 0){
            n--;
        }else{
            n /= 10;
        }
    }
    cout << n ;
    return 0;
}
